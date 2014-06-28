#include "Player.h"


Player::Player(){
}

void Player::addAbility(Ability* ability){
	abilityList.push_back(ability);
}

std::vector <const Ability*> Player::clearAbilities(){
	std::vector <const Ability*> retval;
	while (!abilityList.empty()){
		retval.push_back(abilityList.back());
		abilityList.pop_back();
	}
	return retval;
}

//const getters - return const references
const std::vector <Ability*>& Player::getAbilityList() const { return abilityList; }
const PlayerStats& Player::getPlayerStats() const { return playerStats; }

//mutable getters - return references
std::vector <Ability*>& Player::getAbilityList() { return abilityList; }
PlayerStats& Player::getPlayerStats() { return playerStats; }


Player::~Player()
{
}


