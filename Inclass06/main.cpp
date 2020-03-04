#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

#include "reservations.h"

int main()
{
	Reservations r1;
	double pricePerDay;
	int numberOfDays;
	int month, day, year;
	char roomChoice;
	string customerName;
	
	cout << "Welcome to our Reservation system" << endl;
	cout << "What day do you want to check in?" << endl;
	cout << "Enter Month, Day, Year: ";
	cin >> month >> day >> year;
	
	cout << "Room Type" << endl;
	cout << "K – 1 king bed: $120 per night" << endl;
	cout << "D - 2 double beds: $99 per night" << endl;
	cout << "K or D?";
	cin >> roomChoice;
	if (toupper(roomChoice) == 'K')
	{
		pricePerDay = 120;
		r1.setPricePerDay(pricePerDay);
	}
	if (toupper(roomChoice))
	{
		pricePerDay = 99;
		r1.setPricePerDay(pricePerDay);	
	}

	cout << "How many days will you stay? ";
	cin >> numberOfDays;
	r1.setNumOfDays(numberOfDays);
	
	cout << "Enter your name: ";
	cin >> customerName;
	r1.setName(customerName);

	r1.displayReservation();

	


	return 0;
}
