#pragma once
#include "Event.h"

//Class to manage events that are handled immediately, such as damage and healing, buffs, etc.
class ActionEvent :
	public Event
{
public:
	ActionEvent();
	virtual ~ActionEvent();
};

