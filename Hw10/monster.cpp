#include <iostream>
#include <string>

using namespace std;

#include "monster.h"

Monster::Monster() //default constructor
{
	armorClass = 10;
	HP = 20;
	level = 2;
}

Monster::Monster(string N, int AC, int HealthPoints, int l, int attackPoints) //parameterized constructor
{
	Name = N;
	armorClass = AC;
	HP = HealthPoints;
	level = l;
	attack = attackPoints;
}
