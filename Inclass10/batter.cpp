#include <iostream>
#include <string>

using namespace std;

#include "batter.h"

Batter::Batter()
{
	Hits = 1;
	atBats = 1;
}

Batter::Batter(string na, int nu, int h, int atB)
{
	pName = na;
	pNum = nu;
	Hits = h;
	atBats = atB;
}

double Batter::getBattingAVG()
{
	return ((double)Hits / double(atBats));
}

