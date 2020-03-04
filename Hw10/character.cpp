#include <iostream>
#include <string>

using namespace std;

#include "character.h"

Character::Character()
{
    Name = "None";
 // healthPoints = 80;
    XP = 0;
    pointsForNextLevel = 10;
}

Character::Character(string N)
{
    Name = N;
}


