#include <iostream>

using namespace std;

#include "boss.h"

Boss::Boss()
{
	damage = 30;
	weapon = "AX";
}

Boss::Boss(int dmg, string w)
{
	damage = dmg;
	weapon = w;
}

void Boss::Taunt()
{
	cout << "The boss says he will end your pitiful existence with his " << weapon << endl;
}

void Boss::setWeapon(string w)
{
	weapon = w;
}
