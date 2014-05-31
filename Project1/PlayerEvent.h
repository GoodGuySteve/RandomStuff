#pragma once
#include "Event.h"

//Class to manage timed events affecting the player's status (cooldowns, channeling, expiring buffs, etc.)
class PlayerEvent :
	public Event
{
public:
	PlayerEvent();
	virtual ~PlayerEvent();
};

