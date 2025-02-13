// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Abilities/DASAbility.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FGameplayTag;
#ifdef DREAMABILITYSYSTEM_DASAbility_generated_h
#error "DASAbility.generated.h already included, missing '#pragma once' in DASAbility.h"
#endif
#define DREAMABILITYSYSTEM_DASAbility_generated_h

#define FID_Perforce_atrembl86_FalerhonLaptop_2080_20243_8INF960_DAS_AM_DAS_AM_Plugins_DreamAbilitySystem_Source_DreamAbilitySystem_Public_Abilities_DASAbility_h_20_SPARSE_DATA
#define FID_Perforce_atrembl86_FalerhonLaptop_2080_20243_8INF960_DAS_AM_DAS_AM_Plugins_DreamAbilitySystem_Source_DreamAbilitySystem_Public_Abilities_DASAbility_h_20_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Perforce_atrembl86_FalerhonLaptop_2080_20243_8INF960_DAS_AM_DAS_AM_Plugins_DreamAbilitySystem_Source_DreamAbilitySystem_Public_Abilities_DASAbility_h_20_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Perforce_atrembl86_FalerhonLaptop_2080_20243_8INF960_DAS_AM_DAS_AM_Plugins_DreamAbilitySystem_Source_DreamAbilitySystem_Public_Abilities_DASAbility_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void ServerNotifyComplete_ServerRPC_Implementation(); \
	virtual void ServerNotifyCancel_ServerRPC_Implementation(); \
	virtual void ServerNotifyTrigger_ServerRPC_Implementation(); \
	virtual void FeedbackComplete_MulticastRPC_Implementation(); \
	virtual void FeedbackCancel_MulticastRPC_Implementation(); \
	virtual void FeedbackTrigger_MulticastRPC_Implementation(); \
	virtual bool CanCancel_Implementation(); \
	virtual bool IsAllowed_Implementation(); \
	virtual bool IsBlocked_Implementation(); \
	virtual void ServerEffectCancel_Implementation(); \
	virtual void FeedbackCancel_Implementation(); \
	virtual void Cancel_Implementation(); \
	virtual void ServerEffectComplete_Implementation(); \
	virtual void FeedbackComplete_Implementation(); \
	virtual void Complete_Implementation(); \
	virtual void ServerEffectTrigger_Implementation(); \
	virtual void FeedbackTrigger_Implementation(); \
	virtual void Trigger_Implementation(); \
	virtual FGameplayTag GetFallback_Implementation(); \
 \
	DECLARE_FUNCTION(execServerNotifyComplete_ServerRPC); \
	DECLARE_FUNCTION(execServerNotifyCancel_ServerRPC); \
	DECLARE_FUNCTION(execServerNotifyTrigger_ServerRPC); \
	DECLARE_FUNCTION(execFeedbackComplete_MulticastRPC); \
	DECLARE_FUNCTION(execFeedbackCancel_MulticastRPC); \
	DECLARE_FUNCTION(execFeedbackTrigger_MulticastRPC); \
	DECLARE_FUNCTION(execCanCancel); \
	DECLARE_FUNCTION(execIsAllowed); \
	DECLARE_FUNCTION(execIsBlocked); \
	DECLARE_FUNCTION(execServerEffectCancel); \
	DECLARE_FUNCTION(execFeedbackCancel); \
	DECLARE_FUNCTION(execCancel); \
	DECLARE_FUNCTION(execServerEffectComplete); \
	DECLARE_FUNCTION(execFeedbackComplete); \
	DECLARE_FUNCTION(execComplete); \
	DECLARE_FUNCTION(execServerEffectTrigger); \
	DECLARE_FUNCTION(execFeedbackTrigger); \
	DECLARE_FUNCTION(execTrigger); \
	DECLARE_FUNCTION(execGetFallback);


#define FID_Perforce_atrembl86_FalerhonLaptop_2080_20243_8INF960_DAS_AM_DAS_AM_Plugins_DreamAbilitySystem_Source_DreamAbilitySystem_Public_Abilities_DASAbility_h_20_ACCESSORS
#define FID_Perforce_atrembl86_FalerhonLaptop_2080_20243_8INF960_DAS_AM_DAS_AM_Plugins_DreamAbilitySystem_Source_DreamAbilitySystem_Public_Abilities_DASAbility_h_20_CALLBACK_WRAPPERS
#define FID_Perforce_atrembl86_FalerhonLaptop_2080_20243_8INF960_DAS_AM_DAS_AM_Plugins_DreamAbilitySystem_Source_DreamAbilitySystem_Public_Abilities_DASAbility_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDASAbility(); \
	friend struct Z_Construct_UClass_UDASAbility_Statics; \
public: \
	DECLARE_CLASS(UDASAbility, UDASReplicatedObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/DreamAbilitySystem"), NO_API) \
	DECLARE_SERIALIZER(UDASAbility)


#define FID_Perforce_atrembl86_FalerhonLaptop_2080_20243_8INF960_DAS_AM_DAS_AM_Plugins_DreamAbilitySystem_Source_DreamAbilitySystem_Public_Abilities_DASAbility_h_20_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDASAbility(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDASAbility(UDASAbility&&); \
	NO_API UDASAbility(const UDASAbility&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDASAbility); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDASAbility); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDASAbility) \
	NO_API virtual ~UDASAbility();


#define FID_Perforce_atrembl86_FalerhonLaptop_2080_20243_8INF960_DAS_AM_DAS_AM_Plugins_DreamAbilitySystem_Source_DreamAbilitySystem_Public_Abilities_DASAbility_h_17_PROLOG
#define FID_Perforce_atrembl86_FalerhonLaptop_2080_20243_8INF960_DAS_AM_DAS_AM_Plugins_DreamAbilitySystem_Source_DreamAbilitySystem_Public_Abilities_DASAbility_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Perforce_atrembl86_FalerhonLaptop_2080_20243_8INF960_DAS_AM_DAS_AM_Plugins_DreamAbilitySystem_Source_DreamAbilitySystem_Public_Abilities_DASAbility_h_20_SPARSE_DATA \
	FID_Perforce_atrembl86_FalerhonLaptop_2080_20243_8INF960_DAS_AM_DAS_AM_Plugins_DreamAbilitySystem_Source_DreamAbilitySystem_Public_Abilities_DASAbility_h_20_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Perforce_atrembl86_FalerhonLaptop_2080_20243_8INF960_DAS_AM_DAS_AM_Plugins_DreamAbilitySystem_Source_DreamAbilitySystem_Public_Abilities_DASAbility_h_20_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Perforce_atrembl86_FalerhonLaptop_2080_20243_8INF960_DAS_AM_DAS_AM_Plugins_DreamAbilitySystem_Source_DreamAbilitySystem_Public_Abilities_DASAbility_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Perforce_atrembl86_FalerhonLaptop_2080_20243_8INF960_DAS_AM_DAS_AM_Plugins_DreamAbilitySystem_Source_DreamAbilitySystem_Public_Abilities_DASAbility_h_20_ACCESSORS \
	FID_Perforce_atrembl86_FalerhonLaptop_2080_20243_8INF960_DAS_AM_DAS_AM_Plugins_DreamAbilitySystem_Source_DreamAbilitySystem_Public_Abilities_DASAbility_h_20_CALLBACK_WRAPPERS \
	FID_Perforce_atrembl86_FalerhonLaptop_2080_20243_8INF960_DAS_AM_DAS_AM_Plugins_DreamAbilitySystem_Source_DreamAbilitySystem_Public_Abilities_DASAbility_h_20_INCLASS_NO_PURE_DECLS \
	FID_Perforce_atrembl86_FalerhonLaptop_2080_20243_8INF960_DAS_AM_DAS_AM_Plugins_DreamAbilitySystem_Source_DreamAbilitySystem_Public_Abilities_DASAbility_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DREAMABILITYSYSTEM_API UClass* StaticClass<class UDASAbility>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Perforce_atrembl86_FalerhonLaptop_2080_20243_8INF960_DAS_AM_DAS_AM_Plugins_DreamAbilitySystem_Source_DreamAbilitySystem_Public_Abilities_DASAbility_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
