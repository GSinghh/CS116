#include "rectangle.h"

bool Rectangle::setLength(double len)
{
	//Make sure len is an acceptable value to store
	if (len <= 0)
		return false; // Bad Data
	//If here, data is good, store it.
	//Need to store len into length
	length = len;
	return true;
}

double Rectangle::getLength()
{
	//return the value of length
	return length;
}

bool Rectangle::setWidth(double wid)
{
	//Make sure wid is an acceptable value to store
	if (wid <=0)
		return false;
	//If here, data is good, store it.
	//Need to store wid into width
	width = wid;
	return true;
}

double Rectangle::getWidth()
{
	//return the value of width
	return width;
} 

double Rectangle::getArea()
{
	//Calculate and return the area 
	return length * width;

}
	
double Rectangle::getPerim()
{
	//Calculate and return the Perimeter
	return  (2 * length) + (2 * width);
}

Rectangle Rectangle::operator+(Rectangle other)
{
	Rectangle temp;
	temp.length = length + other.length;
	temp.width = width + othter.width;
	return temp;
}

Rectangle::Rectangle(double l,double w)
{
	length = l;
	width = w;
}

Rectangle Rectangle::Operator++()
{
	//prefix operator
	//increment the values of length and width in this object
	length++;
	width++;
	//return this object
	return *this;
}

Rectange operator++(int)
{
	//return the value of the unchanged object
	//then increment it
	Rectangle current(length, width);
	length++;
	width++;
	return current;
}
