#pragma once

#include "PlayerStats.h"

class Event{
public:
	Event();
	virtual ~Event();

	bool operator>(const Event&);
	bool operator<(const Event&);
	bool operator>=(const Event&);
	bool operator<=(const Event&);
private:
	double timeTriggeredAt;
};

