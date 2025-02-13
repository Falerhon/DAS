// Fill out your copyright notice in the Description page of Project Settings.

#include "Attributes/DASAttributeSet.h"
#include "Attributes/DASAttribute.h"
#include "GameplayTagContainer.h"
//#include "Kismet2/BlueprintEditorUtils.h"

UDASAttributeSet::UDASAttributeSet()
{
	if (GetFlags() & RF_ClassDefaultObject) return;

	for (TFieldIterator<FProperty> propIt(this->GetClass()); propIt; ++propIt)
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

		FDASAttribute* attr = prop->ContainerPtrToValuePtr<FDASAttribute>(this);
		attr->Initialize();

		Attributes.Add(attributeTag, attr);
	}
}

bool UDASAttributeSet::TryAddExternalAttribute(FGameplayTag AttributeTag, FDASAttribute& Attribute)
{
	if (Attributes.Find(AttributeTag))
		return false;

	Attributes.Add(AttributeTag, &Attribute);

	return true;
}

bool UDASAttributeSet::TryGetAttribute(FGameplayTag AttributeTag, FDASAttribute& OutAttribute)
{
	auto searchResult = Attributes.Find(AttributeTag);
	if (searchResult && *searchResult)
	{
		OutAttribute = **searchResult;
		return true;
	}
	return false;
}

bool UDASAttributeSet::HasAttribute(FGameplayTag AttributeTag)
{
	auto searchResult = Attributes.Find(AttributeTag);
	return searchResult && *searchResult;
}

FDASAttribute& UDASAttributeSet::GetAttribute(FGameplayTag AttributeTag)
{
	return **Attributes.Find(AttributeTag);
}