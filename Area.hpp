#ifndef AREA_HPP
#define AREA_HPP

#include <string>
#include <vector>
#include "Item.hpp"
#include "NPC.hpp"
//#include "Path.hpp"

using namespace std;

class Area
{
	private:
		string name;
		vector<Item> items;
		vector<NPC> npcs;
		vector<Area> paths;
		bool blocked;

	public:
		Area(string name, vector<Item> items, vector<NPC> npcs, vector<Area> paths);

		string getName();
		vector<Item> getItems();
		vector<NPC> getNPCs();
		vector<Area> getPaths();
		void unblock();
		void block();
};

#endif //AREA_HPP
