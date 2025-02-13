// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DreamAbilitySystem/Public/Attributes/DASAttributeSet.h"
#include "DreamAbilitySystem/Public/Attributes/DASAttribute.h"
#include "GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDASAttributeSet() {}
// Cross Module References
	DREAMABILITYSYSTEM_API UClass* Z_Construct_UClass_UDASAttributeSet();
	DREAMABILITYSYSTEM_API UClass* Z_Construct_UClass_UDASAttributeSet_NoRegister();
	DREAMABILITYSYSTEM_API UClass* Z_Construct_UClass_UDASReplicatedObject();
	DREAMABILITYSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FDASAttribute();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	UPackage* Z_Construct_UPackage__Script_DreamAbilitySystem();
// End Cross Module References
	DEFINE_FUNCTION(UDASAttributeSet::execGetAttribute)
	{
		P_GET_STRUCT(FGameplayTag,Z_Param_AttributeTag);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FDASAttribute*)Z_Param__Result=P_THIS->GetAttribute(Z_Param_AttributeTag);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDASAttributeSet::execHasAttribute)
	{
		P_GET_STRUCT(FGameplayTag,Z_Param_AttributeTag);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasAttribute(Z_Param_AttributeTag);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDASAttributeSet::execTryGetAttribute)
	{
		P_GET_STRUCT(FGameplayTag,Z_Param_AttributeTag);
		P_GET_STRUCT_REF(FDASAttribute,Z_Param_Out_OutAttribute);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->TryGetAttribute(Z_Param_AttributeTag,Z_Param_Out_OutAttribute);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDASAttributeSet::execTryAddExternalAttribute)
	{
		P_GET_STRUCT(FGameplayTag,Z_Param_AttributeTag);
		P_GET_STRUCT_REF(FDASAttribute,Z_Param_Out_Attribute);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->TryAddExternalAttribute(Z_Param_AttributeTag,Z_Param_Out_Attribute);
		P_NATIVE_END;
	}
	void UDASAttributeSet::StaticRegisterNativesUDASAttributeSet()
	{
		UClass* Class = UDASAttributeSet::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAttribute", &UDASAttributeSet::execGetAttribute },
			{ "HasAttribute", &UDASAttributeSet::execHasAttribute },
			{ "TryAddExternalAttribute", &UDASAttributeSet::execTryAddExternalAttribute },
			{ "TryGetAttribute", &UDASAttributeSet::execTryGetAttribute },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDASAttributeSet_GetAttribute_Statics
	{
		struct DASAttributeSet_eventGetAttribute_Parms
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDASAttributeSet_GetAttribute_Statics::NewProp_AttributeTag = { "AttributeTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DASAttributeSet_eventGetAttribute_Parms, AttributeTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 2083603574
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDASAttributeSet_GetAttribute_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010008000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DASAttributeSet_eventGetAttribute_Parms, ReturnValue), Z_Construct_UScriptStruct_FDASAttribute, METADATA_PARAMS(0, nullptr) }; // 95246426
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDASAttributeSet_GetAttribute_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDASAttributeSet_GetAttribute_Statics::NewProp_AttributeTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDASAttributeSet_GetAttribute_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDASAttributeSet_GetAttribute_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Attributes/DASAttributeSet.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDASAttributeSet_GetAttribute_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDASAttributeSet, nullptr, "GetAttribute", nullptr, nullptr, Z_Construct_UFunction_UDASAttributeSet_GetAttribute_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDASAttributeSet_GetAttribute_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDASAttributeSet_GetAttribute_Statics::DASAttributeSet_eventGetAttribute_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDASAttributeSet_GetAttribute_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDASAttributeSet_GetAttribute_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDASAttributeSet_GetAttribute_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UDASAttributeSet_GetAttribute_Statics::DASAttributeSet_eventGetAttribute_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UDASAttributeSet_GetAttribute()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDASAttributeSet_GetAttribute_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDASAttributeSet_HasAttribute_Statics
	{
		struct DASAttributeSet_eventHasAttribute_Parms
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDASAttributeSet_HasAttribute_Statics::NewProp_AttributeTag = { "AttributeTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DASAttributeSet_eventHasAttribute_Parms, AttributeTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 2083603574
	void Z_Construct_UFunction_UDASAttributeSet_HasAttribute_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DASAttributeSet_eventHasAttribute_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDASAttributeSet_HasAttribute_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(DASAttributeSet_eventHasAttribute_Parms), &Z_Construct_UFunction_UDASAttributeSet_HasAttribute_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDASAttributeSet_HasAttribute_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDASAttributeSet_HasAttribute_Statics::NewProp_AttributeTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDASAttributeSet_HasAttribute_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDASAttributeSet_HasAttribute_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Attributes/DASAttributeSet.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDASAttributeSet_HasAttribute_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDASAttributeSet, nullptr, "HasAttribute", nullptr, nullptr, Z_Construct_UFunction_UDASAttributeSet_HasAttribute_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDASAttributeSet_HasAttribute_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDASAttributeSet_HasAttribute_Statics::DASAttributeSet_eventHasAttribute_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDASAttributeSet_HasAttribute_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDASAttributeSet_HasAttribute_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDASAttributeSet_HasAttribute_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UDASAttributeSet_HasAttribute_Statics::DASAttributeSet_eventHasAttribute_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UDASAttributeSet_HasAttribute()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDASAttributeSet_HasAttribute_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDASAttributeSet_TryAddExternalAttribute_Statics
	{
		struct DASAttributeSet_eventTryAddExternalAttribute_Parms
		{
			FGameplayTag AttributeTag;
			FDASAttribute Attribute;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_AttributeTag;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Attribute;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDASAttributeSet_TryAddExternalAttribute_Statics::NewProp_AttributeTag = { "AttributeTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DASAttributeSet_eventTryAddExternalAttribute_Parms, AttributeTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 2083603574
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDASAttributeSet_TryAddExternalAttribute_Statics::NewProp_Attribute = { "Attribute", nullptr, (EPropertyFlags)0x0010008000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DASAttributeSet_eventTryAddExternalAttribute_Parms, Attribute), Z_Construct_UScriptStruct_FDASAttribute, METADATA_PARAMS(0, nullptr) }; // 95246426
	void Z_Construct_UFunction_UDASAttributeSet_TryAddExternalAttribute_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DASAttributeSet_eventTryAddExternalAttribute_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDASAttributeSet_TryAddExternalAttribute_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(DASAttributeSet_eventTryAddExternalAttribute_Parms), &Z_Construct_UFunction_UDASAttributeSet_TryAddExternalAttribute_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDASAttributeSet_TryAddExternalAttribute_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDASAttributeSet_TryAddExternalAttribute_Statics::NewProp_AttributeTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDASAttributeSet_TryAddExternalAttribute_Statics::NewProp_Attribute,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDASAttributeSet_TryAddExternalAttribute_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDASAttributeSet_TryAddExternalAttribute_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Attributes/DASAttributeSet.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDASAttributeSet_TryAddExternalAttribute_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDASAttributeSet, nullptr, "TryAddExternalAttribute", nullptr, nullptr, Z_Construct_UFunction_UDASAttributeSet_TryAddExternalAttribute_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDASAttributeSet_TryAddExternalAttribute_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDASAttributeSet_TryAddExternalAttribute_Statics::DASAttributeSet_eventTryAddExternalAttribute_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDASAttributeSet_TryAddExternalAttribute_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDASAttributeSet_TryAddExternalAttribute_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDASAttributeSet_TryAddExternalAttribute_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UDASAttributeSet_TryAddExternalAttribute_Statics::DASAttributeSet_eventTryAddExternalAttribute_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UDASAttributeSet_TryAddExternalAttribute()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDASAttributeSet_TryAddExternalAttribute_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDASAttributeSet_TryGetAttribute_Statics
	{
		struct DASAttributeSet_eventTryGetAttribute_Parms
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDASAttributeSet_TryGetAttribute_Statics::NewProp_AttributeTag = { "AttributeTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DASAttributeSet_eventTryGetAttribute_Parms, AttributeTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 2083603574
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDASAttributeSet_TryGetAttribute_Statics::NewProp_OutAttribute = { "OutAttribute", nullptr, (EPropertyFlags)0x0010008000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DASAttributeSet_eventTryGetAttribute_Parms, OutAttribute), Z_Construct_UScriptStruct_FDASAttribute, METADATA_PARAMS(0, nullptr) }; // 95246426
	void Z_Construct_UFunction_UDASAttributeSet_TryGetAttribute_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DASAttributeSet_eventTryGetAttribute_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDASAttributeSet_TryGetAttribute_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(DASAttributeSet_eventTryGetAttribute_Parms), &Z_Construct_UFunction_UDASAttributeSet_TryGetAttribute_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDASAttributeSet_TryGetAttribute_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDASAttributeSet_TryGetAttribute_Statics::NewProp_AttributeTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDASAttributeSet_TryGetAttribute_Statics::NewProp_OutAttribute,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDASAttributeSet_TryGetAttribute_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDASAttributeSet_TryGetAttribute_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Attributes/DASAttributeSet.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDASAttributeSet_TryGetAttribute_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDASAttributeSet, nullptr, "TryGetAttribute", nullptr, nullptr, Z_Construct_UFunction_UDASAttributeSet_TryGetAttribute_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDASAttributeSet_TryGetAttribute_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDASAttributeSet_TryGetAttribute_Statics::DASAttributeSet_eventTryGetAttribute_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDASAttributeSet_TryGetAttribute_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDASAttributeSet_TryGetAttribute_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDASAttributeSet_TryGetAttribute_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UDASAttributeSet_TryGetAttribute_Statics::DASAttributeSet_eventTryGetAttribute_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UDASAttributeSet_TryGetAttribute()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDASAttributeSet_TryGetAttribute_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDASAttributeSet);
	UClass* Z_Construct_UClass_UDASAttributeSet_NoRegister()
	{
		return UDASAttributeSet::StaticClass();
	}
	struct Z_Construct_UClass_UDASAttributeSet_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDASAttributeSet_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDASReplicatedObject,
		(UObject* (*)())Z_Construct_UPackage__Script_DreamAbilitySystem,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDASAttributeSet_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UDASAttributeSet_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDASAttributeSet_GetAttribute, "GetAttribute" }, // 780169955
		{ &Z_Construct_UFunction_UDASAttributeSet_HasAttribute, "HasAttribute" }, // 661011152
		{ &Z_Construct_UFunction_UDASAttributeSet_TryAddExternalAttribute, "TryAddExternalAttribute" }, // 2295323053
		{ &Z_Construct_UFunction_UDASAttributeSet_TryGetAttribute, "TryGetAttribute" }, // 4113384387
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDASAttributeSet_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDASAttributeSet_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *\n */" },
#endif
		{ "IncludePath", "Attributes/DASAttributeSet.h" },
		{ "ModuleRelativePath", "Public/Attributes/DASAttributeSet.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDASAttributeSet_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDASAttributeSet>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDASAttributeSet_Statics::ClassParams = {
		&UDASAttributeSet::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDASAttributeSet_Statics::Class_MetaDataParams), Z_Construct_UClass_UDASAttributeSet_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UDASAttributeSet()
	{
		if (!Z_Registration_Info_UClass_UDASAttributeSet.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDASAttributeSet.OuterSingleton, Z_Construct_UClass_UDASAttributeSet_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDASAttributeSet.OuterSingleton;
	}
	template<> DREAMABILITYSYSTEM_API UClass* StaticClass<UDASAttributeSet>()
	{
		return UDASAttributeSet::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDASAttributeSet);
	UDASAttributeSet::~UDASAttributeSet() {}
	struct Z_CompiledInDeferFile_FID_Perforce_atrembl86_FalerhonLaptop_2080_20243_8INF960_DAS_AM_DAS_AM_Plugins_DreamAbilitySystem_Source_DreamAbilitySystem_Public_Attributes_DASAttributeSet_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Perforce_atrembl86_FalerhonLaptop_2080_20243_8INF960_DAS_AM_DAS_AM_Plugins_DreamAbilitySystem_Source_DreamAbilitySystem_Public_Attributes_DASAttributeSet_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDASAttributeSet, UDASAttributeSet::StaticClass, TEXT("UDASAttributeSet"), &Z_Registration_Info_UClass_UDASAttributeSet, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDASAttributeSet), 4019284959U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Perforce_atrembl86_FalerhonLaptop_2080_20243_8INF960_DAS_AM_DAS_AM_Plugins_DreamAbilitySystem_Source_DreamAbilitySystem_Public_Attributes_DASAttributeSet_h_260133692(TEXT("/Script/DreamAbilitySystem"),
		Z_CompiledInDeferFile_FID_Perforce_atrembl86_FalerhonLaptop_2080_20243_8INF960_DAS_AM_DAS_AM_Plugins_DreamAbilitySystem_Source_DreamAbilitySystem_Public_Attributes_DASAttributeSet_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Perforce_atrembl86_FalerhonLaptop_2080_20243_8INF960_DAS_AM_DAS_AM_Plugins_DreamAbilitySystem_Source_DreamAbilitySystem_Public_Attributes_DASAttributeSet_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
