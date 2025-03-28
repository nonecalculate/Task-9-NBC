// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DarkandDarker_StatusBPLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FCalculatedStats;
struct FCharacterStats;
#ifdef DARKANDDARKER_STATUS_DarkandDarker_StatusBPLibrary_generated_h
#error "DarkandDarker_StatusBPLibrary.generated.h already included, missing '#pragma once' in DarkandDarker_StatusBPLibrary.h"
#endif
#define DARKANDDARKER_STATUS_DarkandDarker_StatusBPLibrary_generated_h

#define FID_ProjectUnreal_NetWork_Source_NetWork_BChat_DarkandDarker_Status_HostProject_Plugins_DarkandDarker_Status_Source_DarkandDarker_Status_Public_DarkandDarker_StatusBPLibrary_h_29_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCharacterStats_Statics; \
	DARKANDDARKER_STATUS_API static class UScriptStruct* StaticStruct();


template<> DARKANDDARKER_STATUS_API UScriptStruct* StaticStruct<struct FCharacterStats>();

#define FID_ProjectUnreal_NetWork_Source_NetWork_BChat_DarkandDarker_Status_HostProject_Plugins_DarkandDarker_Status_Source_DarkandDarker_Status_Public_DarkandDarker_StatusBPLibrary_h_56_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCalculatedStats_Statics; \
	DARKANDDARKER_STATUS_API static class UScriptStruct* StaticStruct();


template<> DARKANDDARKER_STATUS_API UScriptStruct* StaticStruct<struct FCalculatedStats>();

#define FID_ProjectUnreal_NetWork_Source_NetWork_BChat_DarkandDarker_Status_HostProject_Plugins_DarkandDarker_Status_Source_DarkandDarker_Status_Public_DarkandDarker_StatusBPLibrary_h_90_RPC_WRAPPERS \
	DECLARE_FUNCTION(execCalculateFinalStats); \
	DECLARE_FUNCTION(execCalculateSkillCooldown); \
	DECLARE_FUNCTION(execCalculateSpellRecoverySpeed); \
	DECLARE_FUNCTION(execCalculateSpellCastSpeed); \
	DECLARE_FUNCTION(execCalculateSpellPower); \
	DECLARE_FUNCTION(execCalculateBuffDuration); \
	DECLARE_FUNCTION(execCalculateInteractionSpeed); \
	DECLARE_FUNCTION(execCalculateMoveSpeed); \
	DECLARE_FUNCTION(execCalculateAttackPower); \
	DECLARE_FUNCTION(execCalculateMaxHealth);


#define FID_ProjectUnreal_NetWork_Source_NetWork_BChat_DarkandDarker_Status_HostProject_Plugins_DarkandDarker_Status_Source_DarkandDarker_Status_Public_DarkandDarker_StatusBPLibrary_h_90_INCLASS \
private: \
	static void StaticRegisterNativesUDarkandDarker_StatusBPLibrary(); \
	friend struct Z_Construct_UClass_UDarkandDarker_StatusBPLibrary_Statics; \
public: \
	DECLARE_CLASS(UDarkandDarker_StatusBPLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DarkandDarker_Status"), NO_API) \
	DECLARE_SERIALIZER(UDarkandDarker_StatusBPLibrary)


#define FID_ProjectUnreal_NetWork_Source_NetWork_BChat_DarkandDarker_Status_HostProject_Plugins_DarkandDarker_Status_Source_DarkandDarker_Status_Public_DarkandDarker_StatusBPLibrary_h_90_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDarkandDarker_StatusBPLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDarkandDarker_StatusBPLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDarkandDarker_StatusBPLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDarkandDarker_StatusBPLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UDarkandDarker_StatusBPLibrary(UDarkandDarker_StatusBPLibrary&&); \
	UDarkandDarker_StatusBPLibrary(const UDarkandDarker_StatusBPLibrary&); \
public: \
	NO_API virtual ~UDarkandDarker_StatusBPLibrary();


#define FID_ProjectUnreal_NetWork_Source_NetWork_BChat_DarkandDarker_Status_HostProject_Plugins_DarkandDarker_Status_Source_DarkandDarker_Status_Public_DarkandDarker_StatusBPLibrary_h_87_PROLOG
#define FID_ProjectUnreal_NetWork_Source_NetWork_BChat_DarkandDarker_Status_HostProject_Plugins_DarkandDarker_Status_Source_DarkandDarker_Status_Public_DarkandDarker_StatusBPLibrary_h_90_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ProjectUnreal_NetWork_Source_NetWork_BChat_DarkandDarker_Status_HostProject_Plugins_DarkandDarker_Status_Source_DarkandDarker_Status_Public_DarkandDarker_StatusBPLibrary_h_90_RPC_WRAPPERS \
	FID_ProjectUnreal_NetWork_Source_NetWork_BChat_DarkandDarker_Status_HostProject_Plugins_DarkandDarker_Status_Source_DarkandDarker_Status_Public_DarkandDarker_StatusBPLibrary_h_90_INCLASS \
	FID_ProjectUnreal_NetWork_Source_NetWork_BChat_DarkandDarker_Status_HostProject_Plugins_DarkandDarker_Status_Source_DarkandDarker_Status_Public_DarkandDarker_StatusBPLibrary_h_90_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DARKANDDARKER_STATUS_API UClass* StaticClass<class UDarkandDarker_StatusBPLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ProjectUnreal_NetWork_Source_NetWork_BChat_DarkandDarker_Status_HostProject_Plugins_DarkandDarker_Status_Source_DarkandDarker_Status_Public_DarkandDarker_StatusBPLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
