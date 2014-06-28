#pragma once
#include <iostream>
#include <queue>
#include <functional> //std::greater
#include "PlayerEvent.h"
#include "ActionEvent.h"
#include "Player.h"

class Simulator {
public:
	Simulator();
	Simulator(const Player&);
	~Simulator();
	void simulate();
private:
	//workflow containers for simulator
		//need a structure for holding the rotation/ability priority
	std::priority_queue <PlayerEvent, std::vector<PlayerEvent>, std::greater<PlayerEvent>>* peQueue;
	std::queue <ActionEvent>* aeQueue;

	//player state for duration of simulation
	Player player;

	//timer functions for simulator
	double startTime; 
	double maxTime; 
	double currentTime;
};

