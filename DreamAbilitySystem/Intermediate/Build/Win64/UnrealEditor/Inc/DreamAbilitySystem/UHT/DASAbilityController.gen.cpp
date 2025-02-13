// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DreamAbilitySystem/Public/Abilities/DASAbilityController.h"
#include "GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDASAbilityController() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	DREAMABILITYSYSTEM_API UClass* Z_Construct_UClass_UDASAbility_NoRegister();
	DREAMABILITYSYSTEM_API UClass* Z_Construct_UClass_UDASAbilityController();
	DREAMABILITYSYSTEM_API UClass* Z_Construct_UClass_UDASAbilityController_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	UPackage* Z_Construct_UPackage__Script_DreamAbilitySystem();
// End Cross Module References
	DEFINE_FUNCTION(UDASAbilityController::execCancelAbilityChildren)
	{
		P_GET_STRUCT(FGameplayTag,Z_Param_Tag);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CancelAbilityChildren(Z_Param_Tag);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDASAbilityController::execCancelAbility)
	{
		P_GET_STRUCT(FGameplayTag,Z_Param_Tag);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CancelAbility(Z_Param_Tag);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDASAbilityController::execRemoveActiveAbility)
	{
		P_GET_OBJECT(UDASAbility,Z_Param_Ability);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveActiveAbility(Z_Param_Ability);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDASAbilityController::execCancelAbilities)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CancelAbilities();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDASAbilityController::execTriggerAbility)
	{
		P_GET_STRUCT(FGameplayTag,Z_Param_AbilityType);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TriggerAbility(Z_Param_AbilityType);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDASAbilityController::execOnRep_ReplicatedAbilitiesRefArray)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_ReplicatedAbilitiesRefArray();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDASAbilityController::execOnRep_ReplicatedAbilitiesTagsArray)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_ReplicatedAbilitiesTagsArray();
		P_NATIVE_END;
	}
	void UDASAbilityController::StaticRegisterNativesUDASAbilityController()
	{
		UClass* Class = UDASAbilityController::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CancelAbilities", &UDASAbilityController::execCancelAbilities },
			{ "CancelAbility", &UDASAbilityController::execCancelAbility },
			{ "CancelAbilityChildren", &UDASAbilityController::execCancelAbilityChildren },
			{ "OnRep_ReplicatedAbilitiesRefArray", &UDASAbilityController::execOnRep_ReplicatedAbilitiesRefArray },
			{ "OnRep_ReplicatedAbilitiesTagsArray", &UDASAbilityController::execOnRep_ReplicatedAbilitiesTagsArray },
			{ "RemoveActiveAbility", &UDASAbilityController::execRemoveActiveAbility },
			{ "TriggerAbility", &UDASAbilityController::execTriggerAbility },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDASAbilityController_CancelAbilities_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDASAbilityController_CancelAbilities_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Active abilities handling\n" },
#endif
		{ "ModuleRelativePath", "Public/Abilities/DASAbilityController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Active abilities handling" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDASAbilityController_CancelAbilities_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDASAbilityController, nullptr, "CancelAbilities", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDASAbilityController_CancelAbilities_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDASAbilityController_CancelAbilities_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UDASAbilityController_CancelAbilities()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDASAbilityController_CancelAbilities_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDASAbilityController_CancelAbility_Statics
	{
		struct DASAbilityController_eventCancelAbility_Parms
		{
			FGameplayTag Tag;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Tag;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDASAbilityController_CancelAbility_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DASAbilityController_eventCancelAbility_Parms, Tag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 2083603574
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDASAbilityController_CancelAbility_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDASAbilityController_CancelAbility_Statics::NewProp_Tag,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDASAbilityController_CancelAbility_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Abilities/DASAbilityController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDASAbilityController_CancelAbility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDASAbilityController, nullptr, "CancelAbility", nullptr, nullptr, Z_Construct_UFunction_UDASAbilityController_CancelAbility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDASAbilityController_CancelAbility_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDASAbilityController_CancelAbility_Statics::DASAbilityController_eventCancelAbility_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDASAbilityController_CancelAbility_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDASAbilityController_CancelAbility_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDASAbilityController_CancelAbility_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UDASAbilityController_CancelAbility_Statics::DASAbilityController_eventCancelAbility_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UDASAbilityController_CancelAbility()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDASAbilityController_CancelAbility_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDASAbilityController_CancelAbilityChildren_Statics
	{
		struct DASAbilityController_eventCancelAbilityChildren_Parms
		{
			FGameplayTag Tag;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Tag;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDASAbilityController_CancelAbilityChildren_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DASAbilityController_eventCancelAbilityChildren_Parms, Tag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 2083603574
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDASAbilityController_CancelAbilityChildren_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDASAbilityController_CancelAbilityChildren_Statics::NewProp_Tag,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDASAbilityController_CancelAbilityChildren_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Abilities/DASAbilityController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDASAbilityController_CancelAbilityChildren_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDASAbilityController, nullptr, "CancelAbilityChildren", nullptr, nullptr, Z_Construct_UFunction_UDASAbilityController_CancelAbilityChildren_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDASAbilityController_CancelAbilityChildren_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDASAbilityController_CancelAbilityChildren_Statics::DASAbilityController_eventCancelAbilityChildren_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDASAbilityController_CancelAbilityChildren_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDASAbilityController_CancelAbilityChildren_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDASAbilityController_CancelAbilityChildren_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UDASAbilityController_CancelAbilityChildren_Statics::DASAbilityController_eventCancelAbilityChildren_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UDASAbilityController_CancelAbilityChildren()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDASAbilityController_CancelAbilityChildren_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDASAbilityController_OnRep_ReplicatedAbilitiesRefArray_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDASAbilityController_OnRep_ReplicatedAbilitiesRefArray_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Abilities/DASAbilityController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDASAbilityController_OnRep_ReplicatedAbilitiesRefArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDASAbilityController, nullptr, "OnRep_ReplicatedAbilitiesRefArray", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDASAbilityController_OnRep_ReplicatedAbilitiesRefArray_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDASAbilityController_OnRep_ReplicatedAbilitiesRefArray_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UDASAbilityController_OnRep_ReplicatedAbilitiesRefArray()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDASAbilityController_OnRep_ReplicatedAbilitiesRefArray_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDASAbilityController_OnRep_ReplicatedAbilitiesTagsArray_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDASAbilityController_OnRep_ReplicatedAbilitiesTagsArray_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Lists replications\n" },
#endif
		{ "ModuleRelativePath", "Public/Abilities/DASAbilityController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Lists replications" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDASAbilityController_OnRep_ReplicatedAbilitiesTagsArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDASAbilityController, nullptr, "OnRep_ReplicatedAbilitiesTagsArray", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDASAbilityController_OnRep_ReplicatedAbilitiesTagsArray_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDASAbilityController_OnRep_ReplicatedAbilitiesTagsArray_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UDASAbilityController_OnRep_ReplicatedAbilitiesTagsArray()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDASAbilityController_OnRep_ReplicatedAbilitiesTagsArray_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDASAbilityController_RemoveActiveAbility_Statics
	{
		struct DASAbilityController_eventRemoveActiveAbility_Parms
		{
			UDASAbility* Ability;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Ability;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDASAbilityController_RemoveActiveAbility_Statics::NewProp_Ability = { "Ability", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DASAbilityController_eventRemoveActiveAbility_Parms, Ability), Z_Construct_UClass_UDASAbility_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDASAbilityController_RemoveActiveAbility_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDASAbilityController_RemoveActiveAbility_Statics::NewProp_Ability,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDASAbilityController_RemoveActiveAbility_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Abilities/DASAbilityController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDASAbilityController_RemoveActiveAbility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDASAbilityController, nullptr, "RemoveActiveAbility", nullptr, nullptr, Z_Construct_UFunction_UDASAbilityController_RemoveActiveAbility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDASAbilityController_RemoveActiveAbility_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDASAbilityController_RemoveActiveAbility_Statics::DASAbilityController_eventRemoveActiveAbility_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDASAbilityController_RemoveActiveAbility_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDASAbilityController_RemoveActiveAbility_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDASAbilityController_RemoveActiveAbility_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UDASAbilityController_RemoveActiveAbility_Statics::DASAbilityController_eventRemoveActiveAbility_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UDASAbilityController_RemoveActiveAbility()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDASAbilityController_RemoveActiveAbility_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDASAbilityController_TriggerAbility_Statics
	{
		struct DASAbilityController_eventTriggerAbility_Parms
		{
			FGameplayTag AbilityType;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_AbilityType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDASAbilityController_TriggerAbility_Statics::NewProp_AbilityType = { "AbilityType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DASAbilityController_eventTriggerAbility_Parms, AbilityType), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 2083603574
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDASAbilityController_TriggerAbility_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDASAbilityController_TriggerAbility_Statics::NewProp_AbilityType,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDASAbilityController_TriggerAbility_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Try to trigger the ability\n" },
#endif
		{ "ModuleRelativePath", "Public/Abilities/DASAbilityController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Try to trigger the ability" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDASAbilityController_TriggerAbility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDASAbilityController, nullptr, "TriggerAbility", nullptr, nullptr, Z_Construct_UFunction_UDASAbilityController_TriggerAbility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDASAbilityController_TriggerAbility_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDASAbilityController_TriggerAbility_Statics::DASAbilityController_eventTriggerAbility_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDASAbilityController_TriggerAbility_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDASAbilityController_TriggerAbility_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDASAbilityController_TriggerAbility_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UDASAbilityController_TriggerAbility_Statics::DASAbilityController_eventTriggerAbility_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UDASAbilityController_TriggerAbility()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDASAbilityController_TriggerAbility_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDASAbilityController);
	UClass* Z_Construct_UClass_UDASAbilityController_NoRegister()
	{
		return UDASAbilityController::StaticClass();
	}
	struct Z_Construct_UClass_UDASAbilityController_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_Abilities_ValueProp;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Abilities_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Abilities_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_Abilities;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReplicatedAbilitiesTagsArray_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReplicatedAbilitiesTagsArray_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReplicatedAbilitiesTagsArray;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReplicatedAbilitiesRefArray_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReplicatedAbilitiesRefArray_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReplicatedAbilitiesRefArray;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AbilitiesInstance_ValueProp;
		static const UECodeGen_Private::FStructPropertyParams NewProp_AbilitiesInstance_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AbilitiesInstance_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_AbilitiesInstance;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ActiveAbilities_ElementProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActiveAbilities_MetaData[];
#endif
		static const UECodeGen_Private::FSetPropertyParams NewProp_ActiveAbilities;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDASAbilityController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_DreamAbilitySystem,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDASAbilityController_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UDASAbilityController_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDASAbilityController_CancelAbilities, "CancelAbilities" }, // 648155010
		{ &Z_Construct_UFunction_UDASAbilityController_CancelAbility, "CancelAbility" }, // 3816598289
		{ &Z_Construct_UFunction_UDASAbilityController_CancelAbilityChildren, "CancelAbilityChildren" }, // 2530199898
		{ &Z_Construct_UFunction_UDASAbilityController_OnRep_ReplicatedAbilitiesRefArray, "OnRep_ReplicatedAbilitiesRefArray" }, // 3069272660
		{ &Z_Construct_UFunction_UDASAbilityController_OnRep_ReplicatedAbilitiesTagsArray, "OnRep_ReplicatedAbilitiesTagsArray" }, // 4062108301
		{ &Z_Construct_UFunction_UDASAbilityController_RemoveActiveAbility, "RemoveActiveAbility" }, // 1355776560
		{ &Z_Construct_UFunction_UDASAbilityController_TriggerAbility, "TriggerAbility" }, // 3053787991
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDASAbilityController_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDASAbilityController_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Abilities/DASAbilityController.h" },
		{ "ModuleRelativePath", "Public/Abilities/DASAbilityController.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UDASAbilityController_Statics::NewProp_Abilities_ValueProp = { "Abilities", nullptr, (EPropertyFlags)0x0004000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UClass, Z_Construct_UClass_UDASAbility_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDASAbilityController_Statics::NewProp_Abilities_Key_KeyProp = { "Abilities_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 2083603574
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDASAbilityController_Statics::NewProp_Abilities_MetaData[] = {
		{ "Category", "DASAbilityController" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Dictionnary of possessed abilities\n" },
#endif
		{ "ModuleRelativePath", "Public/Abilities/DASAbilityController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Dictionnary of possessed abilities" },
#endif
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UDASAbilityController_Statics::NewProp_Abilities = { "Abilities", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDASAbilityController, Abilities), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDASAbilityController_Statics::NewProp_Abilities_MetaData), Z_Construct_UClass_UDASAbilityController_Statics::NewProp_Abilities_MetaData) }; // 2083603574
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDASAbilityController_Statics::NewProp_ReplicatedAbilitiesTagsArray_Inner = { "ReplicatedAbilitiesTagsArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 2083603574
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDASAbilityController_Statics::NewProp_ReplicatedAbilitiesTagsArray_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Replicated ability lists\n" },
#endif
		{ "ModuleRelativePath", "Public/Abilities/DASAbilityController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Replicated ability lists" },
#endif
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDASAbilityController_Statics::NewProp_ReplicatedAbilitiesTagsArray = { "ReplicatedAbilitiesTagsArray", "OnRep_ReplicatedAbilitiesTagsArray", (EPropertyFlags)0x0010000100000020, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDASAbilityController, ReplicatedAbilitiesTagsArray), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDASAbilityController_Statics::NewProp_ReplicatedAbilitiesTagsArray_MetaData), Z_Construct_UClass_UDASAbilityController_Statics::NewProp_ReplicatedAbilitiesTagsArray_MetaData) }; // 2083603574
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDASAbilityController_Statics::NewProp_ReplicatedAbilitiesRefArray_Inner = { "ReplicatedAbilitiesRefArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UDASAbility_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDASAbilityController_Statics::NewProp_ReplicatedAbilitiesRefArray_MetaData[] = {
		{ "ModuleRelativePath", "Public/Abilities/DASAbilityController.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDASAbilityController_Statics::NewProp_ReplicatedAbilitiesRefArray = { "ReplicatedAbilitiesRefArray", "OnRep_ReplicatedAbilitiesRefArray", (EPropertyFlags)0x0010000100000020, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDASAbilityController, ReplicatedAbilitiesRefArray), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDASAbilityController_Statics::NewProp_ReplicatedAbilitiesRefArray_MetaData), Z_Construct_UClass_UDASAbilityController_Statics::NewProp_ReplicatedAbilitiesRefArray_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDASAbilityController_Statics::NewProp_AbilitiesInstance_ValueProp = { "AbilitiesInstance", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UDASAbility_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDASAbilityController_Statics::NewProp_AbilitiesInstance_Key_KeyProp = { "AbilitiesInstance_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 2083603574
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDASAbilityController_Statics::NewProp_AbilitiesInstance_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Dictionary of the abilities' instance\n" },
#endif
		{ "ModuleRelativePath", "Public/Abilities/DASAbilityController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Dictionary of the abilities' instance" },
#endif
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UDASAbilityController_Statics::NewProp_AbilitiesInstance = { "AbilitiesInstance", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDASAbilityController, AbilitiesInstance), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDASAbilityController_Statics::NewProp_AbilitiesInstance_MetaData), Z_Construct_UClass_UDASAbilityController_Statics::NewProp_AbilitiesInstance_MetaData) }; // 2083603574
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDASAbilityController_Statics::NewProp_ActiveAbilities_ElementProp = { "ActiveAbilities", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UDASAbility_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDASAbilityController_Statics::NewProp_ActiveAbilities_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Currently active abilities\n" },
#endif
		{ "ModuleRelativePath", "Public/Abilities/DASAbilityController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Currently active abilities" },
#endif
	};
#endif
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UClass_UDASAbilityController_Statics::NewProp_ActiveAbilities = { "ActiveAbilities", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDASAbilityController, ActiveAbilities), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDASAbilityController_Statics::NewProp_ActiveAbilities_MetaData), Z_Construct_UClass_UDASAbilityController_Statics::NewProp_ActiveAbilities_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDASAbilityController_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDASAbilityController_Statics::NewProp_Abilities_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDASAbilityController_Statics::NewProp_Abilities_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDASAbilityController_Statics::NewProp_Abilities,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDASAbilityController_Statics::NewProp_ReplicatedAbilitiesTagsArray_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDASAbilityController_Statics::NewProp_ReplicatedAbilitiesTagsArray,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDASAbilityController_Statics::NewProp_ReplicatedAbilitiesRefArray_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDASAbilityController_Statics::NewProp_ReplicatedAbilitiesRefArray,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDASAbilityController_Statics::NewProp_AbilitiesInstance_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDASAbilityController_Statics::NewProp_AbilitiesInstance_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDASAbilityController_Statics::NewProp_AbilitiesInstance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDASAbilityController_Statics::NewProp_ActiveAbilities_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDASAbilityController_Statics::NewProp_ActiveAbilities,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDASAbilityController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDASAbilityController>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDASAbilityController_Statics::ClassParams = {
		&UDASAbilityController::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UDASAbilityController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UDASAbilityController_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDASAbilityController_Statics::Class_MetaDataParams), Z_Construct_UClass_UDASAbilityController_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDASAbilityController_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UDASAbilityController()
	{
		if (!Z_Registration_Info_UClass_UDASAbilityController.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDASAbilityController.OuterSingleton, Z_Construct_UClass_UDASAbilityController_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDASAbilityController.OuterSingleton;
	}
	template<> DREAMABILITYSYSTEM_API UClass* StaticClass<UDASAbilityController>()
	{
		return UDASAbilityController::StaticClass();
	}

	void UDASAbilityController::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_ReplicatedAbilitiesTagsArray(TEXT("ReplicatedAbilitiesTagsArray"));
		static const FName Name_ReplicatedAbilitiesRefArray(TEXT("ReplicatedAbilitiesRefArray"));

		const bool bIsValid = true
			&& Name_ReplicatedAbilitiesTagsArray == ClassReps[(int32)ENetFields_Private::ReplicatedAbilitiesTagsArray].Property->GetFName()
			&& Name_ReplicatedAbilitiesRefArray == ClassReps[(int32)ENetFields_Private::ReplicatedAbilitiesRefArray].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UDASAbilityController"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDASAbilityController);
	UDASAbilityController::~UDASAbilityController() {}
	struct Z_CompiledInDeferFile_FID_Perforce_atrembl86_FalerhonLaptop_2080_20243_8INF960_DAS_AM_DAS_AM_Plugins_DreamAbilitySystem_Source_DreamAbilitySystem_Public_Abilities_DASAbilityController_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Perforce_atrembl86_FalerhonLaptop_2080_20243_8INF960_DAS_AM_DAS_AM_Plugins_DreamAbilitySystem_Source_DreamAbilitySystem_Public_Abilities_DASAbilityController_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDASAbilityController, UDASAbilityController::StaticClass, TEXT("UDASAbilityController"), &Z_Registration_Info_UClass_UDASAbilityController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDASAbilityController), 2928353861U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Perforce_atrembl86_FalerhonLaptop_2080_20243_8INF960_DAS_AM_DAS_AM_Plugins_DreamAbilitySystem_Source_DreamAbilitySystem_Public_Abilities_DASAbilityController_h_1568381653(TEXT("/Script/DreamAbilitySystem"),
		Z_CompiledInDeferFile_FID_Perforce_atrembl86_FalerhonLaptop_2080_20243_8INF960_DAS_AM_DAS_AM_Plugins_DreamAbilitySystem_Source_DreamAbilitySystem_Public_Abilities_DASAbilityController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Perforce_atrembl86_FalerhonLaptop_2080_20243_8INF960_DAS_AM_DAS_AM_Plugins_DreamAbilitySystem_Source_DreamAbilitySystem_Public_Abilities_DASAbilityController_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
