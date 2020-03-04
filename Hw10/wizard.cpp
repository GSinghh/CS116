#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;


#include "wizard.h"

Wizard::Wizard()//default constructor
{
	healthPoints = 100;
	XP = 0;
	pointsForNextLevel = 12;
	maxHP = 100;
}

Wizard::Wizard(string N, string Mag)//Parameterized constructor
{
	Name = N;
	magic = Mag;
	healthPoints = 100;
}

void Wizard::getAttack() //Gets attack points
{
	int magicBonus;
	if (magic == "divine")
	{
		magicBonus = 5;
	}
	else if(magic == "arcane")
	{
		magicBonus = 2;
	}

	int randomNumber = 5 + rand() % 11;
	int aPoints = randomNumber + magicBonus; 
	cout << "Magic Power is: " << magicBonus << endl;
	cout << "Random Number is: " << randomNumber << endl;
	cout << "Total Attack Points Are: " << aPoints << endl;  

}

void Wizard::print() //Prints characteristics 
{
	cout << "Name is: " << Name << endl;
	cout << "HealthPoints are: " << healthPoints << endl;
	cout << "XP is: " << XP << endl;
	cout << "Magic Type is: " << magic << endl;
}

void Wizard::updateHP(int dam) //Updates HP after attack
{
	int magicBonus;
	if (magic == "divine")
	{
		magicBonus = 5;
	}
	else if(magic == "arcane")
	{
		magicBonus = 2;
	}
	healthPoints -= (dam - (magicBonus / dam));
	cout << healthPoints << endl;	
}
void Wizard::updateXP(int monsterLevelPoints) //Updates XP based on monster level 
{
	int characterLevel = 1;
	XP += (monsterLevelPoints - 2);
	if (XP >= pointsForNextLevel)
	{
		characterLevel++;
		cout << "Character Level has increased" << endl;
		cout << "Character Level is now: " << characterLevel << endl;
		Heal();
		maxHP +=  8;
		//magicBonus += 3;
		cout << "Magic Increased by 3 Points" << endl;
		cout << "Total healthPoints increased by 8" << endl;
		cout << "New total Amount: " << maxHP << endl;
		cout << "XP is reset" << endl;
	}
}
void Wizard::Heal() //Heals character back to full health
{
	for(int i = 0; i < maxHP- healthPoints; i++)
	{
		i + healthPoints;
	}
}
