// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DreamAbilitySystem/Public/Attributes/DASAttributesContainerComponent.h"
#include "DreamAbilitySystem/Public/Attributes/DASAttribute.h"
#include "GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDASAttributesContainerComponent() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	DREAMABILITYSYSTEM_API UClass* Z_Construct_UClass_UDASAttributesContainerComponent();
	DREAMABILITYSYSTEM_API UClass* Z_Construct_UClass_UDASAttributesContainerComponent_NoRegister();
	DREAMABILITYSYSTEM_API UClass* Z_Construct_UClass_UDASAttributeSet_NoRegister();
	DREAMABILITYSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FDASAttribute();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	UPackage* Z_Construct_UPackage__Script_DreamAbilitySystem();
// End Cross Module References
	DEFINE_FUNCTION(UDASAttributesContainerComponent::execGetAttribute)
	{
		P_GET_STRUCT(FGameplayTag,Z_Param_AttributeTag);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FDASAttribute*)Z_Param__Result=P_THIS->GetAttribute(Z_Param_AttributeTag);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDASAttributesContainerComponent::execHasAttribute)
	{
		P_GET_STRUCT(FGameplayTag,Z_Param_AttributeTag);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasAttribute(Z_Param_AttributeTag);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDASAttributesContainerComponent::execTryGetAttribute)
	{
		P_GET_STRUCT(FGameplayTag,Z_Param_AttributeTag);
		P_GET_STRUCT_REF(FDASAttribute,Z_Param_Out_OutAttribute);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->TryGetAttribute(Z_Param_AttributeTag,Z_Param_Out_OutAttribute);
		P_NATIVE_END;
	}
	void UDASAttributesContainerComponent::StaticRegisterNativesUDASAttributesContainerComponent()
	{
		UClass* Class = UDASAttributesContainerComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAttribute", &UDASAttributesContainerComponent::execGetAttribute },
			{ "HasAttribute", &UDASAttributesContainerComponent::execHasAttribute },
			{ "TryGetAttribute", &UDASAttributesContainerComponent::execTryGetAttribute },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDASAttributesContainerComponent_GetAttribute_Statics
	{
		struct DASAttributesContainerComponent_eventGetAttribute_Parms
		{
			FGameplayTag AttributeTag;
			FDASAttribute ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_AttributeTag;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDASAttributesContainerComponent_GetAttribute_Statics::NewProp_AttributeTag = { "AttributeTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DASAttributesContainerComponent_eventGetAttribute_Parms, AttributeTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 2083603574
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDASAttributesContainerComponent_GetAttribute_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010008000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DASAttributesContainerComponent_eventGetAttribute_Parms, ReturnValue), Z_Construct_UScriptStruct_FDASAttribute, METADATA_PARAMS(0, nullptr) }; // 95246426
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDASAttributesContainerComponent_GetAttribute_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDASAttributesContainerComponent_GetAttribute_Statics::NewProp_AttributeTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDASAttributesContainerComponent_GetAttribute_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDASAttributesContainerComponent_GetAttribute_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Attributes/DASAttributesContainerComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDASAttributesContainerComponent_GetAttribute_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDASAttributesContainerComponent, nullptr, "GetAttribute", nullptr, nullptr, Z_Construct_UFunction_UDASAttributesContainerComponent_GetAttribute_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDASAttributesContainerComponent_GetAttribute_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDASAttributesContainerComponent_GetAttribute_Statics::DASAttributesContainerComponent_eventGetAttribute_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDASAttributesContainerComponent_GetAttribute_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDASAttributesContainerComponent_GetAttribute_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDASAttributesContainerComponent_GetAttribute_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UDASAttributesContainerComponent_GetAttribute_Statics::DASAttributesContainerComponent_eventGetAttribute_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UDASAttributesContainerComponent_GetAttribute()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDASAttributesContainerComponent_GetAttribute_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDASAttributesContainerComponent_HasAttribute_Statics
	{
		struct DASAttributesContainerComponent_eventHasAttribute_Parms
		{
			FGameplayTag AttributeTag;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_AttributeTag;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDASAttributesContainerComponent_HasAttribute_Statics::NewProp_AttributeTag = { "AttributeTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DASAttributesContainerComponent_eventHasAttribute_Parms, AttributeTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 2083603574
	void Z_Construct_UFunction_UDASAttributesContainerComponent_HasAttribute_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DASAttributesContainerComponent_eventHasAttribute_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDASAttributesContainerComponent_HasAttribute_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(DASAttributesContainerComponent_eventHasAttribute_Parms), &Z_Construct_UFunction_UDASAttributesContainerComponent_HasAttribute_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDASAttributesContainerComponent_HasAttribute_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDASAttributesContainerComponent_HasAttribute_Statics::NewProp_AttributeTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDASAttributesContainerComponent_HasAttribute_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDASAttributesContainerComponent_HasAttribute_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Attributes/DASAttributesContainerComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDASAttributesContainerComponent_HasAttribute_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDASAttributesContainerComponent, nullptr, "HasAttribute", nullptr, nullptr, Z_Construct_UFunction_UDASAttributesContainerComponent_HasAttribute_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDASAttributesContainerComponent_HasAttribute_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDASAttributesContainerComponent_HasAttribute_Statics::DASAttributesContainerComponent_eventHasAttribute_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDASAttributesContainerComponent_HasAttribute_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDASAttributesContainerComponent_HasAttribute_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDASAttributesContainerComponent_HasAttribute_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UDASAttributesContainerComponent_HasAttribute_Statics::DASAttributesContainerComponent_eventHasAttribute_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UDASAttributesContainerComponent_HasAttribute()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDASAttributesContainerComponent_HasAttribute_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDASAttributesContainerComponent_TryGetAttribute_Statics
	{
		struct DASAttributesContainerComponent_eventTryGetAttribute_Parms
		{
			FGameplayTag AttributeTag;
			FDASAttribute OutAttribute;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_AttributeTag;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutAttribute;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDASAttributesContainerComponent_TryGetAttribute_Statics::NewProp_AttributeTag = { "AttributeTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DASAttributesContainerComponent_eventTryGetAttribute_Parms, AttributeTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 2083603574
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDASAttributesContainerComponent_TryGetAttribute_Statics::NewProp_OutAttribute = { "OutAttribute", nullptr, (EPropertyFlags)0x0010008000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DASAttributesContainerComponent_eventTryGetAttribute_Parms, OutAttribute), Z_Construct_UScriptStruct_FDASAttribute, METADATA_PARAMS(0, nullptr) }; // 95246426
	void Z_Construct_UFunction_UDASAttributesContainerComponent_TryGetAttribute_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DASAttributesContainerComponent_eventTryGetAttribute_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDASAttributesContainerComponent_TryGetAttribute_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(DASAttributesContainerComponent_eventTryGetAttribute_Parms), &Z_Construct_UFunction_UDASAttributesContainerComponent_TryGetAttribute_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDASAttributesContainerComponent_TryGetAttribute_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDASAttributesContainerComponent_TryGetAttribute_Statics::NewProp_AttributeTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDASAttributesContainerComponent_TryGetAttribute_Statics::NewProp_OutAttribute,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDASAttributesContainerComponent_TryGetAttribute_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDASAttributesContainerComponent_TryGetAttribute_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Attributes/DASAttributesContainerComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDASAttributesContainerComponent_TryGetAttribute_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDASAttributesContainerComponent, nullptr, "TryGetAttribute", nullptr, nullptr, Z_Construct_UFunction_UDASAttributesContainerComponent_TryGetAttribute_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDASAttributesContainerComponent_TryGetAttribute_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDASAttributesContainerComponent_TryGetAttribute_Statics::DASAttributesContainerComponent_eventTryGetAttribute_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDASAttributesContainerComponent_TryGetAttribute_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDASAttributesContainerComponent_TryGetAttribute_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDASAttributesContainerComponent_TryGetAttribute_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UDASAttributesContainerComponent_TryGetAttribute_Statics::DASAttributesContainerComponent_eventTryGetAttribute_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UDASAttributesContainerComponent_TryGetAttribute()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDASAttributesContainerComponent_TryGetAttribute_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDASAttributesContainerComponent);
	UClass* Z_Construct_UClass_UDASAttributesContainerComponent_NoRegister()
	{
		return UDASAttributesContainerComponent::StaticClass();
	}
	struct Z_Construct_UClass_UDASAttributesContainerComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttributeSetOverride_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_AttributeSetOverride;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttributeSet_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AttributeSet;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDASAttributesContainerComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_DreamAbilitySystem,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDASAttributesContainerComponent_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UDASAttributesContainerComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDASAttributesContainerComponent_GetAttribute, "GetAttribute" }, // 4091151242
		{ &Z_Construct_UFunction_UDASAttributesContainerComponent_HasAttribute, "HasAttribute" }, // 1721010074
		{ &Z_Construct_UFunction_UDASAttributesContainerComponent_TryGetAttribute, "TryGetAttribute" }, // 813570716
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDASAttributesContainerComponent_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDASAttributesContainerComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Attributes/DASAttributesContainerComponent.h" },
		{ "ModuleRelativePath", "Public/Attributes/DASAttributesContainerComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDASAttributesContainerComponent_Statics::NewProp_AttributeSetOverride_MetaData[] = {
		{ "Category", "DASAttributesContainerComponent" },
		{ "ModuleRelativePath", "Public/Attributes/DASAttributesContainerComponent.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UDASAttributesContainerComponent_Statics::NewProp_AttributeSetOverride = { "AttributeSetOverride", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDASAttributesContainerComponent, AttributeSetOverride), Z_Construct_UClass_UClass, Z_Construct_UClass_UDASAttributeSet_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDASAttributesContainerComponent_Statics::NewProp_AttributeSetOverride_MetaData), Z_Construct_UClass_UDASAttributesContainerComponent_Statics::NewProp_AttributeSetOverride_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDASAttributesContainerComponent_Statics::NewProp_AttributeSet_MetaData[] = {
		{ "ModuleRelativePath", "Public/Attributes/DASAttributesContainerComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDASAttributesContainerComponent_Statics::NewProp_AttributeSet = { "AttributeSet", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDASAttributesContainerComponent, AttributeSet), Z_Construct_UClass_UDASAttributeSet_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDASAttributesContainerComponent_Statics::NewProp_AttributeSet_MetaData), Z_Construct_UClass_UDASAttributesContainerComponent_Statics::NewProp_AttributeSet_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDASAttributesContainerComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDASAttributesContainerComponent_Statics::NewProp_AttributeSetOverride,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDASAttributesContainerComponent_Statics::NewProp_AttributeSet,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDASAttributesContainerComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDASAttributesContainerComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDASAttributesContainerComponent_Statics::ClassParams = {
		&UDASAttributesContainerComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UDASAttributesContainerComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UDASAttributesContainerComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDASAttributesContainerComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UDASAttributesContainerComponent_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDASAttributesContainerComponent_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UDASAttributesContainerComponent()
	{
		if (!Z_Registration_Info_UClass_UDASAttributesContainerComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDASAttributesContainerComponent.OuterSingleton, Z_Construct_UClass_UDASAttributesContainerComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDASAttributesContainerComponent.OuterSingleton;
	}
	template<> DREAMABILITYSYSTEM_API UClass* StaticClass<UDASAttributesContainerComponent>()
	{
		return UDASAttributesContainerComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDASAttributesContainerComponent);
	UDASAttributesContainerComponent::~UDASAttributesContainerComponent() {}
	struct Z_CompiledInDeferFile_FID_Perforce_atrembl86_FalerhonLaptop_2080_20243_8INF960_DAS_AM_DAS_AM_Plugins_DreamAbilitySystem_Source_DreamAbilitySystem_Public_Attributes_DASAttributesContainerComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Perforce_atrembl86_FalerhonLaptop_2080_20243_8INF960_DAS_AM_DAS_AM_Plugins_DreamAbilitySystem_Source_DreamAbilitySystem_Public_Attributes_DASAttributesContainerComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDASAttributesContainerComponent, UDASAttributesContainerComponent::StaticClass, TEXT("UDASAttributesContainerComponent"), &Z_Registration_Info_UClass_UDASAttributesContainerComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDASAttributesContainerComponent), 366633446U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Perforce_atrembl86_FalerhonLaptop_2080_20243_8INF960_DAS_AM_DAS_AM_Plugins_DreamAbilitySystem_Source_DreamAbilitySystem_Public_Attributes_DASAttributesContainerComponent_h_1944561450(TEXT("/Script/DreamAbilitySystem"),
		Z_CompiledInDeferFile_FID_Perforce_atrembl86_FalerhonLaptop_2080_20243_8INF960_DAS_AM_DAS_AM_Plugins_DreamAbilitySystem_Source_DreamAbilitySystem_Public_Attributes_DASAttributesContainerComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Perforce_atrembl86_FalerhonLaptop_2080_20243_8INF960_DAS_AM_DAS_AM_Plugins_DreamAbilitySystem_Source_DreamAbilitySystem_Public_Attributes_DASAttributesContainerComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
