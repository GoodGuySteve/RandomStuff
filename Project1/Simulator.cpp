#include "Simulator.h"

#define SIMTIME 300.0


Simulator::Simulator(){
}


Simulator::~Simulator(){
}

void Simulator::simulate(Player& player){
	//initialization
	aeQueue = new std::queue<ActionEvent>();
	peQueue = new std::priority_queue<PlayerEvent, std::vector<PlayerEvent>, std::greater<PlayerEvent>>();
	abilityList = &player.getAbilityList();

	maxTime = SIMTIME;
	startTime = 0;
	


	//cleanup
	delete peQueue;
	delete aeQueue;
}
