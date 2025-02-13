// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DreamAbilitySystem/Public/DASReplicatedObject.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDASReplicatedObject() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	DREAMABILITYSYSTEM_API UClass* Z_Construct_UClass_UDASReplicatedObject();
	DREAMABILITYSYSTEM_API UClass* Z_Construct_UClass_UDASReplicatedObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
	UPackage* Z_Construct_UPackage__Script_DreamAbilitySystem();
// End Cross Module References
	DEFINE_FUNCTION(UDASReplicatedObject::execDestroy)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Destroy();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDASReplicatedObject::execGetOwningActor)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AActor**)Z_Param__Result=P_THIS->GetOwningActor();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDASReplicatedObject::execGetWorld)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UWorld**)Z_Param__Result=P_THIS->GetWorld();
		P_NATIVE_END;
	}
	void UDASReplicatedObject::StaticRegisterNativesUDASReplicatedObject()
	{
		UClass* Class = UDASReplicatedObject::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Destroy", &UDASReplicatedObject::execDestroy },
			{ "GetOwningActor", &UDASReplicatedObject::execGetOwningActor },
			{ "GetWorld", &UDASReplicatedObject::execGetWorld },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDASReplicatedObject_Destroy_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDASReplicatedObject_Destroy_Statics::Function_MetaDataParams[] = {
		{ "Category", "My Object" },
		{ "ModuleRelativePath", "Public/DASReplicatedObject.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDASReplicatedObject_Destroy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDASReplicatedObject, nullptr, "Destroy", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDASReplicatedObject_Destroy_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDASReplicatedObject_Destroy_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UDASReplicatedObject_Destroy()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDASReplicatedObject_Destroy_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDASReplicatedObject_GetOwningActor_Statics
	{
		struct DASReplicatedObject_eventGetOwningActor_Parms
		{
			AActor* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDASReplicatedObject_GetOwningActor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DASReplicatedObject_eventGetOwningActor_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDASReplicatedObject_GetOwningActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDASReplicatedObject_GetOwningActor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDASReplicatedObject_GetOwningActor_Statics::Function_MetaDataParams[] = {
		{ "Category", "My Object" },
		{ "ModuleRelativePath", "Public/DASReplicatedObject.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDASReplicatedObject_GetOwningActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDASReplicatedObject, nullptr, "GetOwningActor", nullptr, nullptr, Z_Construct_UFunction_UDASReplicatedObject_GetOwningActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDASReplicatedObject_GetOwningActor_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDASReplicatedObject_GetOwningActor_Statics::DASReplicatedObject_eventGetOwningActor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDASReplicatedObject_GetOwningActor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDASReplicatedObject_GetOwningActor_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDASReplicatedObject_GetOwningActor_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UDASReplicatedObject_GetOwningActor_Statics::DASReplicatedObject_eventGetOwningActor_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UDASReplicatedObject_GetOwningActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDASReplicatedObject_GetOwningActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDASReplicatedObject_GetWorld_Statics
	{
		struct DASReplicatedObject_eventGetWorld_Parms
		{
			UWorld* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDASReplicatedObject_GetWorld_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DASReplicatedObject_eventGetWorld_Parms, ReturnValue), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDASReplicatedObject_GetWorld_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDASReplicatedObject_GetWorld_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDASReplicatedObject_GetWorld_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Replication handling\n" },
#endif
		{ "ModuleRelativePath", "Public/DASReplicatedObject.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Replication handling" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDASReplicatedObject_GetWorld_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDASReplicatedObject, nullptr, "GetWorld", nullptr, nullptr, Z_Construct_UFunction_UDASReplicatedObject_GetWorld_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDASReplicatedObject_GetWorld_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDASReplicatedObject_GetWorld_Statics::DASReplicatedObject_eventGetWorld_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDASReplicatedObject_GetWorld_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDASReplicatedObject_GetWorld_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDASReplicatedObject_GetWorld_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UDASReplicatedObject_GetWorld_Statics::DASReplicatedObject_eventGetWorld_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UDASReplicatedObject_GetWorld()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDASReplicatedObject_GetWorld_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDASReplicatedObject);
	UClass* Z_Construct_UClass_UDASReplicatedObject_NoRegister()
	{
		return UDASReplicatedObject::StaticClass();
	}
	struct Z_Construct_UClass_UDASReplicatedObject_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDASReplicatedObject_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_DreamAbilitySystem,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDASReplicatedObject_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UDASReplicatedObject_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDASReplicatedObject_Destroy, "Destroy" }, // 1727345022
		{ &Z_Construct_UFunction_UDASReplicatedObject_GetOwningActor, "GetOwningActor" }, // 3218037344
		{ &Z_Construct_UFunction_UDASReplicatedObject_GetWorld, "GetWorld" }, // 1211599217
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDASReplicatedObject_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDASReplicatedObject_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "DASReplicatedObject.h" },
		{ "ModuleRelativePath", "Public/DASReplicatedObject.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDASReplicatedObject_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDASReplicatedObject>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDASReplicatedObject_Statics::ClassParams = {
		&UDASReplicatedObject::StaticClass,
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
		0x001000A1u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDASReplicatedObject_Statics::Class_MetaDataParams), Z_Construct_UClass_UDASReplicatedObject_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UDASReplicatedObject()
	{
		if (!Z_Registration_Info_UClass_UDASReplicatedObject.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDASReplicatedObject.OuterSingleton, Z_Construct_UClass_UDASReplicatedObject_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDASReplicatedObject.OuterSingleton;
	}
	template<> DREAMABILITYSYSTEM_API UClass* StaticClass<UDASReplicatedObject>()
	{
		return UDASReplicatedObject::StaticClass();
	}
	UDASReplicatedObject::UDASReplicatedObject(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDASReplicatedObject);
	UDASReplicatedObject::~UDASReplicatedObject() {}
	struct Z_CompiledInDeferFile_FID_Perforce_atrembl86_FalerhonLaptop_2080_20243_8INF960_DAS_AM_DAS_AM_Plugins_DreamAbilitySystem_Source_DreamAbilitySystem_Public_DASReplicatedObject_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Perforce_atrembl86_FalerhonLaptop_2080_20243_8INF960_DAS_AM_DAS_AM_Plugins_DreamAbilitySystem_Source_DreamAbilitySystem_Public_DASReplicatedObject_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDASReplicatedObject, UDASReplicatedObject::StaticClass, TEXT("UDASReplicatedObject"), &Z_Registration_Info_UClass_UDASReplicatedObject, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDASReplicatedObject), 64234810U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Perforce_atrembl86_FalerhonLaptop_2080_20243_8INF960_DAS_AM_DAS_AM_Plugins_DreamAbilitySystem_Source_DreamAbilitySystem_Public_DASReplicatedObject_h_403667021(TEXT("/Script/DreamAbilitySystem"),
		Z_CompiledInDeferFile_FID_Perforce_atrembl86_FalerhonLaptop_2080_20243_8INF960_DAS_AM_DAS_AM_Plugins_DreamAbilitySystem_Source_DreamAbilitySystem_Public_DASReplicatedObject_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Perforce_atrembl86_FalerhonLaptop_2080_20243_8INF960_DAS_AM_DAS_AM_Plugins_DreamAbilitySystem_Source_DreamAbilitySystem_Public_DASReplicatedObject_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
