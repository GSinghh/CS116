#include <iostream>
#include <string>

using namespace std;

#include "pitcher.h"

Pitcher::Pitcher()
{
	innings = 0;
	runs = 0;
}

Pitcher::Pitcher(string na, int nu, int i, int r)
{
	//with protected i can set everything
	pName = na;
	pNum = nu;
	innings = i;
	runs = r;
}

double Pitcher::getERA()
{
	return ((double)runs / innings) * 9;
}
