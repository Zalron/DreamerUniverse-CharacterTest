#pragma once
struct CharacterAttributes
{
	int Strength;
	int Dexterity;
	int Intelligence;
	int Willpower;
	int Endurance;
	int Luck;
};
struct CharacterStats
{
	int Life;
	float LifeRegenRate;
	float LifeRegenDelay;
	int Energy;
	float EnergyRegenRate;
	float EnergyRegenDelay;
	int Armour;
	float ArmourRegenRate;
	float ArmourRegenDelay;
	int Shield;
	float ShieldRegenRate;
	float ShieldRegenDelay;
	int Magic;
	float MagicRegenRate;
	float MagicRegenDelay;
};
struct CharacterResistenances 
{
	float MagicRadiationResistance;
	float MagicInsanityResistance;
	float MagicStiffnessResistance;
};

struct CharacterNumbers 
{
	int addFromGearMods, addFromTreeMods;
	int minusFromGearMods, minusFromTreeMods;
	int flatTotal;
	int increasedFromGearMods, increasedFromTreeMods;
	int decreasedFromGearMods, decreasedFromTreeMods;
	int additivePercentageTotal;
	int moreFromGearMods, moreFromTreeMods;
	int lessFromGearMods, lessFromTreeMods;
	int total;
};

struct PassiveTreeMod 
{

};

class Characters
{

};

