#include "Combat.hpp"
#include <ctime>
#include <cstdlib>

using namespace std;

void printStats(Character player, NPC enemy)
{
	cout << player.getCharName() << " health: " << player.getHP() << endl;
	cout << enemy.getCharName() << " health: " << enemy.getHP() << endl;
}

string CombatEncounter(Character player, NPC enemy)
{
	bool playerTurn = true;
	string buf;
	string message;
	srand((unsigned)time(0));
	int random;	

	while (player.getHP() > 0 && enemy.getHP() > 0)
	{
		if (playerTurn)
		{
			random = (rand()%100)+1;
			if (random > enemy.getArmor())
			{
				cout << player.getCharName() << " attacks " << enemy.getCharName() << " for " << player.getStrength() << " damage" << endl;
				enemy.setHP(enemy.getHP()-player.getStrength());
			}
			else
			{
				cout << player.getCharName() << " misses and deals no damage" << endl;
			}

			if (enemy.getHP() < 0)
			{
				enemy.setHP(0);
				cout << player.getCharName() << " kills " << enemy.getCharName();
			}			
		}
		else
		{
			random = (rand()%100)+1;
			if (random > player.getArmor())
			{
				cout << enemy.getCharName() << " attacks "<< player.getCharName() << " player for " << enemy.getStrength() << " damage" << endl;
				player.setHP(player.getHP()-enemy.getStrength());
			}

			else
			{
				cout << enemy.getCharName() << " misses and deals no damage" << endl;
			}
	
			if (player.getHP() < 0)
			{
				player.setHP(0);
				cout <<  enemy.getCharName() << " kills " << player.getCharName();
			}
		}

		if (playerTurn)
		{
			playerTurn = false;
		}
		else
		{
			playerTurn = true;
		}


		printStats(player, enemy);
		getline(cin, buf);
	}

	return message;
}

