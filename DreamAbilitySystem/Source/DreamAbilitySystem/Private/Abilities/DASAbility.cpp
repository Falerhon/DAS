// Fill out your copyright notice in the Description page of Project Settings.


#include "Abilities/DASAbility.h"

#include "DASActor.h"
#include "GameplayTagAssetInterface.h"
#include "Kismet/GameplayStatics.h"

//All the classes in this region are implementations of BP classes.
//They call their C++ variant for parts that are handled outside of blueprints
#pragma region Blueprint_Implementations

void UDASAbility::Trigger_Implementation()
{
	Trigger_CPP();
}

void UDASAbility::Complete_Implementation()
{
	Complete_CPP();
}

void UDASAbility::Cancel_Implementation()
{
	Cancel_CPP();
}

FGameplayTag UDASAbility::GetFallback_Implementation()
{
	return GetFallback_CPP();
}

bool UDASAbility::IsBlocked_Implementation()
{
	return IsBlocked_CPP();
}

bool UDASAbility::IsAllowed_Implementation()
{
	return IsAllowed_CPP();
}

bool UDASAbility::CanCancel_Implementation()
{
	return CanCancel_CPP();
}

void UDASAbility::FeedbackTrigger_MulticastRPC_Implementation()
{
	//If we aren't the owner of this actor, we play the feedback
	auto controller = Cast<APawn>(GetOwningActor())->GetController();

	if (!controller || !controller->IsLocalController())
	{
		FeedbackTrigger();
	}
}

void UDASAbility::FeedbackCancel_MulticastRPC_Implementation()
{
	//If we aren't the owner of this actor, we play the feedback
	auto controller = Cast<APawn>(GetOwningActor())->GetController();

	if (!controller || !controller->IsLocalController())
	{
		FeedbackCancel();
	}
}

void UDASAbility::FeedbackComplete_MulticastRPC_Implementation()
{
	//If we aren't the owner of this actor, we play the feedback
	auto controller = Cast<APawn>(GetOwningActor())->GetController();

	if (!controller || !controller->IsLocalController())
	{
		FeedbackComplete();
	}
}

void UDASAbility::FeedbackTrigger_Implementation()
{
	FeedbackTrigger_CPP();
}

void UDASAbility::FeedbackCancel_Implementation()
{
	FeedbackCancel_CPP();
}

void UDASAbility::FeedbackComplete_Implementation()
{
	FeedbackComplete_CPP();
}

//Call the server effect from the client 
//and play the feedback on all other clients
void UDASAbility::ServerNotifyTrigger_ServerRPC_Implementation()
{
	ServerEffectTrigger();
	FeedbackTrigger_MulticastRPC();
}

void UDASAbility::ServerEffectTrigger_Implementation()
{
	ServerEffectTrigger_CPP();
}

void UDASAbility::ServerEffectCancel_Implementation()
{
	ServerEffectCancel_CPP();
}

void UDASAbility::ServerEffectComplete_Implementation()
{
	ServerEffectComplete_CPP();
}

//Call the server effect for the cancel from the client 
//and play the feedback on all other clients
void UDASAbility::ServerNotifyCancel_ServerRPC_Implementation()
{
	ServerEffectCancel();
	FeedbackCancel_MulticastRPC();
}

//Call the server effect for the complete from the client 
//and play the feedback on all other clients
void UDASAbility::ServerNotifyComplete_ServerRPC_Implementation()
{
	ServerEffectComplete();
	FeedbackComplete_MulticastRPC();
}
#pragma endregion

//CPP implementations of the blueprints classes.
//Those implementation do the generic ability handling.
#pragma region CPP_Implementation

//Effects when we trigger the ability
void UDASAbility::Trigger_CPP()
{
	//Add the tags to the owner if we are not the server
	//Allows client prediction
	if (!GetOwningActor()->HasAuthority())
	{
		GetOwner()->GetTagContainer().AppendTags(TagsToApply);
	}

	//Pay the attribute cost of the ability
	for (auto attributeCostInfo : this->AttributesCost)
	{
		if (GetOwner()->GetAttributesContainer()->HasAttribute(attributeCostInfo.Key))
		{
			FDASAttribute& attr = GetOwner()->GetAttributesContainer()->GetAttribute(attributeCostInfo.Key);
			attr.SetCurrentValue(attr.GetModifiedCurrentValue() - attributeCostInfo.Value);
		}
	}
	
	FeedbackTrigger();

	ServerNotifyTrigger_ServerRPC();

}

//Effects when the ability is completed
void UDASAbility::Complete_CPP()
{
	FeedbackComplete();
	ServerNotifyComplete_ServerRPC();
	if (!GetOwningActor()->HasAuthority())
	{
		GetOwner()->GetTagContainer().RemoveTags(TagsToApply);
	}
	GetOwningComponent()->RemoveActiveAbility(this);
}

//Effects when the ability is cancelled
void UDASAbility::Cancel_CPP()
{
	FeedbackCancel();
	ServerNotifyCancel_ServerRPC();
	if (!GetOwningActor()->HasAuthority())
	{
		GetOwner()->GetTagContainer().RemoveTags(TagsToApply);
	}
	GetOwningComponent()->RemoveActiveAbility(this);
}

//Get the tag of the ability that we should 
//try to trigger if this one is blocked
FGameplayTag UDASAbility::GetFallback_CPP()
{
	return FallbackTag;
}

//Check if the character has any of the blocking elements that could block the ability
bool UDASAbility::IsBlocked_CPP()
{
	if (auto DasActor = GetOwner())
	{
		auto& TagContainer = DasActor->GetTagContainer();
		if (TagContainer.HasAny(BlockedBy))
		{
			// If the owner has a tag that blocks 
			return true;
		}

		auto AttributeContainer = DasActor->GetAttributesContainer();
		for (auto cost : AttributesCost)
		{
			FDASAttribute AttributeToCheck;
			if (AttributeContainer->TryGetAttribute(cost.Key, AttributeToCheck))
			{
				if (AttributeToCheck.GetModifiedCurrentValue() < cost.Value)
				{
					// If the attribute's value is too low to activate, it is blocked
					return true;
				}
			}
			else
			{
				// If you don't have the attribute, it is blocked
				return true;
			}
		}
	}
	return false;
}

//Check if the character has the requirements to trigger the ability
bool UDASAbility::IsAllowed_CPP()
{
	if (auto DasActor = GetOwner())
	{
		auto TagContainer = DasActor->GetTagContainer();
		if (TagContainer.HasAll(RequiredTags))
			return true;
	}
	return false;
}

//Check if the ability can be cancelled
bool UDASAbility::CanCancel_CPP()
{
	return true;
}

//Play the feedback if the ability when triggered
void UDASAbility::FeedbackTrigger_CPP()
{

}

//Play the cancel feedback of the ability
void UDASAbility::FeedbackCancel_CPP()
{

}

//Play the feedback of the completion of the ability
void UDASAbility::FeedbackComplete_CPP()
{
}

//Effects of triggering the ability for the server
void UDASAbility::ServerEffectTrigger_CPP()
{
	GetOwner()->GetTagContainer().AppendTags(TagsToApply);
}

//Effect of cancelling the ability for the server
void UDASAbility::ServerEffectCancel_CPP()
{
	GetOwner()->GetTagContainer().RemoveTags(TagsToApply);
}

//Effect of completeing the ability for the server
void UDASAbility::ServerEffectComplete_CPP()
{
	GetOwner()->GetTagContainer().RemoveTags(TagsToApply);
}

#pragma endregion

//Getter for the owning actor of the ability
TScriptInterface<IDASActor> UDASAbility::GetOwner()
{
	auto component = GetOwningComponent();

	if (!component)
		return nullptr;

	auto owner = component->GetOwner();

	return TScriptInterface<IDASActor>(owner);
}

//Getter for the owning component of the ability (Abilities are hold in a UDASAbilityController)
UDASAbilityController* UDASAbility::GetOwningComponent()
{
	auto component = Cast<UDASAbilityController>(GetOuter());

	if (!component)
		UE_LOG(LogTemp, Warning, TEXT("Outer is not UDASAbilityController"));

	return component;
}