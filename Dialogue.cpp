#include <string>
#include <iostream>
#include <unistd.h>

using namespace std;

string IntroDialogue()
{
	string name;
	string buf;
	string helpmsg;

	cout << "You fade into consciousness in a dimly lit room." << endl;
	getline(cin, buf);
	cout << "A fog clouds your memory as you try to recall how you got here." << endl;
	getline(cin, buf);
	cout << "Your eyes close as your mind strains to remember... what is your name?" << endl;
	cout << "> ";
	getline(cin, name);
	cout << "Yes, that's it. " << name << " is your name." << endl;
	getline(cin, buf);
	cout << "With an effort you rise to your feet and take in the surroundings..." << endl;
	getline(cin, buf);
	
	cout << "**The room is bare. Besides the mattress that you woke up on, there is a WINDOW and a TOILET.**" << endl;
	helpmsg = "**press 'w' and then ENTER to examine the WINDOW, press 't' and then ENTER to examine the TOILET.**";
	cout << helpmsg << endl;

	bool toiletVisited = false;

	while(!toiletVisited) {
		cout << "> "; 
		getline(cin, buf);
		if(buf == "w" || buf == "W") {
			cout << "You approach the window and peer outside. You see rows of dark, seemingly deserted apartments. " << endl <<
				"The few working street lights reveal several rusted cars that look like they haven't moved in decades. " << endl <<
				"In the distance you make out a sprawling skyline dominated by a single towering structure with spires " << endl <<
				"jutting out from each corner." << endl;
			cout << "You refocus your gaze inwards to the room. Is that a scrap of paper on the floor next to the toilet?" << endl;
		} else if (buf == "t" || buf == "T") {
			cout << "You cross the room and see a scrap of discarded paper on the ground next to the toilet. " << endl <<
				"You pick it up and read it. There, written in carefully printed monospace text, it said:" << endl << endl;
			cout << "SCHEDULED FOR IMMEDIATE TERMINATION (CODE: QUINTUS)" << endl << endl;
			cout << "What does QUINTUS mean, you wonder... but then you hear the sound of approaching footsteps. " << endl <<
				"You notice a rusted lead pipe laying by the toilet and grab it. The footsteps grow louder until " << endl <<
				"suddenly the door to the room is pushed open to reveal a thin man in a grey uniform. " << endl << 
				"He first looks at the empty bed, " << "and then turns to you with wide eyes. " << endl << 
				"He reaches for his matte black pistol." << endl;
			toiletVisited = true;
		} else {
			cout << helpmsg << endl;
		}
	}	

	return name;
}

void ApartmentExploration() {
	string buf;
	string helpmsg;

	cout << "Wow! That was close." << endl;
	getline(cin, buf);
	cout << "You try to calm yourself as the adrenaline from the fight still surges through you." << endl;
	getline(cin, buf);
	cout << "Lookin back, you see the limp body of the man you just killed. You look down at your hands. They're shaking." << endl;
	getline(cin, buf);
	cout << "You regain your bearings and look around. You're in a hallway with numerous identical, nondescript doors." << endl;
	getline(cin, buf);
	cout << "You need to get out of here before more people that want to kill you show up. Why was he trying to kill you anyway?" << endl;
	getline(cin, buf);
	cout << "Whatever. You just need to focus on getting somewhere safe." << endl;
	getline(cin, buf);
	cout << "You look to your left. About 30 meters away, there are some stairs at the end of the hall. At the end of the hall to" <<
		endl << "the right, there is an elevator with a crooked door. Maybe it still works?" << endl;
	getline(cin, buf);
	cout << "**Do you head to the left and the stairs, or to the right and the elevator?**" << endl;
	cout << "**press 'l' to try the stairs, press 'r' to try the elevator**" << endl;
	cout << "> ";
	getline(cin, buf);
	
	//if left	
	while(true) {
		if(buf == "l" || buf == "L") {
			cout << "You creep down the stairs, unsure if there might be another man in grey just around the corner." << endl;
			getline(cin, buf);
			cout << "When you peer around the corner of the staircase, you're relieved. There's no one." << endl;	
			getline(cin, buf);
			cout << "A sign on the side of the staircase indicates you're on the 6th floor, so you carefully make your way down more stairs." << endl;
			getline(cin, buf);
			cout << "As you descend to the second floor, you stop in your tracks. There's a beeping sound coming from down the hall." << endl;
			getline(cin, buf);
			cout << "You don't see or hear anyone coming to investigate. You should probably just keep going down, but... " << endl;
			getline(cin, buf);
			cout << "What if there's something that explains why you're here? Might be worth investigating." << endl;
			getline(cin, buf);
			cout << "**Do you go check out the beeping sound or continue down to the ground floor?**" << endl;
			cout << "**press 'i' to investigate, press 'k' to keep going**" << endl;
			getline(cin, buf);

			while(true) {
				if(buf == "i" || buf == "I") {
					cout << "You walk down the hall to try and find where the sound is coming from while looking out for enemies." << endl;
					getline(cin, buf);
					cout << "You figure out it's coming from room 211 and quietly lean your ear to the door to hear if there's anyone in the room already." << endl;
					getline(cin, buf);
					cout << "When you don't hear anything, you push the door open as softly as you can and enter." << endl;
					getline(cin, buf);
					cout << "The room is deserted. It's identical to the one you woke up in, except for the source of the beeping." << endl;
					getline(cin, buf);
					cout << "The beeping is coming from a device on the ground next to the bed. It looks like a standard datapad." << endl;
					getline(cin, buf);
					cout << "The reason for the beeping is an incoming video call. You press ignore and unlock the device with a key card you took from the guy upstairs."<<endl;
					getline(cin, buf);
					cout << "Looking for anything that might explain your situation, you hit an icon labeled Daily Log." << endl;
					getline(cin, buf);
					cout << "A specific entry catches your eye:" << endl;
					getline(cin, buf);
					cout << "****another disapperearing job today, I wonder why there have been so many recently. That said, my superiors seems way more uptight " << endl <<
						"about this one. Don't know much about this guy, but it sounds like he was someone important before the memory wipe. The captain was " << endl <<
						"being very secretive too, telling Nick and I not to tell anyone about it, which was odd. I wonder what this guy did. Oh well. " << endl <<
						"Can't do much about it now. Better to get this over with and get back to hq. " << endl;
					getline(cin, buf);
					cout << "Memory wipe? You start to realize that this entry is about you. You're trying to remember anything specific before you woke up, " << endl <<
						"but then the datapad starts beeping again. A voice call, from Nick same as before. That must be this guy's partner." << endl;
					getline(cin, buf);
					cout << "You figure time is running short and this guy will come looking for you soon." << endl;
					getline(cin, buf);
					cout << "You head back down the stair to the ground floor." << endl;
					getline(cin, buf);
					break;	
				} else if(buf == "k" || buf == "K") {
					break;
				} else {
					cout << "**press 'i' to investigate, press 'k' to keep going**" << endl;
					cout << "> " << endl;
					getline(cin, buf);
				}
			}
			break;
		} else if(buf == "r" || buf == "R") {
			cout << "You enter the elevator and press the button for the ground floor. It's time to get out of here." << endl;
			getline(cin, buf);
			break;
		} else {
			cout << "**press 'l' to try the stairs, press 'r' to try the elevator**" << endl;
			cout << "> ";
			getline(cin, buf);
		}
	
	}
	
}

void EndingPreBattleDialogue() {
	string buf;

	cout << "You walk into the run-down lobby of the building, your mind still trying to understand what you just saw." << endl;
	getline(cin, buf);
	cout << "You round a corner to come face-to-face with another man in grey." << endl;
	getline(cin, buf);
	cout << "He yells in shock and reaches for his weapon..." << endl;
	getline(cin, buf);
}

void EndingPostBattleDialogue() {
	string buf;
	
	cout << "You've killed another man. In disbelief and hurt, you lurch to the doors. 'Just get out of here' you tell yourself." << endl;
	getline(cin, buf);
	cout << "You exit the building into the night and it's initially silent and cool, with a slight wind. You start to hear things, however." << endl;
	getline(cin, buf);
	cout << "First you hear sirens, and they're getting closer. That's not good. But then you hear the high pitched whine of an accelerating car." << endl;
	getline(cin, buf);
	cout << "The car doesn't sound like a city patrol cruiser, it sounds dirtier, more powerful." << endl;
	getline(cin, buf);
	cout << "A black, beat up sport cruiser careens around the street corner, police sirens reflecting off the apartment buildings behind it." << endl;
	getline(cin, buf);
	cout << "The car screeches to a stop right in front of you. A woman rolls down her window and yells, 'GET IN THE CAR NOW, WE'RE HERE TO SAVE YOU!'" << endl;
	getline(cin, buf);
	cout << "You look back to the right and see the patrol cruisers turn the corner. There are at least 4 cruisers." << endl;
	getline(cin, buf);
	cout << "You look back at this woman that you don't know, and you remember the two men you've killed." << endl;
	getline(cin, buf);
	cout << "You get in the car. 'Who are you?' you ask." << endl;
	getline(cin, buf);
	cout << "'I'm the one with the answers,' she responds." << endl;
	getline(cin, buf);
	cout << "The car accelerates suddenly and you're speeding away from the pursuit. As you turn the corner, you wonder if you've made the right choice." << endl;
	
}



