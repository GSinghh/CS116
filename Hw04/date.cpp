#include <iostream>
#include <iomanip>

using namespace std;

#include "date.h"

Date::Date()//Default Constructor
{
	month = 1; //Default Values
	day = 1;
	year = 2000;
	cout << "Default Constructor" << endl;
}

Date::Date(int m, int d, int y) //Parameterized Constructor
{
	if (m < 1 || m > 13 || d < 1 || d > 30 || y < 2000) //Input Validation
	{
		month = 1; //If bad input is given, default values are assigned
		day = 1;
		year = 2000;
	}
	else //Values are assigned
	{
		month = m;
		day = d;
		year = y;
	}
}

bool Date::setDate(int m, int d, int y)  //Function sets Date 
{
	if (m < 1 || m > 12 || d < 1 || d > 30 || y < 2000) //Input Validation Returns False if invalid data is put in
			return false;
	else	
	{	month = m;
		day = d;
		year = y;
		return true;
	}

}

void Date::getDate(int &m, int &d, int &y) //getDate function used to return the variables
{
	m = month;
	d = day;
	y  = year;
}

void Date::printShort() //Prints out date, in short format
{	
	cout << setfill('0') << setw(2) << month << "/" << setfill('0') << setw(2) << day << "/" << setw(2) << fixed << year%100 << endl;	
	//setfill and setw are used for formatting the date 
}

void Date::printLong()
{
	string finalMonth; //new string variable is created
	string Months[12] = {"January" , "February" , "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
	//string Array which holds the name of all the months
	if (month > 0 && month < 13) //Validation that month is between 1 and 12
	{
		finalMonth = Months[month -1]; //Copies the month into the finalMonth variable. Minus one because of the array element starts at 0.
	}
	cout << finalMonth <<" " << setfill('0') << setw(2) << day << ", " << year << endl; //Prints out date in Long format
}

bool Date::isEqual(Date Var1) //Variable which verifies that the first object is equal the second
{
	if (month == Var1.month && day == Var1.day && year == Var1.year) //Comparison between the first object and second object
	{
		return true; //return true if same	
	}
	else
		return false; //else return false
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

void Date::decrement() //decrement function which subtracts one day from the date
{
	day -= 1;
	if (day < 1) //If day is less then 1, day is equal to 30 and one month is subtracted
	{
		day = 30;
 		month = month - 1;
	}
	if (month < 1) //if month is less than 1, month is equal to 12 and one year is subtracted
	{
		month = 12;
		year = year -1;
	}

}
