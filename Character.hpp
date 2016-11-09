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
		vector<Item> inventory;
	
	public:
	    /**
	     * @brief A parameterised constructor for a character
	     */
		Character(string _name, int hp, int vit, int str, int arm);
		Character();

		string getCharName();
		int getHP();
		void setHP(int hp);
		int getVitality();
		int getStrength();
		int getArmor();
		void addItem(Item it);
		void removeItem(Item it);
};

#endif //CHARACTER_HPP
