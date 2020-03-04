#include <iostream>
#include <ctime>
#include <string>
#include <cstdlib>
#include <iomanip>
#include <vector>

using namespace std;
   
#include "character.h"
#include "novice.h"
#include "knight.h"
#include "wizard.h"
#include "monster.h"

void createCharacter(vector<Character*>&);
void printCharacter(vector<Character*>&);
void selectCharacter(vector<Character*>&, vector<Monster*>&);
void characterMenu(vector<Character*>&, int, vector<Monster*>&);
void findFight(vector<Character*>&, int, vector<Monster*>&);
void createMonsters(vector<Monster*>&);


int main()
{
	
	srand((time(0))); //Seed random number generator
	int option;
	vector <Character*> fighters; //Vector of base class pointers
	vector <Monster*> monsters; //Vector of Pointers which will store monster object

	
	while(option != 4)
	{
		cout << "1 - Create a Character" << endl;
		cout << "2 - Print all Character Stats" << endl;
		cout << "3 - Select a Character" << endl;
		cout << "4 - Quit" << endl;
		cout << "Choose an Option: ";
		cin >> option;
		if (option == 1)
		{
			createMonsters(monsters);//Create Monster function call
			createCharacter(fighters);//Creates Character function call
			cout << endl;
		}
		else if (option == 2)
		{
			printCharacter(fighters); //Function call to print all character stats
		}
		else if(option == 3)
		{
			cout << "You've chosen to select a character" << endl;	
			selectCharacter(fighters, monsters); //Selects character to fight
		}
		else if (option == 4)
		{
			cout << "Exiting Game" << endl; //Choice to quit
			break;
		}
	
	}
	return 0;
}

	
void createCharacter(vector<Character*>& fighters)
{
	char choice;
	string Name;
	string Weapon;
	int weaponPower;	
	int Luck;
	int armor;
	string magicType;

	while (toupper(choice) != 'Q')
	{
		cout << "There are 3 character types to choose from" << endl;
		cout << "(Novice,Knight,Wizard) Each have their own characteristics" << endl;
		cout << "Enter in the first letter of the character you want (N/K/W)" << endl;
		cout << "Or enter in Q to exit back to the main menu: ";
		cin >> choice;
		cout << "\n";
		if (toupper(choice) == 'N')
		{
			cout << "Enter in a Name for the Novice: ";
			cin >> Name;
			int Luck = 0 + rand() % 2;
			fighters.push_back(new Novice(Name,Luck));
			cout << "Character Created!" << endl;
			cout << "\n";
		}
		else if(toupper(choice) == 'K')
		{
			cout << "Enter in a Name for the Knight: ";
			cin >> Name;
			cout << "Choose a weapon (Sword/Mace): ";
			cin >> Weapon;
			if (Weapon == "Sword" || Weapon == "sword")
			{
				weaponPower = 10;
			}
			else if (Weapon == "Mace" || Weapon == "mace")
			{
				weaponPower = 15;
			}
			cout << "Enter in an amount of Armor: ";
			cin >> armor;
			fighters.push_back(new Knight(Name,Weapon,weaponPower,armor));
			cout << "Character created" << endl;
			cout << "\n";
		}
		else if (toupper(choice) == 'W')
		{
			cout << "Enter in a name for the Wizard: ";
			cin >> Name;
			cout << "Choose a magic type for the wizard (divine or arcane): ";
			cin >> magicType;
			fighters.push_back(new Wizard(Name,magicType));
			cout << "Character Created" << endl;
			cout << "\n";
		}
	}
}

void printCharacter(vector<Character*>& fighters)
{
	for(int i = 0; i < fighters.size(); i++)
	{
		fighters[i]->print();
	}

}

void selectCharacter(vector<Character*>& fighters, vector<Monster*>& monster)
{
	int choice;
	cout << "Here are your choices" << endl;
	for (int i = 0; i < fighters.size(); i++)
	{
		cout << i + 1 << ". " << fighters[i]->getName() << endl;
	}
	cout << "Select a character: ";
	cin >> choice;
	characterMenu(fighters, choice, monster);
	
	
}

void characterMenu(vector<Character*>& characters, int choice, vector<Monster*>& monsters)
{
	int option;
	while(option != 3)
	{
		cout << "1 - Find a fight" << endl;
		cout << "2 - Rest" << endl;
		cout << "3 - Quit" << endl;
		cout << "Enter Choice: ";
		cin >> option;
		if(option == 1)
		{
			findFight(characters, choice, monsters);
		}
		else if(option == 2)
		{
			cout << "Healing the character back to full health" << endl;
			characters[choice-1]->Heal();
			cout << "Character Health is now: " << characters[choice -1]->getHealthPoints() << endl;
		}
		else if(option == 3)
		{
			break;
		}
	
	
	}
}

void createMonsters(vector<Monster*>& enemies)
{
	//This function creates the monsters that the main characters has to fight
	enemies.push_back(new Monster("Dragon",12,30,4,50));
	enemies.push_back(new Monster("Spider",14, 35, 6,60));
	enemies.push_back(new Monster("Grim Reaper",16,40,8,70));
	
}

void findFight(vector<Character*>& characters, int choice, vector<Monster*>& Monsters)
{
	int attackChoice;
	int monsterChoice = 0 + rand() % 3;
	int monsterLevel = Monsters[monsterChoice]->getLevel();
	cout << "You must fight the " << Monsters[monsterChoice]->getName() << endl;
	cout << "1. Fight" << endl;
	cout << "2. Flee" << endl;
	cout << "Choice: ";
	cin >> attackChoice;
	if (attackChoice == 1)
	{
		cout << "You've Chosen to fight the monster" << endl;
		int damage = Monsters[monsterChoice]->getAttack();
		characters[choice - 1]->updateHP(damage);
		if(characters[choice -1]->getHealthPoints() <= 0)
		{
			cout << "You've been eliminated" << endl;
		}
		else
		{
			cout << "Enemy Elimated" << endl;
			cout << "Health is now: " << characters[choice -1]->getHealthPoints() << endl;
			characters[choice-1]->updateXP(monsterLevel);
			cout << "XP is now: " << characters[choice-1]->getXP() << endl;
		}
	}
	else if(attackChoice == 2)
	{
		cout << "You've Chosen to flee the scene and not fight the monster" << endl;
		return;
	}
	
	
	
}
