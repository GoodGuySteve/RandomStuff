#pragma once

//Basic ability class - will derive from it for channeled abilities, cast time, instant, etc.
class Ability{
public:
	Ability();
	Ability(double baseDmg, double apScaling);
	virtual ~Ability();
	//virtual void onCast();
private:
	double cooldown;
	double baseDmg;
	double apScaling;
};

