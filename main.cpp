#include <iostream>
#include <fstream>
#include <vector>
#include <string>

#include "Dialogue.hpp"
#include "Character.hpp"
#include "Item.hpp"
#include "NPC.hpp"

//#include "objects/objects.hpp"
//#include "util/util.hpp"

using namespace std;

int main(int argc, char *argv[]) 
{
	string input;

	//create player with input name from user
	input = IntroDialogue();

	Character p1("Grom",100,90,3,0);

	vector<string> jindalDialogue;
	NPC merchant(jindalDialogue,"Jindal",60,60,1,10);

    return 0;
}
