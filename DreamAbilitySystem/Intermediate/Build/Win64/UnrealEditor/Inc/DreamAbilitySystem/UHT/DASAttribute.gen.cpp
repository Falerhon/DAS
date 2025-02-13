// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DreamAbilitySystem/Public/Attributes/DASAttribute.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDASAttribute() {}
// Cross Module References
	DREAMABILITYSYSTEM_API UFunction* Z_Construct_UDelegateFunction_DreamAbilitySystem_OnAttributeValueChange__DelegateSignature();
	DREAMABILITYSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FDASAttribute();
	UPackage* Z_Construct_UPackage__Script_DreamAbilitySystem();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_DreamAbilitySystem_OnAttributeValueChange__DelegateSignature_Statics
	{
		struct _Script_DreamAbilitySystem_eventOnAttributeValueChange_Parms
		{
			float oldValue;
			float newValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_oldValue;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_newValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_DreamAbilitySystem_OnAttributeValueChange__DelegateSignature_Statics::NewProp_oldValue = { "oldValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_DreamAbilitySystem_eventOnAttributeValueChange_Parms, oldValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_DreamAbilitySystem_OnAttributeValueChange__DelegateSignature_Statics::NewProp_newValue = { "newValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_DreamAbilitySystem_eventOnAttributeValueChange_Parms, newValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_DreamAbilitySystem_OnAttributeValueChange__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_DreamAbilitySystem_OnAttributeValueChange__DelegateSignature_Statics::NewProp_oldValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_DreamAbilitySystem_OnAttributeValueChange__DelegateSignature_Statics::NewProp_newValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_DreamAbilitySystem_OnAttributeValueChange__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Attributes/DASAttribute.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_DreamAbilitySystem_OnAttributeValueChange__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_DreamAbilitySystem, nullptr, "OnAttributeValueChange__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_DreamAbilitySystem_OnAttributeValueChange__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DreamAbilitySystem_OnAttributeValueChange__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_DreamAbilitySystem_OnAttributeValueChange__DelegateSignature_Statics::_Script_DreamAbilitySystem_eventOnAttributeValueChange_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DreamAbilitySystem_OnAttributeValueChange__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_DreamAbilitySystem_OnAttributeValueChange__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DreamAbilitySystem_OnAttributeValueChange__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_DreamAbilitySystem_OnAttributeValueChange__DelegateSignature_Statics::_Script_DreamAbilitySystem_eventOnAttributeValueChange_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_DreamAbilitySystem_OnAttributeValueChange__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_DreamAbilitySystem_OnAttributeValueChange__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnAttributeValueChange_DelegateWrapper(const FMulticastScriptDelegate& OnAttributeValueChange, float oldValue, float newValue)
{
	struct _Script_DreamAbilitySystem_eventOnAttributeValueChange_Parms
	{
		float oldValue;
		float newValue;
	};
	_Script_DreamAbilitySystem_eventOnAttributeValueChange_Parms Parms;
	Parms.oldValue=oldValue;
	Parms.newValue=newValue;
	OnAttributeValueChange.ProcessMulticastDelegate<UObject>(&Parms);
}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DASAttribute;
class UScriptStruct* FDASAttribute::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DASAttribute.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DASAttribute.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDASAttribute, (UObject*)Z_Construct_UPackage__Script_DreamAbilitySystem(), TEXT("DASAttribute"));
	}
	return Z_Registration_Info_UScriptStruct_DASAttribute.OuterSingleton;
}
template<> DREAMABILITYSYSTEM_API UScriptStruct* StaticStruct<FDASAttribute>()
{
	return FDASAttribute::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDASAttribute_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InitialValue_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InitialValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinValue_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MinValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxValue_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentValue_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CurrentValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnAttributeValueChange_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnAttributeValueChange;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_isInitialized_MetaData[];
#endif
		static void NewProp_isInitialized_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_isInitialized;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDASAttribute_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Attributes/DASAttribute.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDASAttribute_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDASAttribute>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDASAttribute_Statics::NewProp_InitialValue_MetaData[] = {
		{ "Category", "DASAttribute" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// <summary>\n/// The initial value of the attribute (only applied if an attribute container is attached to the owning actor)\n/// </summary>\n" },
#endif
		{ "ModuleRelativePath", "Public/Attributes/DASAttribute.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "<summary>\nThe initial value of the attribute (only applied if an attribute container is attached to the owning actor)\n</summary>" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDASAttribute_Statics::NewProp_InitialValue = { "InitialValue", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDASAttribute, InitialValue), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDASAttribute_Statics::NewProp_InitialValue_MetaData), Z_Construct_UScriptStruct_FDASAttribute_Statics::NewProp_InitialValue_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDASAttribute_Statics::NewProp_MinValue_MetaData[] = {
		{ "Category", "DASAttribute" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// <summary>\n/// The minimum value of the attribute\n/// </summary>\n" },
#endif
		{ "ModuleRelativePath", "Public/Attributes/DASAttribute.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "<summary>\nThe minimum value of the attribute\n</summary>" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDASAttribute_Statics::NewProp_MinValue = { "MinValue", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDASAttribute, MinValue), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDASAttribute_Statics::NewProp_MinValue_MetaData), Z_Construct_UScriptStruct_FDASAttribute_Statics::NewProp_MinValue_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDASAttribute_Statics::NewProp_MaxValue_MetaData[] = {
		{ "Category", "DASAttribute" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// <summary>\n/// The maximum value of the attribute\n/// </summary>\n" },
#endif
		{ "ModuleRelativePath", "Public/Attributes/DASAttribute.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "<summary>\nThe maximum value of the attribute\n</summary>" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDASAttribute_Statics::NewProp_MaxValue = { "MaxValue", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDASAttribute, MaxValue), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDASAttribute_Statics::NewProp_MaxValue_MetaData), Z_Construct_UScriptStruct_FDASAttribute_Statics::NewProp_MaxValue_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDASAttribute_Statics::NewProp_CurrentValue_MetaData[] = {
		{ "Category", "DASAttribute" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// <summary>\n/// Current value of the attribute. Should not be modified directly, or OnAttributeValueChange should be called afterwards.\n/// </summary>\n" },
#endif
		{ "ModuleRelativePath", "Public/Attributes/DASAttribute.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "<summary>\nCurrent value of the attribute. Should not be modified directly, or OnAttributeValueChange should be called afterwards.\n</summary>" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDASAttribute_Statics::NewProp_CurrentValue = { "CurrentValue", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDASAttribute, CurrentValue), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDASAttribute_Statics::NewProp_CurrentValue_MetaData), Z_Construct_UScriptStruct_FDASAttribute_Statics::NewProp_CurrentValue_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDASAttribute_Statics::NewProp_OnAttributeValueChange_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// <summary>\n/// Multicast delegate called when this attribute's value changes. Not guaranteed to be called upon every modification of the value.\n/// </summary>\n" },
#endif
		{ "ModuleRelativePath", "Public/Attributes/DASAttribute.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "<summary>\nMulticast delegate called when this attribute's value changes. Not guaranteed to be called upon every modification of the value.\n</summary>" },
#endif
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UScriptStruct_FDASAttribute_Statics::NewProp_OnAttributeValueChange = { "OnAttributeValueChange", nullptr, (EPropertyFlags)0x0010100010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDASAttribute, OnAttributeValueChange), Z_Construct_UDelegateFunction_DreamAbilitySystem_OnAttributeValueChange__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDASAttribute_Statics::NewProp_OnAttributeValueChange_MetaData), Z_Construct_UScriptStruct_FDASAttribute_Statics::NewProp_OnAttributeValueChange_MetaData) }; // 4061359055
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDASAttribute_Statics::NewProp_isInitialized_MetaData[] = {
		{ "ModuleRelativePath", "Public/Attributes/DASAttribute.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FDASAttribute_Statics::NewProp_isInitialized_SetBit(void* Obj)
	{
		((FDASAttribute*)Obj)->isInitialized = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDASAttribute_Statics::NewProp_isInitialized = { "isInitialized", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FDASAttribute), &Z_Construct_UScriptStruct_FDASAttribute_Statics::NewProp_isInitialized_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDASAttribute_Statics::NewProp_isInitialized_MetaData), Z_Construct_UScriptStruct_FDASAttribute_Statics::NewProp_isInitialized_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDASAttribute_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDASAttribute_Statics::NewProp_InitialValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDASAttribute_Statics::NewProp_MinValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDASAttribute_Statics::NewProp_MaxValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDASAttribute_Statics::NewProp_CurrentValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDASAttribute_Statics::NewProp_OnAttributeValueChange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDASAttribute_Statics::NewProp_isInitialized,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDASAttribute_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DreamAbilitySystem,
		nullptr,
		&NewStructOps,
		"DASAttribute",
		Z_Construct_UScriptStruct_FDASAttribute_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDASAttribute_Statics::PropPointers),
		sizeof(FDASAttribute),
		alignof(FDASAttribute),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDASAttribute_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDASAttribute_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDASAttribute_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FDASAttribute()
	{
		if (!Z_Registration_Info_UScriptStruct_DASAttribute.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DASAttribute.InnerSingleton, Z_Construct_UScriptStruct_FDASAttribute_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DASAttribute.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Perforce_atrembl86_FalerhonLaptop_2080_20243_8INF960_DAS_AM_DAS_AM_Plugins_DreamAbilitySystem_Source_DreamAbilitySystem_Public_Attributes_DASAttribute_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Perforce_atrembl86_FalerhonLaptop_2080_20243_8INF960_DAS_AM_DAS_AM_Plugins_DreamAbilitySystem_Source_DreamAbilitySystem_Public_Attributes_DASAttribute_h_Statics::ScriptStructInfo[] = {
		{ FDASAttribute::StaticStruct, Z_Construct_UScriptStruct_FDASAttribute_Statics::NewStructOps, TEXT("DASAttribute"), &Z_Registration_Info_UScriptStruct_DASAttribute, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDASAttribute), 95246426U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Perforce_atrembl86_FalerhonLaptop_2080_20243_8INF960_DAS_AM_DAS_AM_Plugins_DreamAbilitySystem_Source_DreamAbilitySystem_Public_Attributes_DASAttribute_h_2902358631(TEXT("/Script/DreamAbilitySystem"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Perforce_atrembl86_FalerhonLaptop_2080_20243_8INF960_DAS_AM_DAS_AM_Plugins_DreamAbilitySystem_Source_DreamAbilitySystem_Public_Attributes_DASAttribute_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Perforce_atrembl86_FalerhonLaptop_2080_20243_8INF960_DAS_AM_DAS_AM_Plugins_DreamAbilitySystem_Source_DreamAbilitySystem_Public_Attributes_DASAttribute_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
