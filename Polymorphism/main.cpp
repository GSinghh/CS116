#include <iostream>
#include <string>
#include <vector>

using namespace std;

#include "enemy.h"
#include "boss.h"

int main()
{
	int choice;
	char person;
	int damage;
	string weapon;
	vector <Enemy*> enemies;

	while(choice != 3)
	{
		cout << "1 - New Character" << endl;
		cout << "2 - All Fight!" << endl;
		cout << "3 - Quit" << endl;
		cout << "Enter Choice: ";
		cin >> choice;
		
		if (choice == 1)
		{
			cout << "Enter E for enemy, B for Boss: ";
			cin >> person;
		
			if (toupper(person) == 'B')
			{
				cout << "Enter amount of damage: ";
				cin >> damage;
				cout << "Enter Weapon of choice: ";
				cin >> weapon;
				enemies.push_back(new Boss obj(damage, weapon));
				cout << endl;
			}

			else if (toupper(person) == 'E')
			{	
				cout << "Enter amount of damage: ";
				cin >> damage;
				
				enemies.push_back(new Enemy obj(damage));
				cout << endl;
			}
		}

		else if (choice == 2)
		{
			if (enemies.size() == 0)
			{
				cout << "No characters exist yet" << endl;
			}
			else
			{
				for (int i = 0; i < enemies.size(); i++)
				{
					enemies[i]->Attack();

				}
			}
			
		}
		else
		{
			cout << "Goodbye" << endl;
			for (int i = 0; i < enemies.size(); i++)
			{
				delete enemies[i];
			}
			break;
		}
	}

}
