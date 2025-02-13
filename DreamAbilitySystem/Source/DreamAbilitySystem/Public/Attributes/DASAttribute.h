#pragma once
#include "CoreMinimal.h"
#include "Math/UnrealMathUtility.h"
#include "DASAttribute.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnAttributeValueChange, float, oldValue, float, newValue);

USTRUCT(BlueprintType)
struct FDASAttribute
{
	GENERATED_BODY()

	FDASAttribute()
	{
		Initialize();
	}

	FDASAttribute(float initialValue, float minValue, float maxValue)
	{
		InitialValue = initialValue;
		MinValue = minValue;
		MaxValue = maxValue;
		Initialize();
	}

	/// <summary>
	/// The initial value of the attribute (only applied if an attribute container is attached to the owning actor)
	/// </summary>
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float InitialValue = 0.f;

	/// <summary>
	/// The minimum value of the attribute
	/// </summary>
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float MinValue = 0.f;

	/// <summary>
	/// The maximum value of the attribute
	/// </summary>
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float MaxValue = 0.f;

	/// <summary>
	/// Current value of the attribute. Should not be modified directly, or OnAttributeValueChange should be called afterwards.
	/// </summary>
	UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
	float CurrentValue = 0.f;

	/// <summary>
	/// Multicast delegate called when this attribute's value changes. Not guaranteed to be called upon every modification of the value.
	/// </summary>
	UPROPERTY(BlueprintAssignable, BlueprintCallable)
	FOnAttributeValueChange OnAttributeValueChange;

	/// <summary>
	/// Gets the current value with all modifiers applied
	/// </summary>
	float GetModifiedCurrentValue()
	{
		// TODO: Modifiers
		return CurrentValue;
	}

	/// <summary>
	/// Sets the current value of the attribute, along with some extra validation. This is the referred method of modifying the current value.
	/// </summary>
	/// <param name="newValue">The new value</param>
	/// <param name="broadcastChange">Whether or not the change should be broadcast</param>
	void SetCurrentValue(float newValue, bool broadcastChange = true)
	{
		float oldValue = CurrentValue;
		CurrentValue = FMath::Clamp(newValue, MinValue, MaxValue);
		if (broadcastChange)
			OnAttributeValueChange.Broadcast(oldValue, CurrentValue);
	}

	void Initialize()
	{
		SetCurrentValue(InitialValue, false);
	}

private:
	UPROPERTY()
	bool isInitialized = false;
};
