// Fill out your copyright notice in the Description page of Project Settings.


#include "Abilities/DASAbilityController.h"
#include "GameplayTagsManager.h"
#include "Engine/ActorChannel.h"
#include "Net/UnrealNetwork.h"

// Sets default values for this component's properties
UDASAbilityController::UDASAbilityController()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = false;

	bReplicateUsingRegisteredSubObjectList = true;

	// ...
}

// Called when the game starts
void UDASAbilityController::BeginPlay()
{
	Super::BeginPlay();

	//If we are the server, we create a replicated dictionnary of 
	//an instance of each abilities linked to their triggering tag
	
	if(GetOwner()->HasAuthority())
	{
		TArray<FGameplayTag> TagsArray;
		TArray<UDASAbility*> AbilitiesArray;
		for (const auto& abilityKP : Abilities)
		{
			UDASAbility* NewAbility = NewObject<UDASAbility>(this, abilityKP.Value);
			AbilitiesInstance.Add(abilityKP.Key, NewAbility);
			AddReplicatedSubObject(NewAbility);

			ReplicatedAbilitiesTagsArray.Add(abilityKP.Key);
			ReplicatedAbilitiesRefArray.Add(NewAbility);
		}
	}
}

void UDASAbilityController::BeginDestroy()
{
	Super::BeginDestroy();

	AbilitiesInstance.Empty();
}

//Handling of the replication of the ability dictionnary
void UDASAbilityController::OnRep_ReplicatedAbilitiesTagsArray()
{
	if (ReplicatedAbilitiesTagsArray.Num() == ReplicatedAbilitiesRefArray.Num())
		SyncClientAbilities();
}

void UDASAbilityController::OnRep_ReplicatedAbilitiesRefArray()
{
	if (ReplicatedAbilitiesTagsArray.Num() == ReplicatedAbilitiesRefArray.Num())
		SyncClientAbilities();
}


// Called every frame
void UDASAbilityController::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}


void UDASAbilityController::TriggerAbility(FGameplayTag AbilityType)
{
	//We try to trigger the ability
	UDASAbility* AbilityToTrigger = nullptr;
	if (auto searchResult = AbilitiesInstance.Find(AbilityType))
	{
		AbilityToTrigger = *searchResult;
		//If the ability can be triggered, we trigger it and add it to the active ability list
		if (!AbilityToTrigger->IsBlocked() && AbilityToTrigger->IsAllowed())
		{
			AbilityToTrigger->Trigger();
			ActiveAbilities.Add(AbilityToTrigger);
		}
		//If the ability can't be triggered, we try to trigger it's fallback
		else if (FGameplayTag fallback = AbilityToTrigger->GetFallback(); fallback != FGameplayTag::EmptyTag) {
			TriggerAbility(fallback);
		} 
	}
}

//Cancel all of the active abilities
void UDASAbilityController::CancelAbilities()
{
	for (auto ability : ActiveAbilities)
	{
		if(ability->CanCancel())
		{
			ability->Cancel();
			ActiveAbilities.Remove(ability);
		}
	}
}

//Remove an ability from the active list
void UDASAbilityController::RemoveActiveAbility(UDASAbility* Ability)
{
	ActiveAbilities.Remove(Ability);
}

//Cancel a specific active ability
void UDASAbilityController::CancelAbility(FGameplayTag Tag)
{
	UDASAbility* Ability = nullptr;
	
	if (AbilitiesInstance.Contains(Tag))
	{
		Ability = AbilitiesInstance[Tag];
	}

	if(Ability != nullptr && ActiveAbilities.Contains(Ability))
	{
		ActiveAbilities.Remove(Ability);
		Ability->Cancel();
	}
}

//Cancel all the abilities with a key (gameplay tag) that is a children of the given Tag
void UDASAbilityController::CancelAbilityChildren(FGameplayTag Tag)
{
	
	UDASAbility* Ability = nullptr;
	FGameplayTagContainer TagChildren;
	TagChildren = UGameplayTagsManager::Get().RequestGameplayTagChildren(Tag);

	for (auto tags : TagChildren)
	{
		if (AbilitiesInstance.Contains(tags))
		{
			Ability = AbilitiesInstance[tags];
		}

		if(Ability != nullptr && ActiveAbilities.Contains(Ability))
		{
			Ability->Cancel();
			ActiveAbilities.Remove(Ability);
		}
	}
}

//Force a sync of the ability instance list for the client
void UDASAbilityController::SyncClientAbilities()
{
	AbilitiesInstance.Empty();
	for (int i = 0; i < ReplicatedAbilitiesRefArray.Num(); i++ )
	{
		AbilitiesInstance.Add(ReplicatedAbilitiesTagsArray[i], ReplicatedAbilitiesRefArray[i]);
	}
}

//Use for variable replication
void UDASAbilityController::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME_CONDITION_NOTIFY(UDASAbilityController, ReplicatedAbilitiesTagsArray, COND_Dynamic, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(UDASAbilityController, ReplicatedAbilitiesRefArray, COND_Dynamic, REPNOTIFY_Always);
}