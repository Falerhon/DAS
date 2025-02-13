// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "DASActor.h"
#include "GameplayTagAssetInterface.h"
#include "GameFramework/Character.h"
#include "DAS_Character.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnDeath, ACharacter*, instigator);

UCLASS()
class DAS_AM_API ADAS_Character : public ACharacter, public IGameplayTagAssetInterface, public IDASActor
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ADAS_Character();
		UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	FGameplayTagContainer TagContainer;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UDASAbilityController* AbilityController;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UDASAttributesContainerComponent* AttributeContainer;

	UPROPERTY(BlueprintAssignable)
	FOnDeath OnDeathEvent;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void GetHit(float Damage, ADAS_Character* DamageInstigator);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void UseMana(float RequiredMana);
	
	UFUNCTION(BlueprintCallable)
	virtual void GetOwnedGameplayTags(FGameplayTagContainer& Container) const override;

	UFUNCTION(BlueprintCallable)
	virtual FGameplayTagContainer& GetTagContainer() override;

	UFUNCTION(BlueprintCallable)
	virtual UDASAttributesContainerComponent* GetAttributesContainer() override;

	UFUNCTION(BlueprintCallable)
	virtual UDASAbilityController* GetAbilityController() override;
	
	//Health Attribute
	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing=OnRep_Health)
	FDASAttribute Health;
	UFUNCTION()
	void OnRep_Health(FDASAttribute& oldHealth);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing=OnRep_Attack)
	FDASAttribute Attack;
	UFUNCTION()
	void OnRep_Attack(FDASAttribute& oldAttack);
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing=OnRep_DamageModifier)
	FDASAttribute DamageModifier;
	UFUNCTION()
	void OnRep_DamageModifier(FDASAttribute& oldDamageMultiplier);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing=OnRep_Mana)
	FDASAttribute Mana;
	
	UFUNCTION()
	void OnRep_Mana(FDASAttribute& oldMana);
	
	UFUNCTION()
	void OnRep_IsDead();
	
	UFUNCTION()
	void OnHealthChanged(float oldValue, float newValue);

	UFUNCTION(BlueprintCallable)
	void SetIsDead(bool newValue);
	
	UFUNCTION(BlueprintCallable)
	bool GetIsDead();
	
protected:
	UPROPERTY(ReplicatedUsing=OnRep_IsDead, BlueprintReadOnly, VisibleAnywhere)
	bool IsDead;

	virtual void GetHit_CPP(float Damage, ADAS_Character* DamageInstigator);
	virtual void UseMana_CPP(float RequiredMana);
};
