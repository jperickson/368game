#ifndef WORLD_HPP
#define WORLD_HPP

#include "Item.hpp"
#include "Character.hpp"
#include "NPC.hpp"
#include "Area.hpp"

using namespace std;

class World
{
	private:
		vector<Area> areas;
		Character player;

	public:
		World(string name);

		vector<Area> getAreas();
		Area getArea(int index);
		Character getPlayer();
};

#endif //WORLD_HPP
