#include <iostream>
#include <cstdlib>
#include <string>


using namespace std;

#include "novice.h"

Novice::Novice() //Default constructor
{
    healthPoints = 80;
    XP = 0;
    pointsForNextLevel = 10;
}

Novice::Novice(string N, int L) //Parameterized constructor
{
    Name = N;
    luck = L;
    healthPoints = 80;
    maxHP = 80;
}

void Novice::setLuck(int L) //sets value for luck
{
    luck = L;
}

void Novice::print() //Prints characteristics for novice
{
	cout << "Name is: " << Name << endl;
	cout << "HealthPoints are: " << healthPoints << endl;
	cout << "XP is: " << XP << endl;
	cout << "Character Luck is: " << luck << endl;
}

void Novice::getAttack() //gets attack points
{
   
    int randomNumber = 1 + rand() % 10;
    int aPoints = randomNumber + luck;
    /*cout << "Luck is: " << luck << endl;
    cout << "Random Number is: " << randomNumber << endl;
    cout << "Total Attack Points Are: " << aPoints << endl; 
	*/   
}

void Novice::updateHP(int dam) //Updates HP after attack
{
	//UpdatesHP after Damage
	healthPoints -= dam;
}

void Novice::updateXP(int monsterLevelPoint) //Updates XP based on monster level
{
	int characterLevel = 1;
	//Updates XP after fight
	XP += monsterLevelPoint;
	if (XP >= pointsForNextLevel)
	{
		characterLevel++;
		cout << "Character Level has increased" << endl;
		cout << "Character Level is now: " << characterLevel << endl;
		luck = luck + (3 + rand() % 3);	
		cout << "Luck has also increased" << endl;
		cout << "Luck is now: " << luck << endl;
		Heal();
		maxHP +=  10;
		cout << "Total healthPoints increased by 10" << endl;
		cout << "New total Amount: " << maxHP << endl;
		cout << "XP is reset" << endl;
		XP = 0;
		cout << endl;
	}
}

void Novice::Heal() //Heals character back to full health
{
	for(int i = healthPoints; i < maxHP; i++)
	{
		healthPoints++;	
	}
}
