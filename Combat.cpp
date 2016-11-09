#include "Combat.hpp"

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

	while (player.getHP() > 0 && enemy.getHP() > 0)
	{
		if (playerTurn)
		{
			cout << player.getCharName() << " attacks " << enemy.getCharName() << " for 15 damage" << endl;
			enemy.setHP(enemy.getHP()-15);
			if (enemy.getHP() < 0)
			{
				enemy.setHP(0);
				message = player.getCharName() + " kills " + enemy.getCharName();
			}			
		}
		else
		{
			cout << enemy.getCharName() << " attacks "<< player.getCharName() << " player for 10 damage" << endl;
			player.setHP(player.getHP()-10);
			if (player.getHP() < 0)
			{
				player.setHP(0);
				message = enemy.getCharName() + " kills " + player.getCharName();
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

