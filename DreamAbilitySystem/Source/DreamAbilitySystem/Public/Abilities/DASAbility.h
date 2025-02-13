// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "DASReplicatedObject.h"
#include "UObject/NoExportTypes.h"
#include "GameplayTagContainer.h"
#include "DASAbility.generated.h"

class IDASActor;
class UDASAbilityController;

/**
 * Replicated object representing an Ability
 */
UCLASS(BlueprintType, Blueprintable, Abstract)
class DREAMABILITYSYSTEM_API UDASAbility : public UDASReplicatedObject
{
	GENERATED_BODY()

public:
	/**
	 * The ability's attribute costs, cannot be activated if the costs are not met
	 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<FGameplayTag, float> AttributesCost;

	/**
	 * Tags that block the ability if they are found on the owner
	 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FGameplayTagContainer BlockedBy;

	/**
	 * Tags that the ability cannot trigger without if they are not found on the owner
	 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FGameplayTagContainer RequiredTags;
	
	/**
	 * Tags to apply to the owner when the ability is triggered
	 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FGameplayTagContainer TagsToApply;
	
	/**
	 * Tag of a fallback ability if this one fails to trigger
	 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FGameplayTag FallbackTag;

	/**
	 * Gets the fallback tag of the ability, used to allow dynamic fallback
	 */
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	FGameplayTag GetFallback();

#pragma region Ability Lifecycle
	/* Ability lifecycle
	 * 
	 * The following function define the lifecycle of an ability. It consists of three 
	 * control functions, all of which are replicated in a specific way.
	 * 
	 * Control functions:
	 *	 Trigger: Triggers the ability, starting the ticks if applicable.
	 *	 Cancel: Cancels the ability, stopping the ticks if applicable.
	 *	 Complete: Completes the ability, stopping the ticks if applicable
	 * 
	 * Replication:
	 *	 Initial call to Trigger, Cancel or Complete:
	 *	   These three functions (which must be called on the owning client) are the 
	 *	   entry point into an ability's lifecycle. They notify the server of the update 
	 *	   of the ability's state, but are otherwise used for client-side prediction.
	 * 
	 *	 ServerEffect:
	 *		These functions define the ability's impact on the world. They are only run on
	 *		the server. This is the place to spawn projectiles or enable hitboxes.
	 * 
	 *	 Feedback:
	 *	   These functions are meant to handle the visual feedback of the ability, and 
	 *	   as such are replicated to all players. If you want to show a particle effect
	 *	   or play an animation, this is the place.
	 *	
	 *	 Note that they are executed in the following order:
	 *	   Owner.Trigger -> Owner.Feedback -> Server.ServerEffect -> All.Feedback  
	 */
	#pragma region Trigger
	/** 
	 * Function called to trigger an ability, runs on owning client only.
	 * Override this function in Blueprint to add to the ability's behavior.
	 */
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void Trigger();

	/**
	 * Function called to show the feedback of a triggered ability, runs on all clients.
	 * Override this function in Blueprint to add to the ability's behavior.
	 */
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void FeedbackTrigger();

	/**
	 * Function that defines the a triggered ability's impact on the world, runs on server only.
	 * Override this function in Blueprint to add to the ability's behavior.
	 */
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void ServerEffectTrigger();
	#pragma endregion

	#pragma region Complete
	/**
	 * Function called to complete an ability, runs on owning client only.
	 * Override this function in Blueprint to add to the ability's behavior.
	 */
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void Complete();

	/**
	 * Function called to show the feedback of a completed ability, runs on all clients.
	 * Override this function in Blueprint to add to the ability's behavior.
	 */
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void FeedbackComplete();

	/**
	 * Function that defines the a completed ability's impact on the world, runs on server only.
	 * Override this function in Blueprint to add to the ability's behavior.
	 */
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void ServerEffectComplete();
	#pragma endregion

	#pragma region Cancel
	/**
	 * Function called to cancel an ability, runs on owning client only.
	 * Override this function in Blueprint to add to the ability's behavior.
	 */
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void Cancel();

	/**
	 * Function called to show the feedback of a canceled ability, runs on all clients.
	 * Override this function in Blueprint to add to the ability's behavior.
	 */
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void FeedbackCancel();

	/**
	 * Function that defines the a canceled ability's impact on the world, runs on server only.
	 * Override this function in Blueprint to add to the ability's behavior.
	 */
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void ServerEffectCancel();
	#pragma endregion
#pragma endregion

#pragma region Checks
	/**
	 * Check whether the ability is blocked by an owner tag or by an attribute cost.
	 * Override this function in Blueprint to add to the ability's behavior.
	 */
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	bool IsBlocked();

	/**
	 * Checks whether the ability's owner has the necessary tags to trigger the ability.
	 * Override this function in Blueprint to add to the ability's behavior.
	 */
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	bool IsAllowed();

	/**
	 * Checks whether or not the ability can be canceled.
	 * Override this function in Blueprint to add to the ability's behavior.
	 */
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	bool CanCancel();
#pragma endregion

#pragma region RPCs
	
	/**
	 * Multicast RPC that calls the trigger's feedback on all clients, except the owning client
	 */
	UFUNCTION(NetMulticast, Unreliable, BlueprintCallable)
	void FeedbackTrigger_MulticastRPC();

	/**
	 * Multicast RPC that calls the cancel's feedback on all clients, except the owning client
	 */
	UFUNCTION(NetMulticast, Unreliable, BlueprintCallable)
	void FeedbackCancel_MulticastRPC();

	/**
	 * Multicast RPC that calls the complete's feedback on all clients, except the owning client
	 */
	UFUNCTION(NetMulticast, Unreliable, BlueprintCallable)
	void FeedbackComplete_MulticastRPC();

	/**
	 * Server RPC that calls the server effect upon triggering an ability
	 */
	UFUNCTION(Server, Unreliable, BlueprintCallable)
	void ServerNotifyTrigger_ServerRPC();

	/**
	 * Server RPC that calls the server effect upon canceling an ability
	 */
	UFUNCTION(Server, Unreliable, BlueprintCallable)
	void ServerNotifyCancel_ServerRPC();

	/**
	 * Server RPC that calls the server effect upon completing an ability
	 */
	UFUNCTION(Server, Unreliable, BlueprintCallable)
	void ServerNotifyComplete_ServerRPC();
#pragma endregion

protected:
#pragma region C++ Implementation
	/**
	 * Virtual function that defines an ability's behavior when triggered.
	 * Override this function to add behavior in C++.
	 */
	virtual void Trigger_CPP();

	/**
	 * Virtual function that defines an ability's behavior when completed.
	 * Override this function to add behavior in C++.
	 */
	virtual void Complete_CPP();

	/**
	 * Virtual function that defines an ability's behavior when canceled.
	 * Override this function to add behavior in C++.
	 */
	virtual void Cancel_CPP();

	/**
	 * Virtual function that gets the tag of the ability's fallback.
	 * Override this function to add behavior in C++.
	 */
	virtual FGameplayTag GetFallback_CPP();

	/**
	 * Virtual function that checks if the ability is blocked.
	 * Override this function to add behavior in C++.
	 */
	virtual bool IsBlocked_CPP();

	/**
	 * Virtual function that checks if the ability is allowed to trigger.
	 * Override this function to add behavior in C++.
	 */
	virtual bool IsAllowed_CPP();

	/**
	 * Virtual function that checks if the ability can be canceled.
	 * Override this function to add behavior in C++.
	 */
	virtual bool CanCancel_CPP();

	/**
	 * Virtual function that defines an ability's trigger feedback, runs on all clients.
	 * Override this function to add behavior in C++
	 */
	virtual void FeedbackTrigger_CPP();

	/**
	 * Virtual function that defines an ability's cancel feedback, runs on all clients.
	 * Override this function to add behavior in C++
	 */
	virtual void FeedbackCancel_CPP();

	/**
	 * Virtual function that defines an ability's complete feedback, runs on all clients.
	 * Override this function to add behavior in C++
	 */
	virtual void FeedbackComplete_CPP();

	/**
	 * Virtual function that defines an ability's trigger effect on the worls, runs on server only.
	 * Override this function to add behavior in C++
	 */
	virtual void ServerEffectTrigger_CPP();

	/**
	 * Virtual function that defines an ability's cancel effect on the worls, runs on server only.
	 * Override this function to add behavior in C++
	 */
	virtual void ServerEffectCancel_CPP();

	/**
	 * Virtual function that defines an ability's complete effect on the worls, runs on server only.
	 * Override this function to add behavior in C++
	 */
	virtual void ServerEffectComplete_CPP();
#pragma endregion

	/**
	 * Gets the ability's owner as a DASActor
	 */
	TScriptInterface<IDASActor> GetOwner();

	/**
	 * Gets the ability's owning component
	 */
	UDASAbilityController* GetOwningComponent();
};
