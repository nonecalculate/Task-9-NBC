// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DarkandDarker_Status/Public/DarkandDarker_StatusBPLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDarkandDarker_StatusBPLibrary() {}

// Begin Cross Module References
DARKANDDARKER_STATUS_API UClass* Z_Construct_UClass_UDarkandDarker_StatusBPLibrary();
DARKANDDARKER_STATUS_API UClass* Z_Construct_UClass_UDarkandDarker_StatusBPLibrary_NoRegister();
DARKANDDARKER_STATUS_API UScriptStruct* Z_Construct_UScriptStruct_FCalculatedStats();
DARKANDDARKER_STATUS_API UScriptStruct* Z_Construct_UScriptStruct_FCharacterStats();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
UPackage* Z_Construct_UPackage__Script_DarkandDarker_Status();
// End Cross Module References

// Begin ScriptStruct FCharacterStats
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CharacterStats;
class UScriptStruct* FCharacterStats::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CharacterStats.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CharacterStats.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCharacterStats, (UObject*)Z_Construct_UPackage__Script_DarkandDarker_Status(), TEXT("CharacterStats"));
	}
	return Z_Registration_Info_UScriptStruct_CharacterStats.OuterSingleton;
}
template<> DARKANDDARKER_STATUS_API UScriptStruct* StaticStruct<FCharacterStats>()
{
	return FCharacterStats::StaticStruct();
}
struct Z_Construct_UScriptStruct_FCharacterStats_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/* \n*\x09""Function library class.\n*\x09""Each function in it is expected to be static and represents blueprint node that can be called in any blueprint.\n*\n*\x09When declaring function you can define metadata for the node. Key function specifiers will be BlueprintPure and BlueprintCallable.\n*\x09""BlueprintPure - means the function does not affect the owning object in any way and thus creates a node without Exec pins.\n*\x09""BlueprintCallable - makes a function which can be executed in Blueprints - Thus it has Exec pins.\n*\x09""DisplayName - full name of the node, shown when you mouse over the node and in the blueprint drop down menu.\n*\x09\x09\x09\x09Its lets you name the node using characters not allowed in C++ function names.\n*\x09""CompactNodeTitle - the word(s) that appear on the node.\n*\x09Keywords -\x09the list of keywords that helps you to find node when you search for it using Blueprint drop-down menu. \n*\x09\x09\x09\x09Good example is \"Print String\" node which you can find also by using keyword \"log\".\n*\x09""Category -\x09the category your node will be under in the Blueprint drop-down menu.\n*\n*\x09""For more info on custom blueprint nodes visit documentation:\n*\x09https://wiki.unrealengine.com/Custom_Blueprint_Node_Creation\n*/" },
		{ "ModuleRelativePath", "Public/DarkandDarker_StatusBPLibrary.h" },
		{ "ToolTip", "*      Function library class.\n*      Each function in it is expected to be static and represents blueprint node that can be called in any blueprint.\n*\n*      When declaring function you can define metadata for the node. Key function specifiers will be BlueprintPure and BlueprintCallable.\n*      BlueprintPure - means the function does not affect the owning object in any way and thus creates a node without Exec pins.\n*      BlueprintCallable - makes a function which can be executed in Blueprints - Thus it has Exec pins.\n*      DisplayName - full name of the node, shown when you mouse over the node and in the blueprint drop down menu.\n*                              Its lets you name the node using characters not allowed in C++ function names.\n*      CompactNodeTitle - the word(s) that appear on the node.\n*      Keywords -      the list of keywords that helps you to find node when you search for it using Blueprint drop-down menu.\n*                              Good example is \"Print String\" node which you can find also by using keyword \"log\".\n*      Category -      the category your node will be under in the Blueprint drop-down menu.\n*\n*      For more info on custom blueprint nodes visit documentation:\n*      https://wiki.unrealengine.com/Custom_Blueprint_Node_Creation" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Strength_MetaData[] = {
		{ "Category", "Stats" },
		{ "ModuleRelativePath", "Public/DarkandDarker_StatusBPLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Vigor_MetaData[] = {
		{ "Category", "Stats" },
		{ "ModuleRelativePath", "Public/DarkandDarker_StatusBPLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Agility_MetaData[] = {
		{ "Category", "Stats" },
		{ "ModuleRelativePath", "Public/DarkandDarker_StatusBPLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Dexterity_MetaData[] = {
		{ "Category", "Stats" },
		{ "ModuleRelativePath", "Public/DarkandDarker_StatusBPLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Will_MetaData[] = {
		{ "Category", "Stats" },
		{ "ModuleRelativePath", "Public/DarkandDarker_StatusBPLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Knowledge_MetaData[] = {
		{ "Category", "Stats" },
		{ "ModuleRelativePath", "Public/DarkandDarker_StatusBPLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Resourcefulness_MetaData[] = {
		{ "Category", "Stats" },
		{ "ModuleRelativePath", "Public/DarkandDarker_StatusBPLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Strength;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Vigor;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Agility;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Dexterity;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Will;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Knowledge;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Resourcefulness;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCharacterStats>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCharacterStats_Statics::NewProp_Strength = { "Strength", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCharacterStats, Strength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Strength_MetaData), NewProp_Strength_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCharacterStats_Statics::NewProp_Vigor = { "Vigor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCharacterStats, Vigor), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Vigor_MetaData), NewProp_Vigor_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCharacterStats_Statics::NewProp_Agility = { "Agility", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCharacterStats, Agility), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Agility_MetaData), NewProp_Agility_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCharacterStats_Statics::NewProp_Dexterity = { "Dexterity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCharacterStats, Dexterity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Dexterity_MetaData), NewProp_Dexterity_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCharacterStats_Statics::NewProp_Will = { "Will", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCharacterStats, Will), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Will_MetaData), NewProp_Will_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCharacterStats_Statics::NewProp_Knowledge = { "Knowledge", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCharacterStats, Knowledge), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Knowledge_MetaData), NewProp_Knowledge_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCharacterStats_Statics::NewProp_Resourcefulness = { "Resourcefulness", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCharacterStats, Resourcefulness), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Resourcefulness_MetaData), NewProp_Resourcefulness_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCharacterStats_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterStats_Statics::NewProp_Strength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterStats_Statics::NewProp_Vigor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterStats_Statics::NewProp_Agility,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterStats_Statics::NewProp_Dexterity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterStats_Statics::NewProp_Will,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterStats_Statics::NewProp_Knowledge,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterStats_Statics::NewProp_Resourcefulness,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterStats_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCharacterStats_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_DarkandDarker_Status,
	nullptr,
	&NewStructOps,
	"CharacterStats",
	Z_Construct_UScriptStruct_FCharacterStats_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterStats_Statics::PropPointers),
	sizeof(FCharacterStats),
	alignof(FCharacterStats),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterStats_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCharacterStats_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCharacterStats()
{
	if (!Z_Registration_Info_UScriptStruct_CharacterStats.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CharacterStats.InnerSingleton, Z_Construct_UScriptStruct_FCharacterStats_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_CharacterStats.InnerSingleton;
}
// End ScriptStruct FCharacterStats

// Begin ScriptStruct FCalculatedStats
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CalculatedStats;
class UScriptStruct* FCalculatedStats::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CalculatedStats.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CalculatedStats.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCalculatedStats, (UObject*)Z_Construct_UPackage__Script_DarkandDarker_Status(), TEXT("CalculatedStats"));
	}
	return Z_Registration_Info_UScriptStruct_CalculatedStats.OuterSingleton;
}
template<> DARKANDDARKER_STATUS_API UScriptStruct* StaticStruct<FCalculatedStats>()
{
	return FCalculatedStats::StaticStruct();
}
struct Z_Construct_UScriptStruct_FCalculatedStats_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/DarkandDarker_StatusBPLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxHealth_MetaData[] = {
		{ "Category", "Calculated Stats" },
		{ "ModuleRelativePath", "Public/DarkandDarker_StatusBPLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttackPower_MetaData[] = {
		{ "Category", "Calculated Stats" },
		{ "ModuleRelativePath", "Public/DarkandDarker_StatusBPLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MoveSpeed_MetaData[] = {
		{ "Category", "Calculated Stats" },
		{ "ModuleRelativePath", "Public/DarkandDarker_StatusBPLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InteractionSpeed_MetaData[] = {
		{ "Category", "Calculated Stats" },
		{ "ModuleRelativePath", "Public/DarkandDarker_StatusBPLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BuffDuration_MetaData[] = {
		{ "Category", "Calculated Stats" },
		{ "ModuleRelativePath", "Public/DarkandDarker_StatusBPLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpellPower_MetaData[] = {
		{ "Category", "Calculated Stats" },
		{ "ModuleRelativePath", "Public/DarkandDarker_StatusBPLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpellCastSpeed_MetaData[] = {
		{ "Category", "Calculated Stats" },
		{ "ModuleRelativePath", "Public/DarkandDarker_StatusBPLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpellRecoverySpeed_MetaData[] = {
		{ "Category", "Calculated Stats" },
		{ "ModuleRelativePath", "Public/DarkandDarker_StatusBPLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SkillCooldown_MetaData[] = {
		{ "Category", "Calculated Stats" },
		{ "ModuleRelativePath", "Public/DarkandDarker_StatusBPLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxHealth;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AttackPower;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MoveSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InteractionSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BuffDuration;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SpellPower;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SpellCastSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SpellRecoverySpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SkillCooldown;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCalculatedStats>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCalculatedStats_Statics::NewProp_MaxHealth = { "MaxHealth", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCalculatedStats, MaxHealth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxHealth_MetaData), NewProp_MaxHealth_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCalculatedStats_Statics::NewProp_AttackPower = { "AttackPower", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCalculatedStats, AttackPower), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttackPower_MetaData), NewProp_AttackPower_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCalculatedStats_Statics::NewProp_MoveSpeed = { "MoveSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCalculatedStats, MoveSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MoveSpeed_MetaData), NewProp_MoveSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCalculatedStats_Statics::NewProp_InteractionSpeed = { "InteractionSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCalculatedStats, InteractionSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InteractionSpeed_MetaData), NewProp_InteractionSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCalculatedStats_Statics::NewProp_BuffDuration = { "BuffDuration", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCalculatedStats, BuffDuration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BuffDuration_MetaData), NewProp_BuffDuration_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCalculatedStats_Statics::NewProp_SpellPower = { "SpellPower", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCalculatedStats, SpellPower), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpellPower_MetaData), NewProp_SpellPower_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCalculatedStats_Statics::NewProp_SpellCastSpeed = { "SpellCastSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCalculatedStats, SpellCastSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpellCastSpeed_MetaData), NewProp_SpellCastSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCalculatedStats_Statics::NewProp_SpellRecoverySpeed = { "SpellRecoverySpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCalculatedStats, SpellRecoverySpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpellRecoverySpeed_MetaData), NewProp_SpellRecoverySpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCalculatedStats_Statics::NewProp_SkillCooldown = { "SkillCooldown", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCalculatedStats, SkillCooldown), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SkillCooldown_MetaData), NewProp_SkillCooldown_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCalculatedStats_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCalculatedStats_Statics::NewProp_MaxHealth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCalculatedStats_Statics::NewProp_AttackPower,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCalculatedStats_Statics::NewProp_MoveSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCalculatedStats_Statics::NewProp_InteractionSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCalculatedStats_Statics::NewProp_BuffDuration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCalculatedStats_Statics::NewProp_SpellPower,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCalculatedStats_Statics::NewProp_SpellCastSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCalculatedStats_Statics::NewProp_SpellRecoverySpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCalculatedStats_Statics::NewProp_SkillCooldown,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCalculatedStats_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCalculatedStats_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_DarkandDarker_Status,
	nullptr,
	&NewStructOps,
	"CalculatedStats",
	Z_Construct_UScriptStruct_FCalculatedStats_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCalculatedStats_Statics::PropPointers),
	sizeof(FCalculatedStats),
	alignof(FCalculatedStats),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCalculatedStats_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCalculatedStats_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCalculatedStats()
{
	if (!Z_Registration_Info_UScriptStruct_CalculatedStats.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CalculatedStats.InnerSingleton, Z_Construct_UScriptStruct_FCalculatedStats_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_CalculatedStats.InnerSingleton;
}
// End ScriptStruct FCalculatedStats

// Begin Class UDarkandDarker_StatusBPLibrary Function CalculateAttackPower
struct Z_Construct_UFunction_UDarkandDarker_StatusBPLibrary_CalculateAttackPower_Statics
{
	struct DarkandDarker_StatusBPLibrary_eventCalculateAttackPower_Parms
	{
		FCharacterStats CharacterStats;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Character Stats" },
		{ "ModuleRelativePath", "Public/DarkandDarker_StatusBPLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_CharacterStats;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDarkandDarker_StatusBPLibrary_CalculateAttackPower_Statics::NewProp_CharacterStats = { "CharacterStats", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DarkandDarker_StatusBPLibrary_eventCalculateAttackPower_Parms, CharacterStats), Z_Construct_UScriptStruct_FCharacterStats, METADATA_PARAMS(0, nullptr) }; // 1689090990
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDarkandDarker_StatusBPLibrary_CalculateAttackPower_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DarkandDarker_StatusBPLibrary_eventCalculateAttackPower_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDarkandDarker_StatusBPLibrary_CalculateAttackPower_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDarkandDarker_StatusBPLibrary_CalculateAttackPower_Statics::NewProp_CharacterStats,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDarkandDarker_StatusBPLibrary_CalculateAttackPower_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDarkandDarker_StatusBPLibrary_CalculateAttackPower_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDarkandDarker_StatusBPLibrary_CalculateAttackPower_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDarkandDarker_StatusBPLibrary, nullptr, "CalculateAttackPower", nullptr, nullptr, Z_Construct_UFunction_UDarkandDarker_StatusBPLibrary_CalculateAttackPower_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDarkandDarker_StatusBPLibrary_CalculateAttackPower_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDarkandDarker_StatusBPLibrary_CalculateAttackPower_Statics::DarkandDarker_StatusBPLibrary_eventCalculateAttackPower_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDarkandDarker_StatusBPLibrary_CalculateAttackPower_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDarkandDarker_StatusBPLibrary_CalculateAttackPower_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDarkandDarker_StatusBPLibrary_CalculateAttackPower_Statics::DarkandDarker_StatusBPLibrary_eventCalculateAttackPower_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDarkandDarker_StatusBPLibrary_CalculateAttackPower()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDarkandDarker_StatusBPLibrary_CalculateAttackPower_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDarkandDarker_StatusBPLibrary::execCalculateAttackPower)
{
	P_GET_STRUCT(FCharacterStats,Z_Param_CharacterStats);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=UDarkandDarker_StatusBPLibrary::CalculateAttackPower(Z_Param_CharacterStats);
	P_NATIVE_END;
}
// End Class UDarkandDarker_StatusBPLibrary Function CalculateAttackPower

// Begin Class UDarkandDarker_StatusBPLibrary Function CalculateBuffDuration
struct Z_Construct_UFunction_UDarkandDarker_StatusBPLibrary_CalculateBuffDuration_Statics
{
	struct DarkandDarker_StatusBPLibrary_eventCalculateBuffDuration_Parms
	{
		FCharacterStats CharacterStats;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Character Stats" },
		{ "ModuleRelativePath", "Public/DarkandDarker_StatusBPLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_CharacterStats;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDarkandDarker_StatusBPLibrary_CalculateBuffDuration_Statics::NewProp_CharacterStats = { "CharacterStats", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DarkandDarker_StatusBPLibrary_eventCalculateBuffDuration_Parms, CharacterStats), Z_Construct_UScriptStruct_FCharacterStats, METADATA_PARAMS(0, nullptr) }; // 1689090990
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDarkandDarker_StatusBPLibrary_CalculateBuffDuration_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DarkandDarker_StatusBPLibrary_eventCalculateBuffDuration_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDarkandDarker_StatusBPLibrary_CalculateBuffDuration_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDarkandDarker_StatusBPLibrary_CalculateBuffDuration_Statics::NewProp_CharacterStats,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDarkandDarker_StatusBPLibrary_CalculateBuffDuration_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDarkandDarker_StatusBPLibrary_CalculateBuffDuration_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDarkandDarker_StatusBPLibrary_CalculateBuffDuration_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDarkandDarker_StatusBPLibrary, nullptr, "CalculateBuffDuration", nullptr, nullptr, Z_Construct_UFunction_UDarkandDarker_StatusBPLibrary_CalculateBuffDuration_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDarkandDarker_StatusBPLibrary_CalculateBuffDuration_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDarkandDarker_StatusBPLibrary_CalculateBuffDuration_Statics::DarkandDarker_StatusBPLibrary_eventCalculateBuffDuration_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDarkandDarker_StatusBPLibrary_CalculateBuffDuration_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDarkandDarker_StatusBPLibrary_CalculateBuffDuration_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDarkandDarker_StatusBPLibrary_CalculateBuffDuration_Statics::DarkandDarker_StatusBPLibrary_eventCalculateBuffDuration_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDarkandDarker_StatusBPLibrary_CalculateBuffDuration()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDarkandDarker_StatusBPLibrary_CalculateBuffDuration_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDarkandDarker_StatusBPLibrary::execCalculateBuffDuration)
{
	P_GET_STRUCT(FCharacterStats,Z_Param_CharacterStats);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=UDarkandDarker_StatusBPLibrary::CalculateBuffDuration(Z_Param_CharacterStats);
	P_NATIVE_END;
}
// End Class UDarkandDarker_StatusBPLibrary Function CalculateBuffDuration

// Begin Class UDarkandDarker_StatusBPLibrary Function CalculateFinalStats
struct Z_Construct_UFunction_UDarkandDarker_StatusBPLibrary_CalculateFinalStats_Statics
{
	struct DarkandDarker_StatusBPLibrary_eventCalculateFinalStats_Parms
	{
		FCharacterStats CharacterStats;
		FCalculatedStats ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Character Stats" },
		{ "ModuleRelativePath", "Public/DarkandDarker_StatusBPLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_CharacterStats;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDarkandDarker_StatusBPLibrary_CalculateFinalStats_Statics::NewProp_CharacterStats = { "CharacterStats", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DarkandDarker_StatusBPLibrary_eventCalculateFinalStats_Parms, CharacterStats), Z_Construct_UScriptStruct_FCharacterStats, METADATA_PARAMS(0, nullptr) }; // 1689090990
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDarkandDarker_StatusBPLibrary_CalculateFinalStats_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DarkandDarker_StatusBPLibrary_eventCalculateFinalStats_Parms, ReturnValue), Z_Construct_UScriptStruct_FCalculatedStats, METADATA_PARAMS(0, nullptr) }; // 1848292595
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDarkandDarker_StatusBPLibrary_CalculateFinalStats_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDarkandDarker_StatusBPLibrary_CalculateFinalStats_Statics::NewProp_CharacterStats,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDarkandDarker_StatusBPLibrary_CalculateFinalStats_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDarkandDarker_StatusBPLibrary_CalculateFinalStats_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDarkandDarker_StatusBPLibrary_CalculateFinalStats_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDarkandDarker_StatusBPLibrary, nullptr, "CalculateFinalStats", nullptr, nullptr, Z_Construct_UFunction_UDarkandDarker_StatusBPLibrary_CalculateFinalStats_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDarkandDarker_StatusBPLibrary_CalculateFinalStats_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDarkandDarker_StatusBPLibrary_CalculateFinalStats_Statics::DarkandDarker_StatusBPLibrary_eventCalculateFinalStats_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDarkandDarker_StatusBPLibrary_CalculateFinalStats_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDarkandDarker_StatusBPLibrary_CalculateFinalStats_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDarkandDarker_StatusBPLibrary_CalculateFinalStats_Statics::DarkandDarker_StatusBPLibrary_eventCalculateFinalStats_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDarkandDarker_StatusBPLibrary_CalculateFinalStats()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDarkandDarker_StatusBPLibrary_CalculateFinalStats_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDarkandDarker_StatusBPLibrary::execCalculateFinalStats)
{
	P_GET_STRUCT(FCharacterStats,Z_Param_CharacterStats);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FCalculatedStats*)Z_Param__Result=UDarkandDarker_StatusBPLibrary::CalculateFinalStats(Z_Param_CharacterStats);
	P_NATIVE_END;
}
// End Class UDarkandDarker_StatusBPLibrary Function CalculateFinalStats

// Begin Class UDarkandDarker_StatusBPLibrary Function CalculateInteractionSpeed
struct Z_Construct_UFunction_UDarkandDarker_StatusBPLibrary_CalculateInteractionSpeed_Statics
{
	struct DarkandDarker_StatusBPLibrary_eventCalculateInteractionSpeed_Parms
	{
		FCharacterStats CharacterStats;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Character Stats" },
		{ "ModuleRelativePath", "Public/DarkandDarker_StatusBPLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_CharacterStats;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDarkandDarker_StatusBPLibrary_CalculateInteractionSpeed_Statics::NewProp_CharacterStats = { "CharacterStats", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DarkandDarker_StatusBPLibrary_eventCalculateInteractionSpeed_Parms, CharacterStats), Z_Construct_UScriptStruct_FCharacterStats, METADATA_PARAMS(0, nullptr) }; // 1689090990
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDarkandDarker_StatusBPLibrary_CalculateInteractionSpeed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DarkandDarker_StatusBPLibrary_eventCalculateInteractionSpeed_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDarkandDarker_StatusBPLibrary_CalculateInteractionSpeed_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDarkandDarker_StatusBPLibrary_CalculateInteractionSpeed_Statics::NewProp_CharacterStats,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDarkandDarker_StatusBPLibrary_CalculateInteractionSpeed_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDarkandDarker_StatusBPLibrary_CalculateInteractionSpeed_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDarkandDarker_StatusBPLibrary_CalculateInteractionSpeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDarkandDarker_StatusBPLibrary, nullptr, "CalculateInteractionSpeed", nullptr, nullptr, Z_Construct_UFunction_UDarkandDarker_StatusBPLibrary_CalculateInteractionSpeed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDarkandDarker_StatusBPLibrary_CalculateInteractionSpeed_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDarkandDarker_StatusBPLibrary_CalculateInteractionSpeed_Statics::DarkandDarker_StatusBPLibrary_eventCalculateInteractionSpeed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDarkandDarker_StatusBPLibrary_CalculateInteractionSpeed_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDarkandDarker_StatusBPLibrary_CalculateInteractionSpeed_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDarkandDarker_StatusBPLibrary_CalculateInteractionSpeed_Statics::DarkandDarker_StatusBPLibrary_eventCalculateInteractionSpeed_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDarkandDarker_StatusBPLibrary_CalculateInteractionSpeed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDarkandDarker_StatusBPLibrary_CalculateInteractionSpeed_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDarkandDarker_StatusBPLibrary::execCalculateInteractionSpeed)
{
	P_GET_STRUCT(FCharacterStats,Z_Param_CharacterStats);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=UDarkandDarker_StatusBPLibrary::CalculateInteractionSpeed(Z_Param_CharacterStats);
	P_NATIVE_END;
}
// End Class UDarkandDarker_StatusBPLibrary Function CalculateInteractionSpeed

// Begin Class UDarkandDarker_StatusBPLibrary Function CalculateMaxHealth
struct Z_Construct_UFunction_UDarkandDarker_StatusBPLibrary_CalculateMaxHealth_Statics
{
	struct DarkandDarker_StatusBPLibrary_eventCalculateMaxHealth_Parms
	{
		FCharacterStats CharacterStats;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Character Stats" },
		{ "ModuleRelativePath", "Public/DarkandDarker_StatusBPLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_CharacterStats;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDarkandDarker_StatusBPLibrary_CalculateMaxHealth_Statics::NewProp_CharacterStats = { "CharacterStats", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DarkandDarker_StatusBPLibrary_eventCalculateMaxHealth_Parms, CharacterStats), Z_Construct_UScriptStruct_FCharacterStats, METADATA_PARAMS(0, nullptr) }; // 1689090990
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDarkandDarker_StatusBPLibrary_CalculateMaxHealth_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DarkandDarker_StatusBPLibrary_eventCalculateMaxHealth_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDarkandDarker_StatusBPLibrary_CalculateMaxHealth_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDarkandDarker_StatusBPLibrary_CalculateMaxHealth_Statics::NewProp_CharacterStats,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDarkandDarker_StatusBPLibrary_CalculateMaxHealth_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDarkandDarker_StatusBPLibrary_CalculateMaxHealth_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDarkandDarker_StatusBPLibrary_CalculateMaxHealth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDarkandDarker_StatusBPLibrary, nullptr, "CalculateMaxHealth", nullptr, nullptr, Z_Construct_UFunction_UDarkandDarker_StatusBPLibrary_CalculateMaxHealth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDarkandDarker_StatusBPLibrary_CalculateMaxHealth_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDarkandDarker_StatusBPLibrary_CalculateMaxHealth_Statics::DarkandDarker_StatusBPLibrary_eventCalculateMaxHealth_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDarkandDarker_StatusBPLibrary_CalculateMaxHealth_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDarkandDarker_StatusBPLibrary_CalculateMaxHealth_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDarkandDarker_StatusBPLibrary_CalculateMaxHealth_Statics::DarkandDarker_StatusBPLibrary_eventCalculateMaxHealth_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDarkandDarker_StatusBPLibrary_CalculateMaxHealth()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDarkandDarker_StatusBPLibrary_CalculateMaxHealth_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDarkandDarker_StatusBPLibrary::execCalculateMaxHealth)
{
	P_GET_STRUCT(FCharacterStats,Z_Param_CharacterStats);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=UDarkandDarker_StatusBPLibrary::CalculateMaxHealth(Z_Param_CharacterStats);
	P_NATIVE_END;
}
// End Class UDarkandDarker_StatusBPLibrary Function CalculateMaxHealth

// Begin Class UDarkandDarker_StatusBPLibrary Function CalculateMoveSpeed
struct Z_Construct_UFunction_UDarkandDarker_StatusBPLibrary_CalculateMoveSpeed_Statics
{
	struct DarkandDarker_StatusBPLibrary_eventCalculateMoveSpeed_Parms
	{
		FCharacterStats CharacterStats;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Character Stats" },
		{ "ModuleRelativePath", "Public/DarkandDarker_StatusBPLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_CharacterStats;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDarkandDarker_StatusBPLibrary_CalculateMoveSpeed_Statics::NewProp_CharacterStats = { "CharacterStats", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DarkandDarker_StatusBPLibrary_eventCalculateMoveSpeed_Parms, CharacterStats), Z_Construct_UScriptStruct_FCharacterStats, METADATA_PARAMS(0, nullptr) }; // 1689090990
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDarkandDarker_StatusBPLibrary_CalculateMoveSpeed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DarkandDarker_StatusBPLibrary_eventCalculateMoveSpeed_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDarkandDarker_StatusBPLibrary_CalculateMoveSpeed_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDarkandDarker_StatusBPLibrary_CalculateMoveSpeed_Statics::NewProp_CharacterStats,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDarkandDarker_StatusBPLibrary_CalculateMoveSpeed_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDarkandDarker_StatusBPLibrary_CalculateMoveSpeed_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDarkandDarker_StatusBPLibrary_CalculateMoveSpeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDarkandDarker_StatusBPLibrary, nullptr, "CalculateMoveSpeed", nullptr, nullptr, Z_Construct_UFunction_UDarkandDarker_StatusBPLibrary_CalculateMoveSpeed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDarkandDarker_StatusBPLibrary_CalculateMoveSpeed_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDarkandDarker_StatusBPLibrary_CalculateMoveSpeed_Statics::DarkandDarker_StatusBPLibrary_eventCalculateMoveSpeed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDarkandDarker_StatusBPLibrary_CalculateMoveSpeed_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDarkandDarker_StatusBPLibrary_CalculateMoveSpeed_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDarkandDarker_StatusBPLibrary_CalculateMoveSpeed_Statics::DarkandDarker_StatusBPLibrary_eventCalculateMoveSpeed_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDarkandDarker_StatusBPLibrary_CalculateMoveSpeed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDarkandDarker_StatusBPLibrary_CalculateMoveSpeed_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDarkandDarker_StatusBPLibrary::execCalculateMoveSpeed)
{
	P_GET_STRUCT(FCharacterStats,Z_Param_CharacterStats);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=UDarkandDarker_StatusBPLibrary::CalculateMoveSpeed(Z_Param_CharacterStats);
	P_NATIVE_END;
}
// End Class UDarkandDarker_StatusBPLibrary Function CalculateMoveSpeed

// Begin Class UDarkandDarker_StatusBPLibrary Function CalculateSkillCooldown
struct Z_Construct_UFunction_UDarkandDarker_StatusBPLibrary_CalculateSkillCooldown_Statics
{
	struct DarkandDarker_StatusBPLibrary_eventCalculateSkillCooldown_Parms
	{
		FCharacterStats CharacterStats;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Character Stats" },
		{ "ModuleRelativePath", "Public/DarkandDarker_StatusBPLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_CharacterStats;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDarkandDarker_StatusBPLibrary_CalculateSkillCooldown_Statics::NewProp_CharacterStats = { "CharacterStats", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DarkandDarker_StatusBPLibrary_eventCalculateSkillCooldown_Parms, CharacterStats), Z_Construct_UScriptStruct_FCharacterStats, METADATA_PARAMS(0, nullptr) }; // 1689090990
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDarkandDarker_StatusBPLibrary_CalculateSkillCooldown_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DarkandDarker_StatusBPLibrary_eventCalculateSkillCooldown_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDarkandDarker_StatusBPLibrary_CalculateSkillCooldown_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDarkandDarker_StatusBPLibrary_CalculateSkillCooldown_Statics::NewProp_CharacterStats,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDarkandDarker_StatusBPLibrary_CalculateSkillCooldown_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDarkandDarker_StatusBPLibrary_CalculateSkillCooldown_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDarkandDarker_StatusBPLibrary_CalculateSkillCooldown_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDarkandDarker_StatusBPLibrary, nullptr, "CalculateSkillCooldown", nullptr, nullptr, Z_Construct_UFunction_UDarkandDarker_StatusBPLibrary_CalculateSkillCooldown_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDarkandDarker_StatusBPLibrary_CalculateSkillCooldown_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDarkandDarker_StatusBPLibrary_CalculateSkillCooldown_Statics::DarkandDarker_StatusBPLibrary_eventCalculateSkillCooldown_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDarkandDarker_StatusBPLibrary_CalculateSkillCooldown_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDarkandDarker_StatusBPLibrary_CalculateSkillCooldown_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDarkandDarker_StatusBPLibrary_CalculateSkillCooldown_Statics::DarkandDarker_StatusBPLibrary_eventCalculateSkillCooldown_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDarkandDarker_StatusBPLibrary_CalculateSkillCooldown()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDarkandDarker_StatusBPLibrary_CalculateSkillCooldown_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDarkandDarker_StatusBPLibrary::execCalculateSkillCooldown)
{
	P_GET_STRUCT(FCharacterStats,Z_Param_CharacterStats);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=UDarkandDarker_StatusBPLibrary::CalculateSkillCooldown(Z_Param_CharacterStats);
	P_NATIVE_END;
}
// End Class UDarkandDarker_StatusBPLibrary Function CalculateSkillCooldown

// Begin Class UDarkandDarker_StatusBPLibrary Function CalculateSpellCastSpeed
struct Z_Construct_UFunction_UDarkandDarker_StatusBPLibrary_CalculateSpellCastSpeed_Statics
{
	struct DarkandDarker_StatusBPLibrary_eventCalculateSpellCastSpeed_Parms
	{
		FCharacterStats CharacterStats;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Character Stats" },
		{ "ModuleRelativePath", "Public/DarkandDarker_StatusBPLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_CharacterStats;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDarkandDarker_StatusBPLibrary_CalculateSpellCastSpeed_Statics::NewProp_CharacterStats = { "CharacterStats", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DarkandDarker_StatusBPLibrary_eventCalculateSpellCastSpeed_Parms, CharacterStats), Z_Construct_UScriptStruct_FCharacterStats, METADATA_PARAMS(0, nullptr) }; // 1689090990
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDarkandDarker_StatusBPLibrary_CalculateSpellCastSpeed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DarkandDarker_StatusBPLibrary_eventCalculateSpellCastSpeed_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDarkandDarker_StatusBPLibrary_CalculateSpellCastSpeed_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDarkandDarker_StatusBPLibrary_CalculateSpellCastSpeed_Statics::NewProp_CharacterStats,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDarkandDarker_StatusBPLibrary_CalculateSpellCastSpeed_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDarkandDarker_StatusBPLibrary_CalculateSpellCastSpeed_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDarkandDarker_StatusBPLibrary_CalculateSpellCastSpeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDarkandDarker_StatusBPLibrary, nullptr, "CalculateSpellCastSpeed", nullptr, nullptr, Z_Construct_UFunction_UDarkandDarker_StatusBPLibrary_CalculateSpellCastSpeed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDarkandDarker_StatusBPLibrary_CalculateSpellCastSpeed_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDarkandDarker_StatusBPLibrary_CalculateSpellCastSpeed_Statics::DarkandDarker_StatusBPLibrary_eventCalculateSpellCastSpeed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDarkandDarker_StatusBPLibrary_CalculateSpellCastSpeed_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDarkandDarker_StatusBPLibrary_CalculateSpellCastSpeed_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDarkandDarker_StatusBPLibrary_CalculateSpellCastSpeed_Statics::DarkandDarker_StatusBPLibrary_eventCalculateSpellCastSpeed_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDarkandDarker_StatusBPLibrary_CalculateSpellCastSpeed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDarkandDarker_StatusBPLibrary_CalculateSpellCastSpeed_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDarkandDarker_StatusBPLibrary::execCalculateSpellCastSpeed)
{
	P_GET_STRUCT(FCharacterStats,Z_Param_CharacterStats);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=UDarkandDarker_StatusBPLibrary::CalculateSpellCastSpeed(Z_Param_CharacterStats);
	P_NATIVE_END;
}
// End Class UDarkandDarker_StatusBPLibrary Function CalculateSpellCastSpeed

// Begin Class UDarkandDarker_StatusBPLibrary Function CalculateSpellPower
struct Z_Construct_UFunction_UDarkandDarker_StatusBPLibrary_CalculateSpellPower_Statics
{
	struct DarkandDarker_StatusBPLibrary_eventCalculateSpellPower_Parms
	{
		FCharacterStats CharacterStats;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Character Stats" },
		{ "ModuleRelativePath", "Public/DarkandDarker_StatusBPLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_CharacterStats;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDarkandDarker_StatusBPLibrary_CalculateSpellPower_Statics::NewProp_CharacterStats = { "CharacterStats", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DarkandDarker_StatusBPLibrary_eventCalculateSpellPower_Parms, CharacterStats), Z_Construct_UScriptStruct_FCharacterStats, METADATA_PARAMS(0, nullptr) }; // 1689090990
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDarkandDarker_StatusBPLibrary_CalculateSpellPower_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DarkandDarker_StatusBPLibrary_eventCalculateSpellPower_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDarkandDarker_StatusBPLibrary_CalculateSpellPower_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDarkandDarker_StatusBPLibrary_CalculateSpellPower_Statics::NewProp_CharacterStats,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDarkandDarker_StatusBPLibrary_CalculateSpellPower_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDarkandDarker_StatusBPLibrary_CalculateSpellPower_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDarkandDarker_StatusBPLibrary_CalculateSpellPower_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDarkandDarker_StatusBPLibrary, nullptr, "CalculateSpellPower", nullptr, nullptr, Z_Construct_UFunction_UDarkandDarker_StatusBPLibrary_CalculateSpellPower_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDarkandDarker_StatusBPLibrary_CalculateSpellPower_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDarkandDarker_StatusBPLibrary_CalculateSpellPower_Statics::DarkandDarker_StatusBPLibrary_eventCalculateSpellPower_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDarkandDarker_StatusBPLibrary_CalculateSpellPower_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDarkandDarker_StatusBPLibrary_CalculateSpellPower_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDarkandDarker_StatusBPLibrary_CalculateSpellPower_Statics::DarkandDarker_StatusBPLibrary_eventCalculateSpellPower_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDarkandDarker_StatusBPLibrary_CalculateSpellPower()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDarkandDarker_StatusBPLibrary_CalculateSpellPower_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDarkandDarker_StatusBPLibrary::execCalculateSpellPower)
{
	P_GET_STRUCT(FCharacterStats,Z_Param_CharacterStats);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=UDarkandDarker_StatusBPLibrary::CalculateSpellPower(Z_Param_CharacterStats);
	P_NATIVE_END;
}
// End Class UDarkandDarker_StatusBPLibrary Function CalculateSpellPower

// Begin Class UDarkandDarker_StatusBPLibrary Function CalculateSpellRecoverySpeed
struct Z_Construct_UFunction_UDarkandDarker_StatusBPLibrary_CalculateSpellRecoverySpeed_Statics
{
	struct DarkandDarker_StatusBPLibrary_eventCalculateSpellRecoverySpeed_Parms
	{
		FCharacterStats CharacterStats;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Character Stats" },
		{ "ModuleRelativePath", "Public/DarkandDarker_StatusBPLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_CharacterStats;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDarkandDarker_StatusBPLibrary_CalculateSpellRecoverySpeed_Statics::NewProp_CharacterStats = { "CharacterStats", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DarkandDarker_StatusBPLibrary_eventCalculateSpellRecoverySpeed_Parms, CharacterStats), Z_Construct_UScriptStruct_FCharacterStats, METADATA_PARAMS(0, nullptr) }; // 1689090990
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDarkandDarker_StatusBPLibrary_CalculateSpellRecoverySpeed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DarkandDarker_StatusBPLibrary_eventCalculateSpellRecoverySpeed_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDarkandDarker_StatusBPLibrary_CalculateSpellRecoverySpeed_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDarkandDarker_StatusBPLibrary_CalculateSpellRecoverySpeed_Statics::NewProp_CharacterStats,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDarkandDarker_StatusBPLibrary_CalculateSpellRecoverySpeed_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDarkandDarker_StatusBPLibrary_CalculateSpellRecoverySpeed_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDarkandDarker_StatusBPLibrary_CalculateSpellRecoverySpeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDarkandDarker_StatusBPLibrary, nullptr, "CalculateSpellRecoverySpeed", nullptr, nullptr, Z_Construct_UFunction_UDarkandDarker_StatusBPLibrary_CalculateSpellRecoverySpeed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDarkandDarker_StatusBPLibrary_CalculateSpellRecoverySpeed_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDarkandDarker_StatusBPLibrary_CalculateSpellRecoverySpeed_Statics::DarkandDarker_StatusBPLibrary_eventCalculateSpellRecoverySpeed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDarkandDarker_StatusBPLibrary_CalculateSpellRecoverySpeed_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDarkandDarker_StatusBPLibrary_CalculateSpellRecoverySpeed_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDarkandDarker_StatusBPLibrary_CalculateSpellRecoverySpeed_Statics::DarkandDarker_StatusBPLibrary_eventCalculateSpellRecoverySpeed_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDarkandDarker_StatusBPLibrary_CalculateSpellRecoverySpeed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDarkandDarker_StatusBPLibrary_CalculateSpellRecoverySpeed_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDarkandDarker_StatusBPLibrary::execCalculateSpellRecoverySpeed)
{
	P_GET_STRUCT(FCharacterStats,Z_Param_CharacterStats);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=UDarkandDarker_StatusBPLibrary::CalculateSpellRecoverySpeed(Z_Param_CharacterStats);
	P_NATIVE_END;
}
// End Class UDarkandDarker_StatusBPLibrary Function CalculateSpellRecoverySpeed

// Begin Class UDarkandDarker_StatusBPLibrary
void UDarkandDarker_StatusBPLibrary::StaticRegisterNativesUDarkandDarker_StatusBPLibrary()
{
	UClass* Class = UDarkandDarker_StatusBPLibrary::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CalculateAttackPower", &UDarkandDarker_StatusBPLibrary::execCalculateAttackPower },
		{ "CalculateBuffDuration", &UDarkandDarker_StatusBPLibrary::execCalculateBuffDuration },
		{ "CalculateFinalStats", &UDarkandDarker_StatusBPLibrary::execCalculateFinalStats },
		{ "CalculateInteractionSpeed", &UDarkandDarker_StatusBPLibrary::execCalculateInteractionSpeed },
		{ "CalculateMaxHealth", &UDarkandDarker_StatusBPLibrary::execCalculateMaxHealth },
		{ "CalculateMoveSpeed", &UDarkandDarker_StatusBPLibrary::execCalculateMoveSpeed },
		{ "CalculateSkillCooldown", &UDarkandDarker_StatusBPLibrary::execCalculateSkillCooldown },
		{ "CalculateSpellCastSpeed", &UDarkandDarker_StatusBPLibrary::execCalculateSpellCastSpeed },
		{ "CalculateSpellPower", &UDarkandDarker_StatusBPLibrary::execCalculateSpellPower },
		{ "CalculateSpellRecoverySpeed", &UDarkandDarker_StatusBPLibrary::execCalculateSpellRecoverySpeed },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDarkandDarker_StatusBPLibrary);
UClass* Z_Construct_UClass_UDarkandDarker_StatusBPLibrary_NoRegister()
{
	return UDarkandDarker_StatusBPLibrary::StaticClass();
}
struct Z_Construct_UClass_UDarkandDarker_StatusBPLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "DarkandDarker_StatusBPLibrary.h" },
		{ "ModuleRelativePath", "Public/DarkandDarker_StatusBPLibrary.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UDarkandDarker_StatusBPLibrary_CalculateAttackPower, "CalculateAttackPower" }, // 3064624106
		{ &Z_Construct_UFunction_UDarkandDarker_StatusBPLibrary_CalculateBuffDuration, "CalculateBuffDuration" }, // 203254881
		{ &Z_Construct_UFunction_UDarkandDarker_StatusBPLibrary_CalculateFinalStats, "CalculateFinalStats" }, // 2944982355
		{ &Z_Construct_UFunction_UDarkandDarker_StatusBPLibrary_CalculateInteractionSpeed, "CalculateInteractionSpeed" }, // 36831515
		{ &Z_Construct_UFunction_UDarkandDarker_StatusBPLibrary_CalculateMaxHealth, "CalculateMaxHealth" }, // 3004750625
		{ &Z_Construct_UFunction_UDarkandDarker_StatusBPLibrary_CalculateMoveSpeed, "CalculateMoveSpeed" }, // 3748177318
		{ &Z_Construct_UFunction_UDarkandDarker_StatusBPLibrary_CalculateSkillCooldown, "CalculateSkillCooldown" }, // 3627055417
		{ &Z_Construct_UFunction_UDarkandDarker_StatusBPLibrary_CalculateSpellCastSpeed, "CalculateSpellCastSpeed" }, // 3120754641
		{ &Z_Construct_UFunction_UDarkandDarker_StatusBPLibrary_CalculateSpellPower, "CalculateSpellPower" }, // 2072038767
		{ &Z_Construct_UFunction_UDarkandDarker_StatusBPLibrary_CalculateSpellRecoverySpeed, "CalculateSpellRecoverySpeed" }, // 2099773887
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDarkandDarker_StatusBPLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UDarkandDarker_StatusBPLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_DarkandDarker_Status,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDarkandDarker_StatusBPLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDarkandDarker_StatusBPLibrary_Statics::ClassParams = {
	&UDarkandDarker_StatusBPLibrary::StaticClass,
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
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDarkandDarker_StatusBPLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UDarkandDarker_StatusBPLibrary_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDarkandDarker_StatusBPLibrary()
{
	if (!Z_Registration_Info_UClass_UDarkandDarker_StatusBPLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDarkandDarker_StatusBPLibrary.OuterSingleton, Z_Construct_UClass_UDarkandDarker_StatusBPLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDarkandDarker_StatusBPLibrary.OuterSingleton;
}
template<> DARKANDDARKER_STATUS_API UClass* StaticClass<UDarkandDarker_StatusBPLibrary>()
{
	return UDarkandDarker_StatusBPLibrary::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDarkandDarker_StatusBPLibrary);
UDarkandDarker_StatusBPLibrary::~UDarkandDarker_StatusBPLibrary() {}
// End Class UDarkandDarker_StatusBPLibrary

// Begin Registration
struct Z_CompiledInDeferFile_FID_ProjectUnreal_NetWork_Source_NetWork_BChat_DarkandDarker_Status_HostProject_Plugins_DarkandDarker_Status_Source_DarkandDarker_Status_Public_DarkandDarker_StatusBPLibrary_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FCharacterStats::StaticStruct, Z_Construct_UScriptStruct_FCharacterStats_Statics::NewStructOps, TEXT("CharacterStats"), &Z_Registration_Info_UScriptStruct_CharacterStats, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCharacterStats), 1689090990U) },
		{ FCalculatedStats::StaticStruct, Z_Construct_UScriptStruct_FCalculatedStats_Statics::NewStructOps, TEXT("CalculatedStats"), &Z_Registration_Info_UScriptStruct_CalculatedStats, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCalculatedStats), 1848292595U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDarkandDarker_StatusBPLibrary, UDarkandDarker_StatusBPLibrary::StaticClass, TEXT("UDarkandDarker_StatusBPLibrary"), &Z_Registration_Info_UClass_UDarkandDarker_StatusBPLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDarkandDarker_StatusBPLibrary), 2833722796U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectUnreal_NetWork_Source_NetWork_BChat_DarkandDarker_Status_HostProject_Plugins_DarkandDarker_Status_Source_DarkandDarker_Status_Public_DarkandDarker_StatusBPLibrary_h_1694810998(TEXT("/Script/DarkandDarker_Status"),
	Z_CompiledInDeferFile_FID_ProjectUnreal_NetWork_Source_NetWork_BChat_DarkandDarker_Status_HostProject_Plugins_DarkandDarker_Status_Source_DarkandDarker_Status_Public_DarkandDarker_StatusBPLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectUnreal_NetWork_Source_NetWork_BChat_DarkandDarker_Status_HostProject_Plugins_DarkandDarker_Status_Source_DarkandDarker_Status_Public_DarkandDarker_StatusBPLibrary_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_ProjectUnreal_NetWork_Source_NetWork_BChat_DarkandDarker_Status_HostProject_Plugins_DarkandDarker_Status_Source_DarkandDarker_Status_Public_DarkandDarker_StatusBPLibrary_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectUnreal_NetWork_Source_NetWork_BChat_DarkandDarker_Status_HostProject_Plugins_DarkandDarker_Status_Source_DarkandDarker_Status_Public_DarkandDarker_StatusBPLibrary_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
