#include "Area.hpp"

using namespace std;

Area::Area(string _name, vector<Item> _items, vector<NPC> _npcs, vector<Area> _paths)
{
	name = _name;
	items = _items;
	npcs = _npcs;
	paths = _paths;
}

string Area::getName()
{
	return this->name;
}

vector<Item> Area::getItems()
{
	return this->items;
}

vector<NPC> Area::getNPCs()
{
	return this->npcs;
}


vector<Area> Area::getPaths()
{
	return this->paths;
}

void Area::unblock()
{
	this->blocked = false;
}

void Area::block()
{
	this->blocked = true;
}

