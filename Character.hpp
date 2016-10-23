#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include <string>
#include <vector>
#include "Item.hpp"

using namespace std;

/**
 * @brief An abstract base class for a Character.
 */
class Character 
{
	private:
		string name;
		int vitality; //total hp
		int hp; //curent hp
		int strength;
		int armor;


	public:
	    /**
	     * @brief A parameterised constructor for a character
	     */
		Character(string _name, int hp, int vit, int str, int arm);

		string getCharacterName();
		int getHP();
		int getVitality();
		int getStrength();
		int getArmor();
};

#endif //CHARACTER_HPP
