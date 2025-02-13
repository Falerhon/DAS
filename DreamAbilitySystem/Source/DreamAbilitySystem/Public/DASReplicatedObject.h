// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "DASReplicatedObject.generated.h"

/**
 * 
 */
UCLASS(Abstract)
class DREAMABILITYSYSTEM_API UDASReplicatedObject : public UObject
{
	GENERATED_BODY()

public:
	//Replication handling
	UFUNCTION()
	virtual UWorld* GetWorld() const override;

	UFUNCTION(BlueprintPure, Category = "My Object")
	AActor* GetOwningActor() const;
	
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

	virtual bool IsSupportedForNetworking() const override;

	virtual int32 GetFunctionCallspace(UFunction* Function, FFrame* Stack) override;

	virtual bool CallRemoteFunction(UFunction* Function, void* Parms, struct FOutParmRec* OutParms, FFrame* Stack) override;

	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly, Category = "My Object")
	void Destroy();

protected:
	virtual void OnDestroyed();
};
