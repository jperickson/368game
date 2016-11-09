#include <string>
#include "Character.hpp"

using namespace std;

Character::Character()
{
	name = "Default";
	vitality = 0;
	hp = 0;
	strength = 0;
	armor = 0;

	vector<Item> _inventory;
	inventory = _inventory;
}

Character::Character(string _name, int _hp, int vit, int str, int arm)
{
	name = _name;
	vitality = vit;
	hp = _hp;
	strength = str;
	armor = arm;

	vector<Item> _inventory;
	inventory = _inventory;
}

string Character::getCharName()
{
	return name;
}

int Character::getHP()
{
	return hp;
}

int Character::getVitality()
{
	return vitality;
}

int Character::getStrength()
{
	return strength;
}

int Character::getArmor()
{
	return armor;
}

void Character::addItem(Item it)
{
	this->inventory.push_back(it);
}

void Character::removeItem(Item it)
{
	//remove item
}

void Character::setHP(int _hp)
{
	this->hp = _hp;
}
