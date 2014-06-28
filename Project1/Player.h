#pragma once
#include <vector>
#include "Ability.h"
#include "PlayerStats.h"
#include "Buff.h"

//Encompasses all aspects of the player character
class Player{
public:
	Player();
	~Player();
	void addAbility(Ability* ability);
	std::vector <const Ability*> Player::clearAbilities();
	
	//const getters - return const references
	const std::vector <Ability*>& getAbilityList() const; 
	const PlayerStats& getPlayerStats() const;


	//mutable getters - return mutable references
	std::vector <Ability*>& getAbilityList();
	PlayerStats& getPlayerStats();

	//setters
	void setPlayerStats();

private:
	std::vector <Ability*> abilityList;
	PlayerStats playerStats;
	//talent list not implemented
};

