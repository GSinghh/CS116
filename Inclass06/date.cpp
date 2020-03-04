#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

#include "date.h"
Date::Date() //default constructor
{
	month = 1;
	day = 1;
	year = 2000;
}

Date::Date(int m, int d, int y) //parameterized constructor
{
	month = m;
	day = d;
	year = y;
}
void Date::printShort()
{
	//cout << setfill(‘0’);
	//cout << setw(2) << month << "/" << setw(2) << day << "/" << year;
	//cout << setfill(‘ ’);
}

void Date::setDate(int m, int d, int y) //needs data validation
{
	month = m;
	day = d;
	year = y;
}

int getDate()
{
	
}

void Date::increment() //increment function which adds 1 day to the date 
{
	day += 1; 
	if (day > 30) //if day is greater than 30, day is equal to one and one month is added
	{
		day = 1;
		month = month + 1; 
	}
	if (month > 12) //if month is greater than 12, month is equal to one and one year is added
	{
		month = 1;
		year = year + 1;
	}	
}
