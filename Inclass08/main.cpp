#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

#include "date.h"

ostream& operator<<(ostream &out, Date other);
istream& operator>>(istream &in, Date &other);

int main()
{
	Date today(10, 19, 2017);  // create a Date object using parameterized constructor
	cout << "Today is " << today << endl;

	cout << "Enter a date: ";
	cin >> today;
	cout << "You entered " << today << endl;

	Date returnDate;
	returnDate = today + 5;
	cout << "Please return by " << returnDate << endl;

	cout << "Postfix increment:  " << today++ << endl;
	cout << "Prefix increment: " << ++today << endl;

	return 0;
}
