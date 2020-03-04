
#include <iostream>
#include <iomanip>
#include <string>
#include <vector>

using namespace std;

#include "pizza.h"

Pizza::Pizza()//Default Constructor
{
	Name = "Default";
	pizzaSize = ' ';
	
}

bool Pizza::setSize(char pizzaS) //used for input validation for setSize
{
	if (toupper(pizzaS) == 'S' || toupper(pizzaS) == 'M' || toupper(pizzaS) == 'L')
	{
		pizzaSize = pizzaS;
		return true;
	}
	else
	{
		return false;	
	}
}

char Pizza::getSize() //returns pizzaSize
{
	return toupper(pizzaSize);
}

void Pizza::setName(string customerName)//sets Customer Name
{
	Name = customerName
;
}

string Pizza::getName() //returns name
{
	return Name;
}

void Pizza::addTopping(string Toppo) //adds toppings into vector
{
	toppings.push_back(Toppo);
}

void Pizza::clearTopping()//clears toppings out of vector
{
	toppings.clear();
}

double Pizza::getPrice()
{
	double totalPrice;
	if (toupper(pizzaSize) == 'S')
	{
		totalPrice = 10 + (toppings.size() * 2);
		return totalPrice;
	}
	
	if (toupper(pizzaSize) == 'M')
	{
		totalPrice = 14 + (toppings.size() * 2);
		return totalPrice;
	}

	if (toupper(pizzaSize) == 'L')
	{
		totalPrice = 17 + (toppings.size() * 2);
		return totalPrice;
	}
}

void Pizza::display()//display function which prints out Name,size,toppings, and price.
{
	string customerSize;
	if (toupper(pizzaSize) == 'S')
	{
		customerSize = "Small";
	}
	if (toupper(pizzaSize) == 'M')
	{
		customerSize = "Medium";
	}
	if (toupper(pizzaSize) == 'L')
	{
		customerSize = "Large";
	}
	cout << "Customer Name: " << Name << endl;
	cout << customerSize << " Pizza " << (toppings.size() - 1) << " toppings" << endl;
	for (int i = 0; (i < toppings.size() - 1); i++)
	{	
		cout << toppings[i] << "  ";
	}
	cout << "\n";	
	cout << "Price: $" << setprecision(2) << fixed << getPrice() << endl;
	cout << "\n";
	
}


