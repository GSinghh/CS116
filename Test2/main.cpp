#include <iostream>
#include <string>
#include <iomanip>
#include <vector>

using namespace std;

#include "insurance.h"
#include "healthInsurance.h"
#include "autoPolicy.h"

void choiceOne(vector<Insurance*>&);
void printCustomers(vector<Insurance*>); //functions for each choice
int findCustomer(vector<Insurance*>&);


int main()
{
	int choice = 0;
	vector<Insurance*> policies; //vector of base class pointers
	cout << fixed << setprecision(2);


	while (choice != 4)
	{
		cout << "ACME Insruance Calculator" << endl;
		cout << "1 - New Customer" << endl;
		cout << "2 - Print Customers" << endl; //if else statements for all choices
		cout << "3 - Find Customer" << endl;
		cout << "4 - Exit" << endl;
		cout << "Enter your Choice: ";
		cin >> choice;
		if (choice == 1)
		{
			choiceOne(policies);
		}
		else if (choice == 2)
		{
			if(policies.size() == 0)
			{
				cout << "No policies found" << endl;			
			}
			else
				printCustomers(policies);
		}
		else if (choice == 3)
		{
			int index = findCustomer(policies);
			if(index == -1)
			{
				cout << "Policy Number not found" << endl;	
			}
			else
			{
				policies[index]->print();
			}
		}
		else if (choice == 4)
		{
			cout << "GoodBye!" << endl;
			break;
		}

	}








	return 0;
}

void choiceOne(vector<Insurance*>& customers)
{
	//cout << fixed << setprecision(2);
	
	char choice;
	string Name;
	int policyN;
	int tickets;
	cout << "Enter a for Auto or h for Health: ";
	cin >> choice;
	if (toupper(choice) == 'A')
	{
		cout << "Enter Customer Name: ";
		cin >> Name;
		cout << "Enter Policy Number: "; //gets user input
		cin >> policyN;
		cout << "Enter Number of tickets: ";
		cin >> tickets;
		autoPolicy obj1(Name, policyN, tickets);
		customers.push_back(new autoPolicy(Name, policyN, tickets)); //creates new object which is pushed back into vector
		
		cout << "\n";

		cout << "Auto Insurance Premium is $" << obj1.getPremium() << endl;
		cout << "\n";
	}
	else if(toupper(choice) == 'H')
	{
		cout << "Enter Customer Name: ";
		cin >> Name;
		cout << "Enter Policy Number: "; //gets user input
		cin >> policyN;
		cout << "Smoker? Enter Y or N: ";
		cin >> choice;
		healthInsurance obj1(Name,policyN, toupper(choice));
		customers.push_back(new healthInsurance(Name,policyN, toupper(choice))); //creates new object which is pushed back into vector
		cout << "\n";
		cout << "Health Insurance Premium is $" << obj1.getPremium() << endl;
		cout << "\n";
		
	}
}

void printCustomers(vector<Insurance*> customers) //prints all customers
{
	cout << "Customer" << "    "<< "Policy#" << "    " << "Premium" << endl;
	for(int i = 0; i < customers.size(); i++)
	{
		cout << customers[i]->getName() << "       " << customers[i]->getPnumber() << "    " << customers[i]->getPremium() << endl;	
	}
}

int findCustomer(vector<Insurance*>& customers) //linear search function used to find the policy number within the vector
{
	int policyNumber = 0;
	cout << "Enter Policy Number: ";
	cin >> policyNumber;
	for (int i = 0; i < customers.size(); i++)
	{
		if(customers[i]->getPnumber() == policyNumber)
		{
			return i;
		}
		else
		{
			return -1;
		}
	}

}
