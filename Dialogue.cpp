#include <string>
#include <iostream>
#include <unistd.h>

using namespace std;

string IntroDialogue()
{
	string name;
	string buf;

	cout << "You fade into consciousness in a dimly lit room." << endl;
	getline(cin, buf);
	cout << "A fog clouds your memory as you try to recall how you got here." << endl;
	getline(cin, buf);
	cout << "Your eyes close as your mind strains to remember... what is your name?" << endl;
	cout << "> ";
	getline(cin, name);
	cout << "Yes, that's it. " << name << " is your name." << endl;
	getline(cin, buf);
	cout << "With an effort you rise to your feet and take in the surroundings." << endl;
	getline(cin, buf);
	cout << "You notice a window look out. Before you lies rows of dark, seemingly deserted apartments." << endl;
	cout << "The few working street lights reveal several rusted cars that look like they haven't moved in decades." << endl;
	getline(cin, buf);
	cout << "In the distance you make out a sprawling skyline dominated by a single towering structure  with spires jutting out from each corner." << endl;
	getline(cin, buf);
	cout << "You refocus your gaze inwards to the room. It's bare, except for a toilet in the far corner, and a thin bed frame beneath the window." << endl;
	getline(cin, buf);
	cout << "As you cross the room, a white scrap of paper catches your eye. You pick it up and read it." << endl;
	getline(cin, buf);
	cout << "SCHEDULED FOR IMMEDIATE TERMINATION (CODE: QUINTUS)" << endl;
	getline(cin, buf);
	cout << "You hear the sound of approaching footsteps, and quickly grab a lead pipe laying by the toilet." << endl;
	getline(cin, buf);
	cout << "The door to the room slides open to reveal a thin man in a grey uniform. He jolts in surprise to see you conscious, and reaches for his gun" << endl;
	getline(cin, buf);
	return name;
}
