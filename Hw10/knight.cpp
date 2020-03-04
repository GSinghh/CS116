#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;


#include "knight.h"

Knight::Knight() //default constructor
{
	healthPoints = 120;
	XP = 0;
	pointsForNextLevel = 15;
	maxHP = 120;
}

Knight::Knight(string N, string weapon, int wP, int arm) //parameterized constructor
{
	Name = N;
	weaponName = weapon;
	weaponPower = wP;
	armor = arm;
	healthPoints = 120;
	maxHP = 120;
}

void Knight::getAttack() //Gets attack Points
{
	int randomNumber = 10 + rand() % 11;
	int aPoints = randomNumber + weaponPower; 
	/*cout << "Weapon Power is: " << weaponPower << endl;
	cout << "Random Number is: " << randomNumber << endl;
	cout << "Total Attack Points Are: " << aPoints << endl;
	*/  
}

void Knight::print() //Prints out character stats
{
	cout << "Name is: " << Name << endl;
	cout << "HealthPoints are: " << healthPoints << endl;
	cout << "XP is: " << XP << endl;
	cout << "Weapon Type is: " << weaponName << endl;
	cout << "Weapon Power is: " << weaponPower << endl;
	cout << "Amount of Armor is: " << armor << endl;
}

void Knight::updateXP(int monsterLevel) //Updates XP after monster fight
{
	XP += monsterLevel - 1;
	int characterLevel = 1;
	//Updates XP after fight
	if (XP >= pointsForNextLevel)
	{
		characterLevel++;
		cout << "Character Level has increased" << endl;
		cout << "Character Level is now: " << characterLevel << endl;
		Heal();
		maxHP +=  15;
		cout << "Total healthPoints increased by 15" << endl;
		cout << "New total Amount: " << maxHP << endl;
		cout << "XP is reset" << endl;
		armor += 1;
		cout << "Armor also increased by 1 point" << endl;
		XP = 0;
		cout << endl;
	}
}

void Knight::updateHP(int dam) //updates HP
{
	healthPoints = dam - armor;
}

void Knight::Heal() //Heals character back to full health
{
	for(int i = healthPoints; i < maxHP; i++)
	{
		healthPoints++;	
	}
}
