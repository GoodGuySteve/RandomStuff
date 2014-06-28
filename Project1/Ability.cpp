#include "Ability.h"


Ability::Ability(){
}

Ability::Ability(double baseDmg, double apScaling, double cooldown) :
apScaling(apScaling),
baseDmg(baseDmg),
cooldown(cooldown) {
};

bool Ability::isUsable() const{
	return !cooldownActive;
}

Ability::~Ability(){
}

TestPing::TestPing(){
}

TestPing::TestPing(double baseDmg, double apScaling, double cooldown) :
Ability(baseDmg, apScaling, cooldown){
}

bool TestPing::isUsable(){
	return Ability::isUsable();
}
void TestPing::onCast(){

}

TestPing::~TestPing(){
}