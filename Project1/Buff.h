#pragma once

#include "PlayerStats.h"

//All the buffs which can be applied to players, which take PlayerStats, modify them, and return the new stats
class Buff
{
public:
	Buff();
	virtual ~Buff();
	//TODO make abstract
};

