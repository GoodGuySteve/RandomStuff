#pragma once
#include <vector>
#include "Ability.h"

class Player{
public:
	Player();
	~Player();
	void addAbility(Ability* ability);
	std::vector <const Ability*> Player::clearAbilities();
	const std::vector <Ability*>& getAbilityList() const;
private:
	std::vector <Ability*> abilityList;
};

