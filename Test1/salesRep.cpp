#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

#include "salesRep.h"

SalesRep::SalesRep() //Default constructor
{
	Name = "Bob";
	productOne = 100.00;
	productTwo = 250.00;
}

SalesRep::SalesRep(string salesRep, double p1, double p2) //Overloaded constructor
{
	Name = salesRep;
	productOne = p1;
	productTwo = p2;
}

void SalesRep::setName(string salesRep) //set Name function
{
	Name = salesRep;
}

string SalesRep::getName() //returns name
{
	return Name;
}

void SalesRep::setProductOne(double p1) //set price for first product
{
	productOne = p1;
}

double SalesRep::getProductOne() //returns price for first product
{
	return productOne;
}

void SalesRep::setProductTwo(double p2) //sets price for product two
{
	productTwo = p2;
}

double SalesRep::getProductTwo() //returns price for product two
{
	return productTwo;
}

double SalesRep::getTotalSales() //calculates total sales
{
	return productOne + productTwo;
}

double SalesRep::getCommission()//Calculates commission based off of total sales
{
	double totalSales = productOne + productTwo;
	double commission;
	if (totalSales < 4000) //if sales are less than 4000, 5% commission
	{
		commission = totalSales * 0.05;
	}
	if (totalSales < 8000) //if sales are less than 8000, 7% commission
	{
		commission = totalSales * 0.07;
	}
	if (totalSales >= 8000) //if sales are greater than 10000, 10% commission
	{
		commission = totalSales * 0.10;
	}
	return commission;
}
