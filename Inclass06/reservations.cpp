#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

#include "reservations.h"
#include "date.h"

Reservations::Reservations()
{
	Name = " ";
	nDays = 1;
	ppDay = 99;

}

Reservations::Reservations(string n, Date ChekIn, int numOfDays, double totalPrice)
{


}

void Reservations::setName(string n)
{
	Name = n;
}

string Reservations::getName()
{
	return Name;
}

void Reservations::setNumOfDays(int numOfDays)
{
	nDays = numOfDays;
}

int Reservations::getNumOfDays()
{
	return nDays;
}

void Reservations::setPricePerDay(double pricePerDay)
{
	ppDay = pricePerDay;
}

double Reservations::getPricePerDay()
{
	return ppDay;
}

void Reservations::setCheckIn(int m, int d, int y)
{
	checkIn.setDate(m,d,y);
}

Date Reservations::getCheckIn()
{
	return checkIn;
}

Date Reservations::getCheckOut()
{
	Date checkOut = checkIn;
	for (int i = 1; i <= nDays; i++)
	{
		checkOut.increment();	
	}
	return checkOut;
	
}

double Reservations::getTotalPrice()
{
	return nDays * ppDay;
}

void Reservations::displayReservation()
{
	cout << "Reservation confirmation for " << getName() << endl;
	//cout << "Check in Date: " << getCheckIn() << endl;	
	cout << "Number of Days: " << getNumOfDays() << endl;
	//cout << "Check out Date: " << getCheckOut();
	cout << "Your total is:  $" << setprecision(2) << fixed << getTotalPrice() << endl;


}
