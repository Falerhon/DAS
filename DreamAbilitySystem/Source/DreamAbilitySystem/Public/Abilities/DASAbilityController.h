// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "DASAbility.h"
#include "GameplayTagContainer.h"
#include "Attributes/DASAttributesContainerComponent.h"
#include "DASAbilityController.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class DREAMABILITYSYSTEM_API UDASAbilityController : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UDASAbilityController();
	//Dictionnary of possessed abilities
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<FGameplayTag, TSubclassOf<UDASAbility>> Abilities;
	//Replicated ability lists
	UPROPERTY(ReplicatedUsing=OnRep_ReplicatedAbilitiesTagsArray)
	TArray<FGameplayTag> ReplicatedAbilitiesTagsArray;
	UPROPERTY(ReplicatedUsing=OnRep_ReplicatedAbilitiesRefArray)
	TArray<UDASAbility*> ReplicatedAbilitiesRefArray;
	
protected:
	// Called when the game starts
	virtual void BeginPlay() override;
	virtual void BeginDestroy() override;
	//Lists replications
	UFUNCTION()
	void OnRep_ReplicatedAbilitiesTagsArray();
	UFUNCTION()
	void OnRep_ReplicatedAbilitiesRefArray();
	
public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
	//Try to trigger the ability
	UFUNCTION(BlueprintCallable)
	void TriggerAbility(FGameplayTag AbilityType);
	//Active abilities handling
	UFUNCTION(BlueprintCallable)
	void CancelAbilities();

	UFUNCTION(BlueprintCallable)
	void RemoveActiveAbility(UDASAbility* Ability);

	UFUNCTION(BlueprintCallable)
	void CancelAbility(FGameplayTag Tag);

	UFUNCTION(BlueprintCallable)
	void CancelAbilityChildren(FGameplayTag Tag);
	//Replicated lists syncing
	void SyncClientAbilities();
protected:
	//Dictionary of the abilities' instance
	UPROPERTY()
	TMap<FGameplayTag, UDASAbility*> AbilitiesInstance;
private:
	//Currently active abilities
	UPROPERTY()
	TSet<UDASAbility*> ActiveAbilities; 
		
};
