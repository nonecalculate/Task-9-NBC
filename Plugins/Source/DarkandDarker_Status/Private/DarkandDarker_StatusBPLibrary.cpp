#include "DarkandDarker_StatusBPLibrary.h"
#include "DarkandDarker_Status.h"

UDarkandDarker_StatusBPLibrary::UDarkandDarker_StatusBPLibrary(const FObjectInitializer& ObjectInitializer)
{

}


float UDarkandDarker_StatusBPLibrary::CalculateMaxHealth(FCharacterStats CharacterStats)
{
	return (CharacterStats.Strength * 0.75f) + CharacterStats.Vigor;
}

int32 UDarkandDarker_StatusBPLibrary::CalculateAttackPower(FCharacterStats CharacterStats)
{
	return CharacterStats.Strength;
}

float UDarkandDarker_StatusBPLibrary::CalculateMoveSpeed(FCharacterStats CharacterStats)
{
	return CharacterStats.Agility;
}

float UDarkandDarker_StatusBPLibrary::CalculateInteractionSpeed(FCharacterStats CharacterStats)
{
	return (CharacterStats.Agility * 0.001f) + (CharacterStats.Dexterity * 0.0012f);
}

float UDarkandDarker_StatusBPLibrary::CalculateBuffDuration(FCharacterStats CharacterStats)
{
	return CharacterStats.Will * 0.002f;
}

int32 UDarkandDarker_StatusBPLibrary::CalculateSpellPower(FCharacterStats CharacterStats)
{
	return CharacterStats.Will;
}

float UDarkandDarker_StatusBPLibrary::CalculateSpellCastSpeed(FCharacterStats CharacterStats)
{
	return CharacterStats.Knowledge * 0.005f;
}

float UDarkandDarker_StatusBPLibrary::CalculateSpellRecoverySpeed(FCharacterStats CharacterStats)
{
	return CharacterStats.Knowledge * 0.003f;
}

float UDarkandDarker_StatusBPLibrary::CalculateSkillCooldown(FCharacterStats CharacterStats)
{
	return CharacterStats.Resourcefulness * 0.01f;
}

FCalculatedStats UDarkandDarker_StatusBPLibrary::CalculateFinalStats(FCharacterStats CharacterStats)
{
	FCalculatedStats CalculatedStats;
	CalculatedStats.MaxHealth = CalculateMaxHealth(CharacterStats);
	CalculatedStats.AttackPower = CalculateAttackPower(CharacterStats);
	CalculatedStats.MoveSpeed = CalculateMoveSpeed(CharacterStats);
	CalculatedStats.InteractionSpeed = CalculateInteractionSpeed(CharacterStats);
	CalculatedStats.BuffDuration = CalculateBuffDuration(CharacterStats);
	CalculatedStats.SpellPower = CalculateSpellPower(CharacterStats);
	CalculatedStats.SpellCastSpeed = CalculateSpellCastSpeed(CharacterStats);
	CalculatedStats.SpellRecoverySpeed = CalculateSpellRecoverySpeed(CharacterStats);
	CalculatedStats.SkillCooldown = CalculateSkillCooldown(CharacterStats);
	return CalculatedStats;
}

