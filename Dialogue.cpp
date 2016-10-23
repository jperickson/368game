#include <string>
#include <iostream>
#include <unistd.h>

using namespace std;

string IntroDialogue()
{
	string name;

	cout << "You fade into consciousness in a dimly lit alleyway..." << endl;
	usleep(1800000);
	cout << "A fog clouds your memory as you try to recall how you got here." << endl;
	usleep(3500000);
	cout << "Your eyes close as your mind strains to remember... what is your name?" << endl;
	cout << "> ";
	getline(cin, name);
	cout << "Yes, that's it. " << name << " is your name." << endl;
	usleep(500000);
	cout << "With an effort you rise to your feet and take in the surroundings." << endl;
	return name;
}
