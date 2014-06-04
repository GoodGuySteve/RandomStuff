#include "Event.h"


Event::Event()
{
}

Event::~Event()
{
}

bool Event::operator>(const Event& other){
	return this->timeTriggeredAt > other.timeTriggeredAt;
}

bool Event::operator<(const Event& other){
	return this->timeTriggeredAt < other.timeTriggeredAt;
}

bool Event::operator>=(const Event& other){
	return this->timeTriggeredAt >= other.timeTriggeredAt;
}

bool Event::operator<=(const Event& other){
	return this->timeTriggeredAt <= other.timeTriggeredAt;
}