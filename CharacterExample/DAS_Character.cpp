// Fill out your copyright notice in the Description page of Project Settings.

#include "Character/DAS_Character.h"

#include "Controller/AMAbilityController.h"
#include "Net/UnrealNetwork.h"

// Sets default values
ADAS_Character::ADAS_Character()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	AbilityController = CreateDefaultSubobject<UAMAbilityController>("AbilityController");
	AttributeContainer = CreateDefaultSubobject<UDASAttributesContainerComponent>("AttributeContainer");

	AbilityController->SetIsReplicated(true);
	AttributeContainer->SetIsReplicated(true);

	Health = FDASAttribute(100, 0, 100);
	Attack = FDASAttribute(10, 0, 50);
	DamageModifier = FDASAttribute(1, 0, 10);
}

// Called when the game starts or when spawned
void ADAS_Character::BeginPlay()
{
	Super::BeginPlay();
	Health.OnAttributeValueChange.AddDynamic(this, &ADAS_Character::OnHealthChanged);
}

// Called every frame
void ADAS_Character::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ADAS_Character::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

void ADAS_Character::GetHit_Implementation(float Damage, ADAS_Character* DamageInstigator)
{
	GetHit_CPP(Damage, DamageInstigator);
}

void ADAS_Character::UseMana_Implementation(float RequiredMana)
{
	UseMana_CPP(RequiredMana);
}

void ADAS_Character::GetOwnedGameplayTags(FGameplayTagContainer& Container) const
{
	Container = TagContainer;
}

FGameplayTagContainer& ADAS_Character::GetTagContainer()
{
	return TagContainer;
}

UDASAttributesContainerComponent* ADAS_Character::GetAttributesContainer()
{
	return AttributeContainer;
}

UDASAbilityController* ADAS_Character::GetAbilityController()
{
	return AbilityController;
}

void ADAS_Character::OnRep_Health(FDASAttribute& oldHealth)
{
	Health.OnAttributeValueChange.Broadcast(oldHealth.CurrentValue, Health.CurrentValue);
}

void ADAS_Character::OnRep_Attack(FDASAttribute& oldAttack)
{
	Attack.OnAttributeValueChange.Broadcast(oldAttack.CurrentValue, Attack.CurrentValue);
}

void ADAS_Character::GetHit_CPP(float Damage, ADAS_Character* DamageInstigator)
{
	Health.SetCurrentValue(Health.GetModifiedCurrentValue() - Damage);
}

void ADAS_Character::UseMana_CPP(float RequiredMana)
{
	Mana.SetCurrentValue(Mana.GetModifiedCurrentValue() - RequiredMana);
}

void ADAS_Character::OnRep_Mana(FDASAttribute& oldMana)
{
	Mana.OnAttributeValueChange.Broadcast(oldMana.CurrentValue, Mana.CurrentValue);
}

void ADAS_Character::OnRep_IsDead()
{
	OnDeathEvent.Broadcast(this);
}

void ADAS_Character::OnHealthChanged(float oldValue, float newValue)
{
	if(newValue <= 0 && !IsDead)
	{
		SetIsDead(true);
		TagContainer.AddTag(FGameplayTag::RequestGameplayTag("Gameplay.Status.Down"));
	}
}

void ADAS_Character::SetIsDead(bool newValue)
{
	IsDead = newValue;
	OnRep_IsDead();
}

bool ADAS_Character::GetIsDead()
{
	return IsDead;
}

void ADAS_Character::OnRep_DamageModifier(FDASAttribute& oldDamageModifier)
{
	DamageModifier.OnAttributeValueChange.Broadcast(oldDamageModifier.CurrentValue, DamageModifier.CurrentValue);
}

void ADAS_Character::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	DOREPLIFETIME(ADAS_Character, Health);
	DOREPLIFETIME(ADAS_Character, Attack);
	DOREPLIFETIME(ADAS_Character, IsDead);
	DOREPLIFETIME(ADAS_Character, TagContainer);
	DOREPLIFETIME(ADAS_Character, DamageModifier);
}