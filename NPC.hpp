#ifndef NPC_HPP
#define NPC_HPP

#include <string>
#include <vector>
#include "Item.hpp"
#include "Character.hpp"

using namespace std;

class NPC : public Character
{
	private:
		vector<string> dialogue;
	public:
		NPC(vector<string> dialogue, string name, int hp, int vit, int str, int arm);
		vector<string> getDialogue();
};

#endif //NPC_HPP
