// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DreamAbilitySystem/Public/DASActor.h"
#include "GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDASActor() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	DREAMABILITYSYSTEM_API UClass* Z_Construct_UClass_UDASAbilityController_NoRegister();
	DREAMABILITYSYSTEM_API UClass* Z_Construct_UClass_UDASActor();
	DREAMABILITYSYSTEM_API UClass* Z_Construct_UClass_UDASActor_NoRegister();
	DREAMABILITYSYSTEM_API UClass* Z_Construct_UClass_UDASAttributesContainerComponent_NoRegister();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
	UPackage* Z_Construct_UPackage__Script_DreamAbilitySystem();
// End Cross Module References
	DEFINE_FUNCTION(IDASActor::execGetTagContainer)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FGameplayTagContainer*)Z_Param__Result=P_THIS->GetTagContainer();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IDASActor::execGetAttributesContainer)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDASAttributesContainerComponent**)Z_Param__Result=P_THIS->GetAttributesContainer();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IDASActor::execGetAbilityController)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDASAbilityController**)Z_Param__Result=P_THIS->GetAbilityController();
		P_NATIVE_END;
	}
	void UDASActor::StaticRegisterNativesUDASActor()
	{
		UClass* Class = UDASActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAbilityController", &IDASActor::execGetAbilityController },
			{ "GetAttributesContainer", &IDASActor::execGetAttributesContainer },
			{ "GetTagContainer", &IDASActor::execGetTagContainer },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDASActor_GetAbilityController_Statics
	{
		struct DASActor_eventGetAbilityController_Parms
		{
			UDASAbilityController* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDASActor_GetAbilityController_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDASActor_GetAbilityController_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DASActor_eventGetAbilityController_Parms, ReturnValue), Z_Construct_UClass_UDASAbilityController_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDASActor_GetAbilityController_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_UDASActor_GetAbilityController_Statics::NewProp_ReturnValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDASActor_GetAbilityController_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDASActor_GetAbilityController_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDASActor_GetAbilityController_Statics::Function_MetaDataParams[] = {
		{ "Category", "DasActor" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Add interface functions to this class. This is the class that will be inherited to implement this interface.\n" },
#endif
		{ "ModuleRelativePath", "Public/DASActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Add interface functions to this class. This is the class that will be inherited to implement this interface." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDASActor_GetAbilityController_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDASActor, nullptr, "GetAbilityController", nullptr, nullptr, Z_Construct_UFunction_UDASActor_GetAbilityController_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDASActor_GetAbilityController_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDASActor_GetAbilityController_Statics::DASActor_eventGetAbilityController_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDASActor_GetAbilityController_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDASActor_GetAbilityController_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDASActor_GetAbilityController_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UDASActor_GetAbilityController_Statics::DASActor_eventGetAbilityController_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UDASActor_GetAbilityController()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDASActor_GetAbilityController_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDASActor_GetAttributesContainer_Statics
	{
		struct DASActor_eventGetAttributesContainer_Parms
		{
			UDASAttributesContainerComponent* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDASActor_GetAttributesContainer_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDASActor_GetAttributesContainer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DASActor_eventGetAttributesContainer_Parms, ReturnValue), Z_Construct_UClass_UDASAttributesContainerComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDASActor_GetAttributesContainer_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_UDASActor_GetAttributesContainer_Statics::NewProp_ReturnValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDASActor_GetAttributesContainer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDASActor_GetAttributesContainer_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDASActor_GetAttributesContainer_Statics::Function_MetaDataParams[] = {
		{ "Category", "DasActor" },
		{ "ModuleRelativePath", "Public/DASActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDASActor_GetAttributesContainer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDASActor, nullptr, "GetAttributesContainer", nullptr, nullptr, Z_Construct_UFunction_UDASActor_GetAttributesContainer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDASActor_GetAttributesContainer_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDASActor_GetAttributesContainer_Statics::DASActor_eventGetAttributesContainer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDASActor_GetAttributesContainer_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDASActor_GetAttributesContainer_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDASActor_GetAttributesContainer_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UDASActor_GetAttributesContainer_Statics::DASActor_eventGetAttributesContainer_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UDASActor_GetAttributesContainer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDASActor_GetAttributesContainer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDASActor_GetTagContainer_Statics
	{
		struct DASActor_eventGetTagContainer_Parms
		{
			FGameplayTagContainer ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDASActor_GetTagContainer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DASActor_eventGetTagContainer_Parms, ReturnValue), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(0, nullptr) }; // 405371792
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDASActor_GetTagContainer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDASActor_GetTagContainer_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDASActor_GetTagContainer_Statics::Function_MetaDataParams[] = {
		{ "Category", "DasActor" },
		{ "ModuleRelativePath", "Public/DASActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDASActor_GetTagContainer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDASActor, nullptr, "GetTagContainer", nullptr, nullptr, Z_Construct_UFunction_UDASActor_GetTagContainer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDASActor_GetTagContainer_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDASActor_GetTagContainer_Statics::DASActor_eventGetTagContainer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDASActor_GetTagContainer_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDASActor_GetTagContainer_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDASActor_GetTagContainer_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UDASActor_GetTagContainer_Statics::DASActor_eventGetTagContainer_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UDASActor_GetTagContainer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDASActor_GetTagContainer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDASActor);
	UClass* Z_Construct_UClass_UDASActor_NoRegister()
	{
		return UDASActor::StaticClass();
	}
	struct Z_Construct_UClass_UDASActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDASActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_DreamAbilitySystem,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDASActor_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UDASActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDASActor_GetAbilityController, "GetAbilityController" }, // 1852791997
		{ &Z_Construct_UFunction_UDASActor_GetAttributesContainer, "GetAttributesContainer" }, // 2131332431
		{ &Z_Construct_UFunction_UDASActor_GetTagContainer, "GetTagContainer" }, // 3642202840
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDASActor_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDASActor_Statics::Class_MetaDataParams[] = {
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Public/DASActor.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDASActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IDASActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDASActor_Statics::ClassParams = {
		&UDASActor::StaticClass,
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
		0x000840A1u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDASActor_Statics::Class_MetaDataParams), Z_Construct_UClass_UDASActor_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UDASActor()
	{
		if (!Z_Registration_Info_UClass_UDASActor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDASActor.OuterSingleton, Z_Construct_UClass_UDASActor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDASActor.OuterSingleton;
	}
	template<> DREAMABILITYSYSTEM_API UClass* StaticClass<UDASActor>()
	{
		return UDASActor::StaticClass();
	}
	UDASActor::UDASActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDASActor);
	UDASActor::~UDASActor() {}
	struct Z_CompiledInDeferFile_FID_Perforce_atrembl86_FalerhonLaptop_2080_20243_8INF960_DAS_AM_DAS_AM_Plugins_DreamAbilitySystem_Source_DreamAbilitySystem_Public_DASActor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Perforce_atrembl86_FalerhonLaptop_2080_20243_8INF960_DAS_AM_DAS_AM_Plugins_DreamAbilitySystem_Source_DreamAbilitySystem_Public_DASActor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDASActor, UDASActor::StaticClass, TEXT("UDASActor"), &Z_Registration_Info_UClass_UDASActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDASActor), 1153185408U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Perforce_atrembl86_FalerhonLaptop_2080_20243_8INF960_DAS_AM_DAS_AM_Plugins_DreamAbilitySystem_Source_DreamAbilitySystem_Public_DASActor_h_3377526834(TEXT("/Script/DreamAbilitySystem"),
		Z_CompiledInDeferFile_FID_Perforce_atrembl86_FalerhonLaptop_2080_20243_8INF960_DAS_AM_DAS_AM_Plugins_DreamAbilitySystem_Source_DreamAbilitySystem_Public_DASActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Perforce_atrembl86_FalerhonLaptop_2080_20243_8INF960_DAS_AM_DAS_AM_Plugins_DreamAbilitySystem_Source_DreamAbilitySystem_Public_DASActor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
