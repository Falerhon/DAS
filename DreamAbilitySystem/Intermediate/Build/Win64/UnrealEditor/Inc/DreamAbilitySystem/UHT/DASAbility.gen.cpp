// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DreamAbilitySystem/Public/Abilities/DASAbility.h"
#include "GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDASAbility() {}
// Cross Module References
	DREAMABILITYSYSTEM_API UClass* Z_Construct_UClass_UDASAbility();
	DREAMABILITYSYSTEM_API UClass* Z_Construct_UClass_UDASAbility_NoRegister();
	DREAMABILITYSYSTEM_API UClass* Z_Construct_UClass_UDASReplicatedObject();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
	UPackage* Z_Construct_UPackage__Script_DreamAbilitySystem();
// End Cross Module References
	DEFINE_FUNCTION(UDASAbility::execServerNotifyComplete_ServerRPC)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ServerNotifyComplete_ServerRPC_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDASAbility::execServerNotifyCancel_ServerRPC)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ServerNotifyCancel_ServerRPC_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDASAbility::execServerNotifyTrigger_ServerRPC)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ServerNotifyTrigger_ServerRPC_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDASAbility::execFeedbackComplete_MulticastRPC)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->FeedbackComplete_MulticastRPC_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDASAbility::execFeedbackCancel_MulticastRPC)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->FeedbackCancel_MulticastRPC_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDASAbility::execFeedbackTrigger_MulticastRPC)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->FeedbackTrigger_MulticastRPC_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDASAbility::execCanCancel)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CanCancel_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDASAbility::execIsAllowed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsAllowed_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDASAbility::execIsBlocked)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsBlocked_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDASAbility::execServerEffectCancel)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ServerEffectCancel_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDASAbility::execFeedbackCancel)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->FeedbackCancel_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDASAbility::execCancel)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Cancel_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDASAbility::execServerEffectComplete)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ServerEffectComplete_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDASAbility::execFeedbackComplete)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->FeedbackComplete_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDASAbility::execComplete)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Complete_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDASAbility::execServerEffectTrigger)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ServerEffectTrigger_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDASAbility::execFeedbackTrigger)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->FeedbackTrigger_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDASAbility::execTrigger)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Trigger_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDASAbility::execGetFallback)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FGameplayTag*)Z_Param__Result=P_THIS->GetFallback_Implementation();
		P_NATIVE_END;
	}
	struct DASAbility_eventCanCancel_Parms
	{
		bool ReturnValue;

		/** Constructor, initializes return property only **/
		DASAbility_eventCanCancel_Parms()
			: ReturnValue(false)
		{
		}
	};
	struct DASAbility_eventGetFallback_Parms
	{
		FGameplayTag ReturnValue;
	};
	struct DASAbility_eventIsAllowed_Parms
	{
		bool ReturnValue;

		/** Constructor, initializes return property only **/
		DASAbility_eventIsAllowed_Parms()
			: ReturnValue(false)
		{
		}
	};
	struct DASAbility_eventIsBlocked_Parms
	{
		bool ReturnValue;

		/** Constructor, initializes return property only **/
		DASAbility_eventIsBlocked_Parms()
			: ReturnValue(false)
		{
		}
	};
	static FName NAME_UDASAbility_CanCancel = FName(TEXT("CanCancel"));
	bool UDASAbility::CanCancel()
	{
		DASAbility_eventCanCancel_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_UDASAbility_CanCancel),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_UDASAbility_Cancel = FName(TEXT("Cancel"));
	void UDASAbility::Cancel()
	{
		ProcessEvent(FindFunctionChecked(NAME_UDASAbility_Cancel),NULL);
	}
	static FName NAME_UDASAbility_Complete = FName(TEXT("Complete"));
	void UDASAbility::Complete()
	{
		ProcessEvent(FindFunctionChecked(NAME_UDASAbility_Complete),NULL);
	}
	static FName NAME_UDASAbility_FeedbackCancel = FName(TEXT("FeedbackCancel"));
	void UDASAbility::FeedbackCancel()
	{
		ProcessEvent(FindFunctionChecked(NAME_UDASAbility_FeedbackCancel),NULL);
	}
	static FName NAME_UDASAbility_FeedbackCancel_MulticastRPC = FName(TEXT("FeedbackCancel_MulticastRPC"));
	void UDASAbility::FeedbackCancel_MulticastRPC()
	{
		ProcessEvent(FindFunctionChecked(NAME_UDASAbility_FeedbackCancel_MulticastRPC),NULL);
	}
	static FName NAME_UDASAbility_FeedbackComplete = FName(TEXT("FeedbackComplete"));
	void UDASAbility::FeedbackComplete()
	{
		ProcessEvent(FindFunctionChecked(NAME_UDASAbility_FeedbackComplete),NULL);
	}
	static FName NAME_UDASAbility_FeedbackComplete_MulticastRPC = FName(TEXT("FeedbackComplete_MulticastRPC"));
	void UDASAbility::FeedbackComplete_MulticastRPC()
	{
		ProcessEvent(FindFunctionChecked(NAME_UDASAbility_FeedbackComplete_MulticastRPC),NULL);
	}
	static FName NAME_UDASAbility_FeedbackTrigger = FName(TEXT("FeedbackTrigger"));
	void UDASAbility::FeedbackTrigger()
	{
		ProcessEvent(FindFunctionChecked(NAME_UDASAbility_FeedbackTrigger),NULL);
	}
	static FName NAME_UDASAbility_FeedbackTrigger_MulticastRPC = FName(TEXT("FeedbackTrigger_MulticastRPC"));
	void UDASAbility::FeedbackTrigger_MulticastRPC()
	{
		ProcessEvent(FindFunctionChecked(NAME_UDASAbility_FeedbackTrigger_MulticastRPC),NULL);
	}
	static FName NAME_UDASAbility_GetFallback = FName(TEXT("GetFallback"));
	FGameplayTag UDASAbility::GetFallback()
	{
		DASAbility_eventGetFallback_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_UDASAbility_GetFallback),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_UDASAbility_IsAllowed = FName(TEXT("IsAllowed"));
	bool UDASAbility::IsAllowed()
	{
		DASAbility_eventIsAllowed_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_UDASAbility_IsAllowed),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_UDASAbility_IsBlocked = FName(TEXT("IsBlocked"));
	bool UDASAbility::IsBlocked()
	{
		DASAbility_eventIsBlocked_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_UDASAbility_IsBlocked),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_UDASAbility_ServerEffectCancel = FName(TEXT("ServerEffectCancel"));
	void UDASAbility::ServerEffectCancel()
	{
		ProcessEvent(FindFunctionChecked(NAME_UDASAbility_ServerEffectCancel),NULL);
	}
	static FName NAME_UDASAbility_ServerEffectComplete = FName(TEXT("ServerEffectComplete"));
	void UDASAbility::ServerEffectComplete()
	{
		ProcessEvent(FindFunctionChecked(NAME_UDASAbility_ServerEffectComplete),NULL);
	}
	static FName NAME_UDASAbility_ServerEffectTrigger = FName(TEXT("ServerEffectTrigger"));
	void UDASAbility::ServerEffectTrigger()
	{
		ProcessEvent(FindFunctionChecked(NAME_UDASAbility_ServerEffectTrigger),NULL);
	}
	static FName NAME_UDASAbility_ServerNotifyCancel_ServerRPC = FName(TEXT("ServerNotifyCancel_ServerRPC"));
	void UDASAbility::ServerNotifyCancel_ServerRPC()
	{
		ProcessEvent(FindFunctionChecked(NAME_UDASAbility_ServerNotifyCancel_ServerRPC),NULL);
	}
	static FName NAME_UDASAbility_ServerNotifyComplete_ServerRPC = FName(TEXT("ServerNotifyComplete_ServerRPC"));
	void UDASAbility::ServerNotifyComplete_ServerRPC()
	{
		ProcessEvent(FindFunctionChecked(NAME_UDASAbility_ServerNotifyComplete_ServerRPC),NULL);
	}
	static FName NAME_UDASAbility_ServerNotifyTrigger_ServerRPC = FName(TEXT("ServerNotifyTrigger_ServerRPC"));
	void UDASAbility::ServerNotifyTrigger_ServerRPC()
	{
		ProcessEvent(FindFunctionChecked(NAME_UDASAbility_ServerNotifyTrigger_ServerRPC),NULL);
	}
	static FName NAME_UDASAbility_Trigger = FName(TEXT("Trigger"));
	void UDASAbility::Trigger()
	{
		ProcessEvent(FindFunctionChecked(NAME_UDASAbility_Trigger),NULL);
	}
	void UDASAbility::StaticRegisterNativesUDASAbility()
	{
		UClass* Class = UDASAbility::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CanCancel", &UDASAbility::execCanCancel },
			{ "Cancel", &UDASAbility::execCancel },
			{ "Complete", &UDASAbility::execComplete },
			{ "FeedbackCancel", &UDASAbility::execFeedbackCancel },
			{ "FeedbackCancel_MulticastRPC", &UDASAbility::execFeedbackCancel_MulticastRPC },
			{ "FeedbackComplete", &UDASAbility::execFeedbackComplete },
			{ "FeedbackComplete_MulticastRPC", &UDASAbility::execFeedbackComplete_MulticastRPC },
			{ "FeedbackTrigger", &UDASAbility::execFeedbackTrigger },
			{ "FeedbackTrigger_MulticastRPC", &UDASAbility::execFeedbackTrigger_MulticastRPC },
			{ "GetFallback", &UDASAbility::execGetFallback },
			{ "IsAllowed", &UDASAbility::execIsAllowed },
			{ "IsBlocked", &UDASAbility::execIsBlocked },
			{ "ServerEffectCancel", &UDASAbility::execServerEffectCancel },
			{ "ServerEffectComplete", &UDASAbility::execServerEffectComplete },
			{ "ServerEffectTrigger", &UDASAbility::execServerEffectTrigger },
			{ "ServerNotifyCancel_ServerRPC", &UDASAbility::execServerNotifyCancel_ServerRPC },
			{ "ServerNotifyComplete_ServerRPC", &UDASAbility::execServerNotifyComplete_ServerRPC },
			{ "ServerNotifyTrigger_ServerRPC", &UDASAbility::execServerNotifyTrigger_ServerRPC },
			{ "Trigger", &UDASAbility::execTrigger },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDASAbility_CanCancel_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UDASAbility_CanCancel_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DASAbility_eventCanCancel_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDASAbility_CanCancel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(DASAbility_eventCanCancel_Parms), &Z_Construct_UFunction_UDASAbility_CanCancel_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDASAbility_CanCancel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDASAbility_CanCancel_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDASAbility_CanCancel_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Checks whether or not the ability can be canceled.\n\x09 * Override this function in Blueprint to add to the ability's behavior.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Abilities/DASAbility.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Checks whether or not the ability can be canceled.\nOverride this function in Blueprint to add to the ability's behavior." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDASAbility_CanCancel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDASAbility, nullptr, "CanCancel", nullptr, nullptr, Z_Construct_UFunction_UDASAbility_CanCancel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDASAbility_CanCancel_Statics::PropPointers), sizeof(DASAbility_eventCanCancel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDASAbility_CanCancel_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDASAbility_CanCancel_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDASAbility_CanCancel_Statics::PropPointers) < 2048);
	static_assert(sizeof(DASAbility_eventCanCancel_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UDASAbility_CanCancel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDASAbility_CanCancel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDASAbility_Cancel_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDASAbility_Cancel_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Function called to cancel an ability, runs on owning client only.\n\x09 * Override this function in Blueprint to add to the ability's behavior.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Abilities/DASAbility.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Function called to cancel an ability, runs on owning client only.\nOverride this function in Blueprint to add to the ability's behavior." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDASAbility_Cancel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDASAbility, nullptr, "Cancel", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDASAbility_Cancel_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDASAbility_Cancel_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UDASAbility_Cancel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDASAbility_Cancel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDASAbility_Complete_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDASAbility_Complete_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Function called to complete an ability, runs on owning client only.\n\x09 * Override this function in Blueprint to add to the ability's behavior.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Abilities/DASAbility.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Function called to complete an ability, runs on owning client only.\nOverride this function in Blueprint to add to the ability's behavior." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDASAbility_Complete_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDASAbility, nullptr, "Complete", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDASAbility_Complete_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDASAbility_Complete_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UDASAbility_Complete()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDASAbility_Complete_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDASAbility_FeedbackCancel_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDASAbility_FeedbackCancel_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Function called to show the feedback of a canceled ability, runs on all clients.\n\x09 * Override this function in Blueprint to add to the ability's behavior.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Abilities/DASAbility.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Function called to show the feedback of a canceled ability, runs on all clients.\nOverride this function in Blueprint to add to the ability's behavior." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDASAbility_FeedbackCancel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDASAbility, nullptr, "FeedbackCancel", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDASAbility_FeedbackCancel_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDASAbility_FeedbackCancel_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UDASAbility_FeedbackCancel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDASAbility_FeedbackCancel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDASAbility_FeedbackCancel_MulticastRPC_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDASAbility_FeedbackCancel_MulticastRPC_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Multicast RPC that calls the cancel's feedback on all clients, except the owning client\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Abilities/DASAbility.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Multicast RPC that calls the cancel's feedback on all clients, except the owning client" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDASAbility_FeedbackCancel_MulticastRPC_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDASAbility, nullptr, "FeedbackCancel_MulticastRPC", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04024C40, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDASAbility_FeedbackCancel_MulticastRPC_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDASAbility_FeedbackCancel_MulticastRPC_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UDASAbility_FeedbackCancel_MulticastRPC()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDASAbility_FeedbackCancel_MulticastRPC_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDASAbility_FeedbackComplete_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDASAbility_FeedbackComplete_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Function called to show the feedback of a completed ability, runs on all clients.\n\x09 * Override this function in Blueprint to add to the ability's behavior.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Abilities/DASAbility.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Function called to show the feedback of a completed ability, runs on all clients.\nOverride this function in Blueprint to add to the ability's behavior." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDASAbility_FeedbackComplete_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDASAbility, nullptr, "FeedbackComplete", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDASAbility_FeedbackComplete_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDASAbility_FeedbackComplete_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UDASAbility_FeedbackComplete()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDASAbility_FeedbackComplete_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDASAbility_FeedbackComplete_MulticastRPC_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDASAbility_FeedbackComplete_MulticastRPC_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Multicast RPC that calls the complete's feedback on all clients, except the owning client\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Abilities/DASAbility.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Multicast RPC that calls the complete's feedback on all clients, except the owning client" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDASAbility_FeedbackComplete_MulticastRPC_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDASAbility, nullptr, "FeedbackComplete_MulticastRPC", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04024C40, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDASAbility_FeedbackComplete_MulticastRPC_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDASAbility_FeedbackComplete_MulticastRPC_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UDASAbility_FeedbackComplete_MulticastRPC()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDASAbility_FeedbackComplete_MulticastRPC_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDASAbility_FeedbackTrigger_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDASAbility_FeedbackTrigger_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Function called to show the feedback of a triggered ability, runs on all clients.\n\x09 * Override this function in Blueprint to add to the ability's behavior.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Abilities/DASAbility.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Function called to show the feedback of a triggered ability, runs on all clients.\nOverride this function in Blueprint to add to the ability's behavior." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDASAbility_FeedbackTrigger_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDASAbility, nullptr, "FeedbackTrigger", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDASAbility_FeedbackTrigger_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDASAbility_FeedbackTrigger_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UDASAbility_FeedbackTrigger()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDASAbility_FeedbackTrigger_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDASAbility_FeedbackTrigger_MulticastRPC_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDASAbility_FeedbackTrigger_MulticastRPC_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Multicast RPC that calls the trigger's feedback on all clients, except the owning client\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Abilities/DASAbility.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Multicast RPC that calls the trigger's feedback on all clients, except the owning client" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDASAbility_FeedbackTrigger_MulticastRPC_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDASAbility, nullptr, "FeedbackTrigger_MulticastRPC", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04024C40, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDASAbility_FeedbackTrigger_MulticastRPC_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDASAbility_FeedbackTrigger_MulticastRPC_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UDASAbility_FeedbackTrigger_MulticastRPC()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDASAbility_FeedbackTrigger_MulticastRPC_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDASAbility_GetFallback_Statics
	{
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDASAbility_GetFallback_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DASAbility_eventGetFallback_Parms, ReturnValue), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 2083603574
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDASAbility_GetFallback_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDASAbility_GetFallback_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDASAbility_GetFallback_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Gets the fallback tag of the ability, used to allow dynamic fallback\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Abilities/DASAbility.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets the fallback tag of the ability, used to allow dynamic fallback" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDASAbility_GetFallback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDASAbility, nullptr, "GetFallback", nullptr, nullptr, Z_Construct_UFunction_UDASAbility_GetFallback_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDASAbility_GetFallback_Statics::PropPointers), sizeof(DASAbility_eventGetFallback_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDASAbility_GetFallback_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDASAbility_GetFallback_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDASAbility_GetFallback_Statics::PropPointers) < 2048);
	static_assert(sizeof(DASAbility_eventGetFallback_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UDASAbility_GetFallback()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDASAbility_GetFallback_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDASAbility_IsAllowed_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UDASAbility_IsAllowed_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DASAbility_eventIsAllowed_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDASAbility_IsAllowed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(DASAbility_eventIsAllowed_Parms), &Z_Construct_UFunction_UDASAbility_IsAllowed_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDASAbility_IsAllowed_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDASAbility_IsAllowed_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDASAbility_IsAllowed_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Checks whether the ability's owner has the necessary tags to trigger the ability.\n\x09 * Override this function in Blueprint to add to the ability's behavior.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Abilities/DASAbility.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Checks whether the ability's owner has the necessary tags to trigger the ability.\nOverride this function in Blueprint to add to the ability's behavior." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDASAbility_IsAllowed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDASAbility, nullptr, "IsAllowed", nullptr, nullptr, Z_Construct_UFunction_UDASAbility_IsAllowed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDASAbility_IsAllowed_Statics::PropPointers), sizeof(DASAbility_eventIsAllowed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDASAbility_IsAllowed_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDASAbility_IsAllowed_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDASAbility_IsAllowed_Statics::PropPointers) < 2048);
	static_assert(sizeof(DASAbility_eventIsAllowed_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UDASAbility_IsAllowed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDASAbility_IsAllowed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDASAbility_IsBlocked_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UDASAbility_IsBlocked_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DASAbility_eventIsBlocked_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDASAbility_IsBlocked_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(DASAbility_eventIsBlocked_Parms), &Z_Construct_UFunction_UDASAbility_IsBlocked_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDASAbility_IsBlocked_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDASAbility_IsBlocked_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDASAbility_IsBlocked_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Check whether the ability is blocked by an owner tag or by an attribute cost.\n\x09 * Override this function in Blueprint to add to the ability's behavior.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Abilities/DASAbility.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Check whether the ability is blocked by an owner tag or by an attribute cost.\nOverride this function in Blueprint to add to the ability's behavior." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDASAbility_IsBlocked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDASAbility, nullptr, "IsBlocked", nullptr, nullptr, Z_Construct_UFunction_UDASAbility_IsBlocked_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDASAbility_IsBlocked_Statics::PropPointers), sizeof(DASAbility_eventIsBlocked_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDASAbility_IsBlocked_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDASAbility_IsBlocked_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDASAbility_IsBlocked_Statics::PropPointers) < 2048);
	static_assert(sizeof(DASAbility_eventIsBlocked_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UDASAbility_IsBlocked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDASAbility_IsBlocked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDASAbility_ServerEffectCancel_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDASAbility_ServerEffectCancel_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Function that defines the a canceled ability's impact on the world, runs on server only.\n\x09 * Override this function in Blueprint to add to the ability's behavior.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Abilities/DASAbility.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Function that defines the a canceled ability's impact on the world, runs on server only.\nOverride this function in Blueprint to add to the ability's behavior." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDASAbility_ServerEffectCancel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDASAbility, nullptr, "ServerEffectCancel", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDASAbility_ServerEffectCancel_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDASAbility_ServerEffectCancel_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UDASAbility_ServerEffectCancel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDASAbility_ServerEffectCancel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDASAbility_ServerEffectComplete_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDASAbility_ServerEffectComplete_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Function that defines the a completed ability's impact on the world, runs on server only.\n\x09 * Override this function in Blueprint to add to the ability's behavior.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Abilities/DASAbility.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Function that defines the a completed ability's impact on the world, runs on server only.\nOverride this function in Blueprint to add to the ability's behavior." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDASAbility_ServerEffectComplete_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDASAbility, nullptr, "ServerEffectComplete", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDASAbility_ServerEffectComplete_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDASAbility_ServerEffectComplete_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UDASAbility_ServerEffectComplete()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDASAbility_ServerEffectComplete_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDASAbility_ServerEffectTrigger_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDASAbility_ServerEffectTrigger_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Function that defines the a triggered ability's impact on the world, runs on server only.\n\x09 * Override this function in Blueprint to add to the ability's behavior.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Abilities/DASAbility.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Function that defines the a triggered ability's impact on the world, runs on server only.\nOverride this function in Blueprint to add to the ability's behavior." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDASAbility_ServerEffectTrigger_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDASAbility, nullptr, "ServerEffectTrigger", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDASAbility_ServerEffectTrigger_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDASAbility_ServerEffectTrigger_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UDASAbility_ServerEffectTrigger()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDASAbility_ServerEffectTrigger_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDASAbility_ServerNotifyCancel_ServerRPC_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDASAbility_ServerNotifyCancel_ServerRPC_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Server RPC that calls the server effect upon canceling an ability\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Abilities/DASAbility.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Server RPC that calls the server effect upon canceling an ability" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDASAbility_ServerNotifyCancel_ServerRPC_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDASAbility, nullptr, "ServerNotifyCancel_ServerRPC", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04220C40, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDASAbility_ServerNotifyCancel_ServerRPC_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDASAbility_ServerNotifyCancel_ServerRPC_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UDASAbility_ServerNotifyCancel_ServerRPC()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDASAbility_ServerNotifyCancel_ServerRPC_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDASAbility_ServerNotifyComplete_ServerRPC_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDASAbility_ServerNotifyComplete_ServerRPC_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Server RPC that calls the server effect upon completing an ability\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Abilities/DASAbility.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Server RPC that calls the server effect upon completing an ability" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDASAbility_ServerNotifyComplete_ServerRPC_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDASAbility, nullptr, "ServerNotifyComplete_ServerRPC", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04220C40, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDASAbility_ServerNotifyComplete_ServerRPC_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDASAbility_ServerNotifyComplete_ServerRPC_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UDASAbility_ServerNotifyComplete_ServerRPC()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDASAbility_ServerNotifyComplete_ServerRPC_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDASAbility_ServerNotifyTrigger_ServerRPC_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDASAbility_ServerNotifyTrigger_ServerRPC_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Server RPC that calls the server effect upon triggering an ability\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Abilities/DASAbility.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Server RPC that calls the server effect upon triggering an ability" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDASAbility_ServerNotifyTrigger_ServerRPC_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDASAbility, nullptr, "ServerNotifyTrigger_ServerRPC", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04220C40, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDASAbility_ServerNotifyTrigger_ServerRPC_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDASAbility_ServerNotifyTrigger_ServerRPC_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UDASAbility_ServerNotifyTrigger_ServerRPC()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDASAbility_ServerNotifyTrigger_ServerRPC_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDASAbility_Trigger_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDASAbility_Trigger_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \n\x09 * Function called to trigger an ability, runs on owning client only.\n\x09 * Override this function in Blueprint to add to the ability's behavior.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Abilities/DASAbility.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Function called to trigger an ability, runs on owning client only.\nOverride this function in Blueprint to add to the ability's behavior." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDASAbility_Trigger_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDASAbility, nullptr, "Trigger", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDASAbility_Trigger_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDASAbility_Trigger_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UDASAbility_Trigger()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDASAbility_Trigger_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDASAbility);
	UClass* Z_Construct_UClass_UDASAbility_NoRegister()
	{
		return UDASAbility::StaticClass();
	}
	struct Z_Construct_UClass_UDASAbility_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AttributesCost_ValueProp;
		static const UECodeGen_Private::FStructPropertyParams NewProp_AttributesCost_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttributesCost_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_AttributesCost;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlockedBy_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BlockedBy;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RequiredTags_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RequiredTags;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TagsToApply_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TagsToApply;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FallbackTag_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FallbackTag;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDASAbility_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDASReplicatedObject,
		(UObject* (*)())Z_Construct_UPackage__Script_DreamAbilitySystem,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDASAbility_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UDASAbility_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDASAbility_CanCancel, "CanCancel" }, // 559384437
		{ &Z_Construct_UFunction_UDASAbility_Cancel, "Cancel" }, // 2547865962
		{ &Z_Construct_UFunction_UDASAbility_Complete, "Complete" }, // 920655249
		{ &Z_Construct_UFunction_UDASAbility_FeedbackCancel, "FeedbackCancel" }, // 1429088203
		{ &Z_Construct_UFunction_UDASAbility_FeedbackCancel_MulticastRPC, "FeedbackCancel_MulticastRPC" }, // 2667840270
		{ &Z_Construct_UFunction_UDASAbility_FeedbackComplete, "FeedbackComplete" }, // 1525991300
		{ &Z_Construct_UFunction_UDASAbility_FeedbackComplete_MulticastRPC, "FeedbackComplete_MulticastRPC" }, // 4267145405
		{ &Z_Construct_UFunction_UDASAbility_FeedbackTrigger, "FeedbackTrigger" }, // 965869021
		{ &Z_Construct_UFunction_UDASAbility_FeedbackTrigger_MulticastRPC, "FeedbackTrigger_MulticastRPC" }, // 3587369128
		{ &Z_Construct_UFunction_UDASAbility_GetFallback, "GetFallback" }, // 1299351186
		{ &Z_Construct_UFunction_UDASAbility_IsAllowed, "IsAllowed" }, // 1768867930
		{ &Z_Construct_UFunction_UDASAbility_IsBlocked, "IsBlocked" }, // 4149167148
		{ &Z_Construct_UFunction_UDASAbility_ServerEffectCancel, "ServerEffectCancel" }, // 140605010
		{ &Z_Construct_UFunction_UDASAbility_ServerEffectComplete, "ServerEffectComplete" }, // 3277583207
		{ &Z_Construct_UFunction_UDASAbility_ServerEffectTrigger, "ServerEffectTrigger" }, // 522946539
		{ &Z_Construct_UFunction_UDASAbility_ServerNotifyCancel_ServerRPC, "ServerNotifyCancel_ServerRPC" }, // 3032824944
		{ &Z_Construct_UFunction_UDASAbility_ServerNotifyComplete_ServerRPC, "ServerNotifyComplete_ServerRPC" }, // 1346241653
		{ &Z_Construct_UFunction_UDASAbility_ServerNotifyTrigger_ServerRPC, "ServerNotifyTrigger_ServerRPC" }, // 922144871
		{ &Z_Construct_UFunction_UDASAbility_Trigger, "Trigger" }, // 543931619
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDASAbility_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDASAbility_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Replicated object representing an Ability\n */" },
#endif
		{ "IncludePath", "Abilities/DASAbility.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Abilities/DASAbility.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Replicated object representing an Ability" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDASAbility_Statics::NewProp_AttributesCost_ValueProp = { "AttributesCost", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDASAbility_Statics::NewProp_AttributesCost_Key_KeyProp = { "AttributesCost_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 2083603574
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDASAbility_Statics::NewProp_AttributesCost_MetaData[] = {
		{ "Category", "DASAbility" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * The ability's attribute costs, cannot be activated if the costs are not met\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Abilities/DASAbility.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The ability's attribute costs, cannot be activated if the costs are not met" },
#endif
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UDASAbility_Statics::NewProp_AttributesCost = { "AttributesCost", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDASAbility, AttributesCost), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDASAbility_Statics::NewProp_AttributesCost_MetaData), Z_Construct_UClass_UDASAbility_Statics::NewProp_AttributesCost_MetaData) }; // 2083603574
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDASAbility_Statics::NewProp_BlockedBy_MetaData[] = {
		{ "Category", "DASAbility" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Tags that block the ability if they are found on the owner\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Abilities/DASAbility.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Tags that block the ability if they are found on the owner" },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDASAbility_Statics::NewProp_BlockedBy = { "BlockedBy", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDASAbility, BlockedBy), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDASAbility_Statics::NewProp_BlockedBy_MetaData), Z_Construct_UClass_UDASAbility_Statics::NewProp_BlockedBy_MetaData) }; // 405371792
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDASAbility_Statics::NewProp_RequiredTags_MetaData[] = {
		{ "Category", "DASAbility" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Tags that the ability cannot trigger without if they are not found on the owner\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Abilities/DASAbility.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Tags that the ability cannot trigger without if they are not found on the owner" },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDASAbility_Statics::NewProp_RequiredTags = { "RequiredTags", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDASAbility, RequiredTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDASAbility_Statics::NewProp_RequiredTags_MetaData), Z_Construct_UClass_UDASAbility_Statics::NewProp_RequiredTags_MetaData) }; // 405371792
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDASAbility_Statics::NewProp_TagsToApply_MetaData[] = {
		{ "Category", "DASAbility" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Tags to apply to the owner when the ability is triggered\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Abilities/DASAbility.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Tags to apply to the owner when the ability is triggered" },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDASAbility_Statics::NewProp_TagsToApply = { "TagsToApply", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDASAbility, TagsToApply), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDASAbility_Statics::NewProp_TagsToApply_MetaData), Z_Construct_UClass_UDASAbility_Statics::NewProp_TagsToApply_MetaData) }; // 405371792
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDASAbility_Statics::NewProp_FallbackTag_MetaData[] = {
		{ "Category", "DASAbility" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Tag of a fallback ability if this one fails to trigger\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Abilities/DASAbility.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Tag of a fallback ability if this one fails to trigger" },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDASAbility_Statics::NewProp_FallbackTag = { "FallbackTag", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDASAbility, FallbackTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDASAbility_Statics::NewProp_FallbackTag_MetaData), Z_Construct_UClass_UDASAbility_Statics::NewProp_FallbackTag_MetaData) }; // 2083603574
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDASAbility_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDASAbility_Statics::NewProp_AttributesCost_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDASAbility_Statics::NewProp_AttributesCost_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDASAbility_Statics::NewProp_AttributesCost,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDASAbility_Statics::NewProp_BlockedBy,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDASAbility_Statics::NewProp_RequiredTags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDASAbility_Statics::NewProp_TagsToApply,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDASAbility_Statics::NewProp_FallbackTag,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDASAbility_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDASAbility>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDASAbility_Statics::ClassParams = {
		&UDASAbility::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UDASAbility_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UDASAbility_Statics::PropPointers),
		0,
		0x001000A1u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDASAbility_Statics::Class_MetaDataParams), Z_Construct_UClass_UDASAbility_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDASAbility_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UDASAbility()
	{
		if (!Z_Registration_Info_UClass_UDASAbility.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDASAbility.OuterSingleton, Z_Construct_UClass_UDASAbility_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDASAbility.OuterSingleton;
	}
	template<> DREAMABILITYSYSTEM_API UClass* StaticClass<UDASAbility>()
	{
		return UDASAbility::StaticClass();
	}
	UDASAbility::UDASAbility(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDASAbility);
	UDASAbility::~UDASAbility() {}
	struct Z_CompiledInDeferFile_FID_Perforce_atrembl86_FalerhonLaptop_2080_20243_8INF960_DAS_AM_DAS_AM_Plugins_DreamAbilitySystem_Source_DreamAbilitySystem_Public_Abilities_DASAbility_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Perforce_atrembl86_FalerhonLaptop_2080_20243_8INF960_DAS_AM_DAS_AM_Plugins_DreamAbilitySystem_Source_DreamAbilitySystem_Public_Abilities_DASAbility_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDASAbility, UDASAbility::StaticClass, TEXT("UDASAbility"), &Z_Registration_Info_UClass_UDASAbility, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDASAbility), 1788352193U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Perforce_atrembl86_FalerhonLaptop_2080_20243_8INF960_DAS_AM_DAS_AM_Plugins_DreamAbilitySystem_Source_DreamAbilitySystem_Public_Abilities_DASAbility_h_947464347(TEXT("/Script/DreamAbilitySystem"),
		Z_CompiledInDeferFile_FID_Perforce_atrembl86_FalerhonLaptop_2080_20243_8INF960_DAS_AM_DAS_AM_Plugins_DreamAbilitySystem_Source_DreamAbilitySystem_Public_Abilities_DASAbility_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Perforce_atrembl86_FalerhonLaptop_2080_20243_8INF960_DAS_AM_DAS_AM_Plugins_DreamAbilitySystem_Source_DreamAbilitySystem_Public_Abilities_DASAbility_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
