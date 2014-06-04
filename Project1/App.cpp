#include "App.h"


App::App(){
}


App::~App(){
}


void App::onExecute(){
	//player setup
	Player player;
	std::vector <Ability*> abilitiesToDelete;
	Ability* ability = new Ability(1, 0);
	abilitiesToDelete.push_back(ability);
	player.addAbility(ability);

	Simulator sim;
	sim.simulate(player);

	//cleanup
	std::vector<const Ability*> temp = player.clearAbilities();
	while (!abilitiesToDelete.empty()){
		delete abilitiesToDelete.back();
		abilitiesToDelete.pop_back();
	}
}

int main(int argc, char* argv[]){
	App app;
	app.onExecute();
	return 0;
}