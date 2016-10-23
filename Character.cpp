#include <string>
#include "Character.hpp"

using namespace std;

Character::Character(string _name, int _hp, int vit, int str, int arm)
{
	name = _name;
	vitality = vit;
	hp = _hp;
	strength = str;
	armor = arm;
}

string Character::getCharacterName()
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


