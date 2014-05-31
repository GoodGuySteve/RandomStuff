#include "Player.h"


Player::Player()
{
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

const std::vector <Ability*>& Player::getAbilityList() const {return abilityList;}

Player::~Player()
{
}
