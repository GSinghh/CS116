#include <iostream>

using namespace std;

class Rectangle
{
private:
	//Attributes
	double length, width;
public:
	//"Access Roads"
	bool setLength(double);
	double getLength();

	bool setWidth(double);
	double getWidth();
	
	double getArea();
	double getPerim();
};

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
	
int main ()
{
	// make an int for choice
	int choice;
	//make a "cookie" or object'
	Rectangle box;
	double userLength, userWidth;
	
	cout << "1 - Price of Flooring\n";
	cout << "2 - Price of Fencing\n";
	cout << "3 - Quit\n";
	cout << "Enter Choice: ";
	cin >> choice;
	
	if (choice == 1) //Choice 2 
	{
		cout << "Enter Length, in feet: ";
		cin >> userLength; //User input for User Length
		while (!box.setLength(userLength)) //input validation
		{
			cout << "Invalid, re-enter: ";
			cin >> userLength;	
		}
		cout << "Enter Width, in feet: ";
		cin >> userWidth; //User input for user width
		while (!box.setWidth(userWidth)) //Input Validation
		{
			cout << "Invalid, re-enter: ";
			cin >> userWidth;	
		}
		box.setLength(userLength); //Passes user length to setLength
		box.setWidth(userWidth); //Pass user width to setWidth
		double cost;
		cout << "Enter cost of flooring per square foot: ";
		cin >> cost;
		
		cout << "Area to cover is " << box.getArea() << " Square Feet" << endl;
		cout << "Total Price is $" << box.getArea() * cost << endl;
		

	}
	
	if (choice == 2) //Choice 2 
	{	
		
		cout << "Enter Length, in feet: ";
		cin >> userLength;
		while (!box.setLength(userLength))
		{
			cout << "Invalid, re-enter: ";
			cin >> userLength;	
		}
		cout << "Enter Width, in feet: ";
		cin >> userWidth;
		while (!box.setWidth(userWidth))
		{
		cout << "Invalid, re-enter: ";
		cin >> userWidth;	
		}
		box.setLength(userLength);
		box.setWidth(userWidth);
		double cost;
		
		cout << "Enter cost of fencing per foot: ";
		cin >> cost;
		cout << "Amount of fencing required is: " << box.getPerim() << " Feet\n";
		cout << "Total Price is $" << box.getPerim() * cost << endl;
	}
	
	if (choice == 3) //Choice 3
	{
		cout << "GoodBye!\n";
	}

	//cout << "Length is: " << box.getLength() << endl;
	//cout << "Width is : " << box.getWidth() << endl;
	//cout << "Area is : " << box.getArea() << endl;
	//cout << "Perimeter is: " << box.getPerim() << endl;
	//box.setLength(userLength);
	//box.setWidth(userWidth);
	//Rectangle box2;
	//box2.setLength(12);
	//box2.setWidth(5); 
	return 0;
}

