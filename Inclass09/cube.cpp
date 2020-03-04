#include <iostream>

using namespace std;

#include "cube.h"

Cube::Cube()
{
	height = 0;
}

Cube::Cube(double len, double wid, double h)
{
	height = h;
	setLength(len);
	setWidth(wid);
}

void Cube::setHeight(double h)
{
	height = h;
}

double Cube::getVolume()
{
	//volume is surface area multiplied by height
	return getArea() * height;
}

ostream& operator<<(ostream &out, Cube right)
{
	out << "L: " << right.getLength() << ", W: " << right.getWidth() << ", H: " << right.getHeight() << endl;
}
