#pragma once

#include "PlayerStats.h"
#include "Buff.h"
#include "Event.h"

//Basic ability class which contains all behaviors involving abilities
class Ability{
public:
	Ability();
	Ability(double baseDmg, double apScaling, double cooldown = 0);
	virtual ~Ability();
	virtual bool isUsable() const;
	virtual void onCast() = 0;
private:
	bool cooldownActive;
	double cooldown;
	double baseDmg;
	double apScaling;
};

//Simple damaging ability used for testing purposes
class TestPing : public Ability {
public:
	TestPing();
	TestPing(double damage, double scaling, double cooldown);
	virtual ~TestPing();
	virtual bool isUsable();
	virtual void onCast();
};