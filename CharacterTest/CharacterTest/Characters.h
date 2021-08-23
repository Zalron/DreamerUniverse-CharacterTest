#pragma once
#include "flecs.h"

struct Characters
{
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

	struct CharacterStatNumbers 
	{
		int addFromGearMods, addFromTreeMods;
		int minusFromGearMods, minusFromTreeMods;
		int flatTotal;
		float increasedFromGearMods, increasedFromTreeMods;
		float decreasedFromGearMods, decreasedFromTreeMods;
		float additivePercentageTotal;
		float moreFromGearMods, moreFromTreeMods;
		float lessFromGearMods, lessFromTreeMods;
		float multiplicativePercentageTotal;
		float total;
	};

	struct PassiveTreeModNumbers
	{
		int intmod;
		float floatmod;
	};

	Characters(flecs::world& world) 
	{
		world.module<Characters>();

		world.component<CharacterAttributes>();
		world.component<CharacterStats>();
		world.component<CharacterResistenances>();
		world.component<CharacterStatNumbers>();
		world.component<PassiveTreeModNumbers>();
	}
};