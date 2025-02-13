// Fill out your copyright notice in the Description page of Project Settings.

#include "Attributes/DASAttributesContainerComponent.h"
#include "Attributes/DASAttribute.h"

// Sets default values for this component's properties
UDASAttributesContainerComponent::UDASAttributesContainerComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;
	bAutoActivate = true;
	bWantsInitializeComponent = true;

}

bool UDASAttributesContainerComponent::TryGetAttributeFromName(FName AttributeName, FDASAttribute& OutAttribute)
{
	return TryGetAttribute(FGameplayTag::RequestGameplayTag(AttributeName), OutAttribute);
}

bool UDASAttributesContainerComponent::HasAttributeFromName(FName AttributeName)
{
	return HasAttribute(FGameplayTag::RequestGameplayTag(AttributeName));
}

FDASAttribute& UDASAttributesContainerComponent::GetAttributeFromName(FName AttributeName)
{
	return GetAttribute(FGameplayTag::RequestGameplayTag(AttributeName));
}

bool UDASAttributesContainerComponent::TryGetAttribute(FGameplayTag AttributeTag, FDASAttribute& OutAttribute)
{
	return AttributeSet->TryGetAttribute(AttributeTag, OutAttribute);
}

bool UDASAttributesContainerComponent::HasAttribute(FGameplayTag AttributeTag)
{
	return AttributeSet->HasAttribute(AttributeTag);
}

FDASAttribute& UDASAttributesContainerComponent::GetAttribute(FGameplayTag AttributeTag)
{
	return AttributeSet->GetAttribute(AttributeTag);
}

// Called when the game starts
void UDASAttributesContainerComponent::BeginPlay()
{
	Super::BeginPlay();
	// ...

	
}

void UDASAttributesContainerComponent::InitializeComponent()
{
	Super::InitializeComponent();

	AttributeSet = NewObject<UDASAttributeSet>(this, AttributeSetOverride, FName("AttributeSet"));
	RegisterOwningActorAttributes();
}

void UDASAttributesContainerComponent::RegisterOwningActorAttributes()
{
	if (!GetOwner()) return;

	for (TFieldIterator<FProperty> propIt(GetOwner()->GetClass()); propIt; ++propIt)
	{
		auto prop = *propIt;

		if (!prop) continue;
		if (!prop->GetCPPType().Equals(FString(FDASAttribute::StaticStruct()->GetStructCPPName()))) continue;

		auto gameplayTagName = FString::Printf(TEXT("Gameplay.Attribute.%s"),
			*prop->GetName());

		FGameplayTag attributeTag = FGameplayTag::RequestGameplayTag(FName(gameplayTagName));

		if (!attributeTag.IsValid())
		{
			UE_LOG(LogTemp, Error, TEXT("Could not find tag %s, skipping attribute %s"), *gameplayTagName, *prop->GetName());
			continue;
		}

		FDASAttribute* attr = prop->ContainerPtrToValuePtr<FDASAttribute>(GetOwner());
		attr->Initialize();

		AttributeSet->TryAddExternalAttribute(attributeTag, *attr);
	}
}