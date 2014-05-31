#include "Simulator.h"


Simulator::Simulator(){
}


Simulator::~Simulator(){
}

void Simulator::simulate(const Player& player){
	//initialization
	aeQueue = new std::queue<ActionEvent>();
	peQueue = new std::priority_queue<PlayerEvent>();
	abilityList = &player.getAbilityList();


	//cleanup
	delete peQueue;
	delete aeQueue;
}
