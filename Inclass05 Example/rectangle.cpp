#include <iostream>
using namespace std;

#include "rectangle.h"

//default constructor
Rectangle::Rectangle()
{
	//Initialize length and width
	length = 0;
	width = 0;
	//cout << "Constructor called " << endl;
}

Rectangle::Rectangle(double len)
{
	length = len;
	width = len;
}

Rectangle::~Rectangle()
{
	cout << "Goodbye\n";
}

Rectangle::Rectangle(double len, double wid)
{
	length = len;
	width = wid;
}

bool Rectangle::setLength(double len)
{
	if (len < 0)
		return false;
	length = len;
	return true;	
}

bool Rectangle::setWidth(double wid)
{
	if (wid < 0)
		return false;
	width = wid;
	return true;
}
