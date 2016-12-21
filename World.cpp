#include "World.hpp"

using namespace std;

World::World(string name)
{
	/* Items */
	Item pipe("Lead pipe", "A rusted lead pipe with a kink in the end", false, 1);

	/* NPCs */
	vector<string> guardDialogue;
	NPC guard(guardDialogue, "Guard", 40, 40, 20, 75);

	/* Player */
	Character _player(name, 80, 100, 10, 40);
	_player.addItem(pipe);

	/* Areas */
	vector<NPC> roomNPC;
	roomNPC.push_back(guard);
	vector<Area> roomPaths;
	vector<Item> roomItems;
	roomItems.push_back(pipe);

	Area startingRoom("Room", roomItems, roomNPC, roomPaths);

	/* World */
	vector<Area> initAreas;
	initAreas.push_back(startingRoom);
	areas = initAreas;
	player = _player;
}

vector<Area> World::getAreas()
{
	return this->areas;
}

Area World::getArea(int index)
{
	return this->areas.at(index);
}

Character World::getPlayer()
{
	
	return this->player;
}
