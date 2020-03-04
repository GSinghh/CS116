#include <iostream>
#include <string>

using namespace std;

#include "player.h"



Player::Player()
{
	pName = "None";
	pNum = 10;
}

Player::Player(string playerName, int playerNumber)
{
	pName = playerName;
	pNum = playerNumber;

}

void Player::setName(string playerName)
{
	pName = playerName;
}

string Player::getName()
{
	return pName;
}

void Player::setNum(int playerNumber)
{
	pNum = playerNumber;
}

int Player::getNum()
{
	return pNum;
}
