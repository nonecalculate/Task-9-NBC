// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "Kismet/BlueprintFunctionLibrary.h"
#include "DarkandDarker_StatusBPLibrary.generated.h"

/* 
*	Function library class.
*	Each function in it is expected to be static and represents blueprint node that can be called in any blueprint.
*
*	When declaring function you can define metadata for the node. Key function specifiers will be BlueprintPure and BlueprintCallable.
*	BlueprintPure - means the function does not affect the owning object in any way and thus creates a node without Exec pins.
*	BlueprintCallable - makes a function which can be executed in Blueprints - Thus it has Exec pins.
*	DisplayName - full name of the node, shown when you mouse over the node and in the blueprint drop down menu.
*				Its lets you name the node using characters not allowed in C++ function names.
*	CompactNodeTitle - the word(s) that appear on the node.
*	Keywords -	the list of keywords that helps you to find node when you search for it using Blueprint drop-down menu. 
*				Good example is "Print String" node which you can find also by using keyword "log".
*	Category -	the category your node will be under in the Blueprint drop-down menu.
*
*	For more info on custom blueprint nodes visit documentation:
*	https://wiki.unrealengine.com/Custom_Blueprint_Node_Creation
*/

USTRUCT(BlueprintType)
struct FCharacterStats
{
    GENERATED_BODY()

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Stats")
    int32 Strength;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Stats")
    int32 Vigor;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Stats")
    int32 Agility;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Stats")
    int32 Dexterity;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Stats")
    int32 Will;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Stats")
    int32 Knowledge;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Stats")
    int32 Resourcefulness;
};

USTRUCT(BlueprintType)
struct FCalculatedStats
{
    GENERATED_BODY()

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Calculated Stats")
    float MaxHealth;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Calculated Stats")
    int32 AttackPower;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Calculated Stats")
    float MoveSpeed;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Calculated Stats")
    float InteractionSpeed;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Calculated Stats")
    float BuffDuration;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Calculated Stats")
    int32 SpellPower;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Calculated Stats")
    float SpellCastSpeed;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Calculated Stats")
    float SpellRecoverySpeed;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Calculated Stats")
    float SkillCooldown;
};


UCLASS()
class UDarkandDarker_StatusBPLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_UCLASS_BODY()

public:
    UFUNCTION(BlueprintCallable, Category = "Character Stats")
    static float CalculateMaxHealth(FCharacterStats CharacterStats);

    UFUNCTION(BlueprintCallable, Category = "Character Stats")
    static int32 CalculateAttackPower(FCharacterStats CharacterStats);

    UFUNCTION(BlueprintCallable, Category = "Character Stats")
    static float CalculateMoveSpeed(FCharacterStats CharacterStats);

    UFUNCTION(BlueprintCallable, Category = "Character Stats")
    static float CalculateInteractionSpeed(FCharacterStats CharacterStats);

    UFUNCTION(BlueprintCallable, Category = "Character Stats")
    static float CalculateBuffDuration(FCharacterStats CharacterStats);

    UFUNCTION(BlueprintCallable, Category = "Character Stats")
    static int32 CalculateSpellPower(FCharacterStats CharacterStats);

    UFUNCTION(BlueprintCallable, Category = "Character Stats")
    static float CalculateSpellCastSpeed(FCharacterStats CharacterStats);

    UFUNCTION(BlueprintCallable, Category = "Character Stats")
    static float CalculateSpellRecoverySpeed(FCharacterStats CharacterStats);

    UFUNCTION(BlueprintCallable, Category = "Character Stats")
    static float CalculateSkillCooldown(FCharacterStats CharacterStats);

    UFUNCTION(BlueprintCallable, Category = "Character Stats")
    static FCalculatedStats CalculateFinalStats(FCharacterStats CharacterStats);
};
