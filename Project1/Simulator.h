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
	Simulator(Player);
	~Simulator();
	void simulate(Player& player);
private:
	//workflow containers for simulator
	std::priority_queue <PlayerEvent, std::vector<PlayerEvent>, std::greater<PlayerEvent>>* peQueue;
	std::queue <ActionEvent>* aeQueue;

	//simulator parameters
	const std::vector <Ability*>* abilityList;
	const PlayerStats* stats;

	//timer functions for simulator
	double startTime; 
	double maxTime; 
	double currentTime;
};

