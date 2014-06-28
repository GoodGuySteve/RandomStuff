#include "Simulator.h"

#define SIMTIME 300.0


//Simulator::Simulator(){
//}

Simulator::Simulator(const Player& player) : player(player){
	//initialization
	aeQueue = new std::queue<ActionEvent>();
	peQueue = new std::priority_queue<PlayerEvent, std::vector<PlayerEvent>, std::greater<PlayerEvent>>();
}


Simulator::~Simulator(){
	//cleanup
	delete peQueue;
	delete aeQueue;
}

void Simulator::simulate(){

	maxTime = SIMTIME;
	startTime = 0;
	currentTime = startTime;

	//create first event to set as the current event (selected from rotation)
	while (maxTime > currentTime){
		//execute event's behavior
			//if event is a GCD, it should select a new ability event from the rotation
		//handle all ActionEvents

		//grab the next event off the queue
		//set the current time to the event's time
	}
}
