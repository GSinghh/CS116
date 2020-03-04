#include <iostream>

using namespace std;

#include "date.h"

int main ()
{
	Date Obj; //Object is created
	Date Obj2; //Object 2 is created
	
	int month; //Variables are declared
	int day;
	int year;
	
	int option = 0;
	cout << "1. Set the Date" << endl; //Multiple print statements to make a menu for each option
	cout << "2. Increment the Date" << endl;
	cout << "3. Decrement the Date" << endl;
	cout << "4. Check to see if object is equal to another date Object" << endl;
	while (option != 5)
	{
		cout << "Choose an Option or Press 5 to exit: ";
		cin >> option;
		if (option == 1) //Option one which sets the date and prints it out in a long and short format
		{
			cout << "Enter in a month: "; //Takes in user input
			cin >> month;
			cout << "Enter in a day: ";
			cin >> day;
			cout << "Enter in a year: ";
			cin >> year;
			if(!Obj.setDate(month,day, year)) //input validation to check if valid data is passed in
			{
				cout << "Invalid Data, using default constructor values" << endl;
			}
			Obj.printShort();
			Obj.printLong();
		}
		if (option == 2) //option two which increments the date by one and prints out in a long and short format
		{
			cout << "You've chosen to increment the Date" << endl;
			Obj.increment();
			Obj.printShort();
			Obj.printLong();			
		}
		
		if (option == 3) //option three which decrements the date by one and prints out in a long and short format
		{
			cout << "You've chosen to decrement the Date" << endl;
			Obj.decrement();
			Obj.printShort();
			Obj.printLong();
		}

		if (option == 4) //option four which compares the first object with the second object, second object values are set here.
		{
			cout << "You've chosen to compare the Date Object to Another Date object" << endl;
			cout << "Enter in a month: ";
			cin >> month;
			cout << "Enter in a day: ";
			cin >> day;
			cout << "Enter in a year: ";
			cin >> year;
			Obj2.setDate(month,day, year);
			if (Obj.isEqual(Obj2))
				cout << "True" << endl;
			else
				cout << "False" << endl;
		}
		if (option == 5) //Option five which is to exit
		{
			cout << "Goodbye!" << endl;
		}
	
	}
	

	return 0;
}
