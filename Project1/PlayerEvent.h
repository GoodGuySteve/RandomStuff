#pragma once
#include "Event.h"
#include "Player.h" // event uses player pointer to get all necessary information for its execution

//Class to manage timed events affecting the player's status (cooldowns, channeling, expiring buffs, etc.)
class PlayerEvent :
	public Event
{
public:
	PlayerEvent();
	PlayerEvent(Player*);
	virtual ~PlayerEvent();

	Player* getCaller();
private:
	Player* caller;
};

