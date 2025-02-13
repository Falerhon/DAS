// Fill out your copyright notice in the Description page of Project Settings.


#include "DASReplicatedObject.h"

UWorld* UDASReplicatedObject::GetWorld() const
{
	if (const UObject* MyOuter = GetOuter())
	{
		return MyOuter->GetWorld();
	}
	return nullptr;
}

AActor* UDASReplicatedObject::GetOwningActor() const
{
	return GetTypedOuter<UActorComponent>()->GetOwner();
}

void UDASReplicatedObject::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	if (const UBlueprintGeneratedClass* BPClass = Cast<UBlueprintGeneratedClass>(GetClass()))
	{
		BPClass->GetLifetimeBlueprintReplicationList(OutLifetimeProps);
	}
}

bool UDASReplicatedObject::IsSupportedForNetworking() const
{
	return true;
}

int32 UDASReplicatedObject::GetFunctionCallspace(UFunction* Function, FFrame* Stack)
{
	check(GetOuter() != nullptr);
	return GetOuter()->GetFunctionCallspace(Function, Stack);
}

bool UDASReplicatedObject::CallRemoteFunction(UFunction* Function, void* Parms, FOutParmRec* OutParms, FFrame* Stack)
{
	check(!HasAnyFlags(RF_ClassDefaultObject));
	AActor* Owner = GetOwningActor();
	if (UNetDriver* NetDriver = Owner->GetNetDriver())
	{
		NetDriver->ProcessRemoteFunction(Owner, Function, Parms, OutParms, Stack, this);
		return true;
	}
	return false;
}

void UDASReplicatedObject::Destroy()
{
	if (!IsValid(this))
	{
		checkf(GetOwningActor()->HasAuthority() == true, TEXT("Destroy:: Object does not have authority to destroy itself!"));
			
		OnDestroyed();
		MarkAsGarbage();
	}
}


void UDASReplicatedObject::OnDestroyed()
{
	
}