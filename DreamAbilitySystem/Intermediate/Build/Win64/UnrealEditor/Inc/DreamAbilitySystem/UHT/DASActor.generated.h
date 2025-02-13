// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DASActor.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UDASAbilityController;
class UDASAttributesContainerComponent;
struct FGameplayTagContainer;
#ifdef DREAMABILITYSYSTEM_DASActor_generated_h
#error "DASActor.generated.h already included, missing '#pragma once' in DASActor.h"
#endif
#define DREAMABILITYSYSTEM_DASActor_generated_h

#define FID_Perforce_atrembl86_FalerhonLaptop_2080_20243_8INF960_DAS_AM_DAS_AM_Plugins_DreamAbilitySystem_Source_DreamAbilitySystem_Public_DASActor_h_14_SPARSE_DATA
#define FID_Perforce_atrembl86_FalerhonLaptop_2080_20243_8INF960_DAS_AM_DAS_AM_Plugins_DreamAbilitySystem_Source_DreamAbilitySystem_Public_DASActor_h_14_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Perforce_atrembl86_FalerhonLaptop_2080_20243_8INF960_DAS_AM_DAS_AM_Plugins_DreamAbilitySystem_Source_DreamAbilitySystem_Public_DASActor_h_14_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Perforce_atrembl86_FalerhonLaptop_2080_20243_8INF960_DAS_AM_DAS_AM_Plugins_DreamAbilitySystem_Source_DreamAbilitySystem_Public_DASActor_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetTagContainer); \
	DECLARE_FUNCTION(execGetAttributesContainer); \
	DECLARE_FUNCTION(execGetAbilityController);


#define FID_Perforce_atrembl86_FalerhonLaptop_2080_20243_8INF960_DAS_AM_DAS_AM_Plugins_DreamAbilitySystem_Source_DreamAbilitySystem_Public_DASActor_h_14_ACCESSORS
#define FID_Perforce_atrembl86_FalerhonLaptop_2080_20243_8INF960_DAS_AM_DAS_AM_Plugins_DreamAbilitySystem_Source_DreamAbilitySystem_Public_DASActor_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	DREAMABILITYSYSTEM_API UDASActor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	DREAMABILITYSYSTEM_API UDASActor(UDASActor&&); \
	DREAMABILITYSYSTEM_API UDASActor(const UDASActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(DREAMABILITYSYSTEM_API, UDASActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDASActor); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDASActor) \
	DREAMABILITYSYSTEM_API virtual ~UDASActor();


#define FID_Perforce_atrembl86_FalerhonLaptop_2080_20243_8INF960_DAS_AM_DAS_AM_Plugins_DreamAbilitySystem_Source_DreamAbilitySystem_Public_DASActor_h_14_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUDASActor(); \
	friend struct Z_Construct_UClass_UDASActor_Statics; \
public: \
	DECLARE_CLASS(UDASActor, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/DreamAbilitySystem"), DREAMABILITYSYSTEM_API) \
	DECLARE_SERIALIZER(UDASActor)


#define FID_Perforce_atrembl86_FalerhonLaptop_2080_20243_8INF960_DAS_AM_DAS_AM_Plugins_DreamAbilitySystem_Source_DreamAbilitySystem_Public_DASActor_h_14_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Perforce_atrembl86_FalerhonLaptop_2080_20243_8INF960_DAS_AM_DAS_AM_Plugins_DreamAbilitySystem_Source_DreamAbilitySystem_Public_DASActor_h_14_GENERATED_UINTERFACE_BODY() \
	FID_Perforce_atrembl86_FalerhonLaptop_2080_20243_8INF960_DAS_AM_DAS_AM_Plugins_DreamAbilitySystem_Source_DreamAbilitySystem_Public_DASActor_h_14_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Perforce_atrembl86_FalerhonLaptop_2080_20243_8INF960_DAS_AM_DAS_AM_Plugins_DreamAbilitySystem_Source_DreamAbilitySystem_Public_DASActor_h_14_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IDASActor() {} \
public: \
	typedef UDASActor UClassType; \
	typedef IDASActor ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Perforce_atrembl86_FalerhonLaptop_2080_20243_8INF960_DAS_AM_DAS_AM_Plugins_DreamAbilitySystem_Source_DreamAbilitySystem_Public_DASActor_h_11_PROLOG
#define FID_Perforce_atrembl86_FalerhonLaptop_2080_20243_8INF960_DAS_AM_DAS_AM_Plugins_DreamAbilitySystem_Source_DreamAbilitySystem_Public_DASActor_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Perforce_atrembl86_FalerhonLaptop_2080_20243_8INF960_DAS_AM_DAS_AM_Plugins_DreamAbilitySystem_Source_DreamAbilitySystem_Public_DASActor_h_14_SPARSE_DATA \
	FID_Perforce_atrembl86_FalerhonLaptop_2080_20243_8INF960_DAS_AM_DAS_AM_Plugins_DreamAbilitySystem_Source_DreamAbilitySystem_Public_DASActor_h_14_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Perforce_atrembl86_FalerhonLaptop_2080_20243_8INF960_DAS_AM_DAS_AM_Plugins_DreamAbilitySystem_Source_DreamAbilitySystem_Public_DASActor_h_14_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Perforce_atrembl86_FalerhonLaptop_2080_20243_8INF960_DAS_AM_DAS_AM_Plugins_DreamAbilitySystem_Source_DreamAbilitySystem_Public_DASActor_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Perforce_atrembl86_FalerhonLaptop_2080_20243_8INF960_DAS_AM_DAS_AM_Plugins_DreamAbilitySystem_Source_DreamAbilitySystem_Public_DASActor_h_14_ACCESSORS \
	FID_Perforce_atrembl86_FalerhonLaptop_2080_20243_8INF960_DAS_AM_DAS_AM_Plugins_DreamAbilitySystem_Source_DreamAbilitySystem_Public_DASActor_h_14_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DREAMABILITYSYSTEM_API UClass* StaticClass<class UDASActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Perforce_atrembl86_FalerhonLaptop_2080_20243_8INF960_DAS_AM_DAS_AM_Plugins_DreamAbilitySystem_Source_DreamAbilitySystem_Public_DASActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
