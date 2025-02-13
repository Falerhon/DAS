// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Abilities/DASAbilityController.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UDASAbility;
struct FGameplayTag;
#ifdef DREAMABILITYSYSTEM_DASAbilityController_generated_h
#error "DASAbilityController.generated.h already included, missing '#pragma once' in DASAbilityController.h"
#endif
#define DREAMABILITYSYSTEM_DASAbilityController_generated_h

#define FID_Perforce_atrembl86_FalerhonLaptop_2080_20243_8INF960_DAS_AM_DAS_AM_Plugins_DreamAbilitySystem_Source_DreamAbilitySystem_Public_Abilities_DASAbilityController_h_16_SPARSE_DATA
#define FID_Perforce_atrembl86_FalerhonLaptop_2080_20243_8INF960_DAS_AM_DAS_AM_Plugins_DreamAbilitySystem_Source_DreamAbilitySystem_Public_Abilities_DASAbilityController_h_16_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Perforce_atrembl86_FalerhonLaptop_2080_20243_8INF960_DAS_AM_DAS_AM_Plugins_DreamAbilitySystem_Source_DreamAbilitySystem_Public_Abilities_DASAbilityController_h_16_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Perforce_atrembl86_FalerhonLaptop_2080_20243_8INF960_DAS_AM_DAS_AM_Plugins_DreamAbilitySystem_Source_DreamAbilitySystem_Public_Abilities_DASAbilityController_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCancelAbilityChildren); \
	DECLARE_FUNCTION(execCancelAbility); \
	DECLARE_FUNCTION(execRemoveActiveAbility); \
	DECLARE_FUNCTION(execCancelAbilities); \
	DECLARE_FUNCTION(execTriggerAbility); \
	DECLARE_FUNCTION(execOnRep_ReplicatedAbilitiesRefArray); \
	DECLARE_FUNCTION(execOnRep_ReplicatedAbilitiesTagsArray);


#define FID_Perforce_atrembl86_FalerhonLaptop_2080_20243_8INF960_DAS_AM_DAS_AM_Plugins_DreamAbilitySystem_Source_DreamAbilitySystem_Public_Abilities_DASAbilityController_h_16_ACCESSORS
#define FID_Perforce_atrembl86_FalerhonLaptop_2080_20243_8INF960_DAS_AM_DAS_AM_Plugins_DreamAbilitySystem_Source_DreamAbilitySystem_Public_Abilities_DASAbilityController_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDASAbilityController(); \
	friend struct Z_Construct_UClass_UDASAbilityController_Statics; \
public: \
	DECLARE_CLASS(UDASAbilityController, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DreamAbilitySystem"), NO_API) \
	DECLARE_SERIALIZER(UDASAbilityController) \
	NO_API void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		ReplicatedAbilitiesTagsArray=NETFIELD_REP_START, \
		ReplicatedAbilitiesRefArray, \
		NETFIELD_REP_END=ReplicatedAbilitiesRefArray	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_Perforce_atrembl86_FalerhonLaptop_2080_20243_8INF960_DAS_AM_DAS_AM_Plugins_DreamAbilitySystem_Source_DreamAbilitySystem_Public_Abilities_DASAbilityController_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDASAbilityController(UDASAbilityController&&); \
	NO_API UDASAbilityController(const UDASAbilityController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDASAbilityController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDASAbilityController); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UDASAbilityController) \
	NO_API virtual ~UDASAbilityController();


#define FID_Perforce_atrembl86_FalerhonLaptop_2080_20243_8INF960_DAS_AM_DAS_AM_Plugins_DreamAbilitySystem_Source_DreamAbilitySystem_Public_Abilities_DASAbilityController_h_13_PROLOG
#define FID_Perforce_atrembl86_FalerhonLaptop_2080_20243_8INF960_DAS_AM_DAS_AM_Plugins_DreamAbilitySystem_Source_DreamAbilitySystem_Public_Abilities_DASAbilityController_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Perforce_atrembl86_FalerhonLaptop_2080_20243_8INF960_DAS_AM_DAS_AM_Plugins_DreamAbilitySystem_Source_DreamAbilitySystem_Public_Abilities_DASAbilityController_h_16_SPARSE_DATA \
	FID_Perforce_atrembl86_FalerhonLaptop_2080_20243_8INF960_DAS_AM_DAS_AM_Plugins_DreamAbilitySystem_Source_DreamAbilitySystem_Public_Abilities_DASAbilityController_h_16_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Perforce_atrembl86_FalerhonLaptop_2080_20243_8INF960_DAS_AM_DAS_AM_Plugins_DreamAbilitySystem_Source_DreamAbilitySystem_Public_Abilities_DASAbilityController_h_16_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Perforce_atrembl86_FalerhonLaptop_2080_20243_8INF960_DAS_AM_DAS_AM_Plugins_DreamAbilitySystem_Source_DreamAbilitySystem_Public_Abilities_DASAbilityController_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Perforce_atrembl86_FalerhonLaptop_2080_20243_8INF960_DAS_AM_DAS_AM_Plugins_DreamAbilitySystem_Source_DreamAbilitySystem_Public_Abilities_DASAbilityController_h_16_ACCESSORS \
	FID_Perforce_atrembl86_FalerhonLaptop_2080_20243_8INF960_DAS_AM_DAS_AM_Plugins_DreamAbilitySystem_Source_DreamAbilitySystem_Public_Abilities_DASAbilityController_h_16_INCLASS_NO_PURE_DECLS \
	FID_Perforce_atrembl86_FalerhonLaptop_2080_20243_8INF960_DAS_AM_DAS_AM_Plugins_DreamAbilitySystem_Source_DreamAbilitySystem_Public_Abilities_DASAbilityController_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DREAMABILITYSYSTEM_API UClass* StaticClass<class UDASAbilityController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Perforce_atrembl86_FalerhonLaptop_2080_20243_8INF960_DAS_AM_DAS_AM_Plugins_DreamAbilitySystem_Source_DreamAbilitySystem_Public_Abilities_DASAbilityController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
