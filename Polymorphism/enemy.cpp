#include <iostream>

using namespace std;

#include "enemy.h"


void Enemy::Attack()
{
	Taunt();   //since virtual will call the version based on the object
	cout << "Attack inflicts " << damage << " damage points!" << endl;
}

Enemy::Enemy(int dmg = 10) //note default value of 10
{
	damage = dmg;
}

void Enemy::Taunt()
{
	cout << "The enemy says he will fight you" << endl;
}

void Enemy::setDamage(int d)
{
	damage = d;
}
