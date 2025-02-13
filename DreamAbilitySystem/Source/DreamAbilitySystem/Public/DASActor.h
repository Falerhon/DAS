// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Abilities/DASAbilityController.h"
#include "UObject/Interface.h"
#include "DASActor.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI, NotBlueprintable)
class UDASActor : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class DREAMABILITYSYSTEM_API IDASActor
{
	GENERATED_BODY()


public:
	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
	UFUNCTION(BlueprintCallable, Category="DasActor")
	virtual UDASAbilityController* GetAbilityController() =0;
	UFUNCTION(BlueprintCallable, Category="DasActor")
	virtual UDASAttributesContainerComponent* GetAttributesContainer() =0;
	UFUNCTION(BlueprintCallable, Category="DasActor")
	virtual FGameplayTagContainer& GetTagContainer() =0;
};
