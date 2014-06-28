#include "App.h"


App::App(){
}


App::~App(){
}


void App::onExecute(){
	//player setup
	Player player;
	//TODO add abilities, etc. to player

	Simulator sim(player);
	sim.simulate();
}

int main(int argc, char* argv[]){
	App app;
	app.onExecute();
	return 0;
}