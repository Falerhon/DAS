// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "DASAttribute.h"
#include "Components/ActorComponent.h"
#include "GameplayTagContainer.h"
#include "DASAttributeSet.h"
#include "DASAttributesContainerComponent.generated.h"

UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class DREAMABILITYSYSTEM_API UDASAttributesContainerComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	// Sets default values for this component's properties
	UDASAttributesContainerComponent();

	UPROPERTY(EditAnywhere)
	TSubclassOf<UDASAttributeSet> AttributeSetOverride = UDASAttributeSet::StaticClass();

#pragma region AttributeSet interfacing
	bool TryGetAttributeFromName(FName AttributeName, FDASAttribute& OutAttribute);
	bool HasAttributeFromName(FName AttributeName);
	FDASAttribute& GetAttributeFromName(FName AttributeName);

	UFUNCTION(BlueprintCallable)
	bool TryGetAttribute(FGameplayTag AttributeTag, FDASAttribute& OutAttribute);

	UFUNCTION(BlueprintCallable)
	bool HasAttribute(FGameplayTag AttributeTag);

	UFUNCTION(BlueprintCallable)
	FDASAttribute& GetAttribute(FGameplayTag AttributeTag);
#pragma endregion

protected:
	virtual void BeginPlay() override;

	virtual void InitializeComponent() override;

	void RegisterOwningActorAttributes();

	UPROPERTY()
	UDASAttributeSet* AttributeSet = nullptr;
};
