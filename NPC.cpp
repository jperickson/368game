#include <string>
#include "NPC.hpp"

using namespace std;

NPC::NPC(vector<string> _dialogue, string name, int hp, int vit, int str, int arm)
	: Character(name, hp, vit, str, arm)
{
	dialogue = _dialogue;
}

vector<string> NPC::getDialogue()
{
	return dialogue;
}
