
#include <iostream>
#include <fstream>
#include <vector>
#include <string>

#include "Dialogue.hpp"
#include "Character.hpp"
#include "Item.hpp"
#include "NPC.hpp"
#include "Area.hpp"
#include "World.hpp"
#include "Combat.hpp"

using namespace std;

int main(int argc, char *argv[]) 
{
	string playerName;

	// Display intro dialogue and get player name
	playerName = IntroDialogue();
	World gameWorld(playerName);

	cout << CombatEncounter(gameWorld.getPlayer(), gameWorld.getArea(0).getNPCs().at(0)) << endl;

	ApartmentExploration();	

	EndingPreBattleDialogue();
	cout << CombatEncounter(gameWorld.getPlayer(), gameWorld.getArea(0).getNPCs().at(0)) << endl;
	EndingPostBattleDialogue();

    return 0;
}
