#include "Ability.h"


Ability::Ability(){
}

Ability::Ability(double baseDmg, double apScaling){
	this->baseDmg = baseDmg;
	this->apScaling = apScaling;
	cooldown = 0;
}

Ability::~Ability(){
}
