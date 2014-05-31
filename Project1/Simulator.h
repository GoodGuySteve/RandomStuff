#pragma once
#include <iostream>
#include <queue>
#include "PlayerEvent.h"
#include "ActionEvent.h"
#include "Player.h"

class Simulator {
public:
	Simulator();
	Simulator(Player);
	~Simulator();
	void simulate(const Player& player);
private:
	std::priority_queue <PlayerEvent>* peQueue;
	std::queue <ActionEvent>* aeQueue;
	const std::vector <Ability*>* abilityList;
	unsigned int simTime; //simulation time in seconds
};

