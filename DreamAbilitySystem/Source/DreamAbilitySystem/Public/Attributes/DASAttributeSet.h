// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Attributes/DASAttribute.h"
#include "GameplayTagContainer.h"
#include "DASReplicatedObject.h"
#include "DASAttributeSet.generated.h"

/**
 *
 */
UCLASS()
class DREAMABILITYSYSTEM_API UDASAttributeSet : public UDASReplicatedObject
{
	GENERATED_BODY()
public:
	UDASAttributeSet();

	UFUNCTION(BlueprintCallable)
	bool TryAddExternalAttribute(FGameplayTag AttributeTag, FDASAttribute& Attribute);

	UFUNCTION(BlueprintCallable)
	bool TryGetAttribute(FGameplayTag AttributeTag, FDASAttribute& OutAttribute);

	UFUNCTION(BlueprintCallable)
	bool HasAttribute(FGameplayTag AttributeTag);

	UFUNCTION(BlueprintCallable)
	FDASAttribute& GetAttribute(FGameplayTag AttributeTag);

	TMap<FGameplayTag, FDASAttribute*>& GetRawUnderlyingArray() {
		return Attributes;
	}

private:
	TMap<FGameplayTag, FDASAttribute*> Attributes;
};
