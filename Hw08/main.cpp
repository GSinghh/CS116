#include <iostream>
using namespace std;

#include "fraction.h" 

int main()
{
	int choice = 0; //Declared variables
	Fraction obj1;
	Fraction obj2;
	Fraction answer;
	cout << "Welcome to the fraction calculator" << endl;
	cout << "Enter all fractions in the form numerator/denominator (ex. 3/4) :" << "\n";
	
	while (choice!= 6)//Starts Menu
	{
		cout << "1 - Addition" << endl;
		cout << "2 - Subtraction" << endl;	
		cout << "3 - Multiplacation" << endl;	
		cout << "4 - Division" << endl;	
		cout << "5 - Compare" << endl;	
		cout << "6 - Exit" << endl;
		
		cout << "Enter operation: ";	
		cin >> choice;
		
	
		if (choice == 1) //Choice one adds fractions
		{
			cout << "Enter first fraction: ";
			cin >> obj1;
		
			cout << "Enter second fraction: ";
			cin >> obj2;
		
			answer = obj1 + obj2;
			cout << obj1 << " + " << obj2 << " = " << answer << endl; 		
		}
		if (choice == 2) //Choice two subtracts fractions
		{
			cout << "Enter first fraction: ";
			cin >> obj1;
		
			cout << "Enter second fraction: ";
			cin >> obj2;
	
			answer = obj1 - obj2;
			cout << obj1 << " - " << obj2 << " = " << answer << endl;
		}
		if (choice == 3) //Choice three multiplies fractions
		{
			cout << "Enter first fraction: ";
			cin >> obj1;
		
			cout << "Enter second fraction: ";
			cin >> obj2;

			answer = obj1 * obj2;
			cout << obj1 << " * " << obj2 << " = " << answer <<  endl;
		}
		if (choice == 4) //Choice four divides fractions
		{
			cout << "Enter first fraction: ";
			cin >> obj1;
		
			cout << "Enter second fraction: ";
			cin >> obj2;
		
			answer = obj1 / obj2;
			cout << obj1 << " / " << obj2 << " = " << answer << endl;		
		}
		if (choice == 5) //Choice five compares fractions (greater than, less than, equals to)
		{
			cout << "Enter first fraction: ";
			cin >> obj1;
		
			cout << "Enter second fraction: ";
			cin >> obj2;
		
			if (obj1 < obj2)
			{
				cout << obj1 << " is less than " << obj2 << endl;	
			}
			
			if (obj1 > obj2)
			{
				cout << obj1 << " is greater than " << obj2 << endl;	
			}
			else
			{
				cout << obj1 << " is equal to " << obj2 << endl;
			}
		}
		if (choice == 6) //Choice six exits menu
		{
			cout << "Goodbye!" << endl;
			break;
		}
		
	}	
	
	
	
	



	return 0;
}
