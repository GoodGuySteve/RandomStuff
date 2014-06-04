#include "PlayerEvent.h"


PlayerEvent::PlayerEvent()
{
}

PlayerEvent::PlayerEvent(Player* player){
	this->caller = player;
}

PlayerEvent::~PlayerEvent()
{
}

Player* PlayerEvent::getCaller(){ return caller; }