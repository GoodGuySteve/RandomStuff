#pragma once
#include <vector>
#include "Ability.h"

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
private:
	std::vector <Ability*> abilityList;
	PlayerStats playerStats;
	//talent list not implemented
};

//TODO correct the stats for talents added (separate stats from gear and total stats?)
struct PlayerStats{
public:
	int brutality;
	int finesse;
	int moxie;
	int tech;
	int insight;
	int grit;
	PlayerStats();
	PlayerStats(int, int, int, int, int, int);
};