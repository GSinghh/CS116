#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

#include "pieceworker.h"
#include "salesWorker.h"

int main()
{
	cout << fixed << setprecision(2) << endl;
	int choice = 0; 
	string Name = " ";
	double basePay = 0;
	int piecesSold = 0;
	int sales = 0;
	while (choice != 3)
	{
		cout << "MENU" << endl; //printed menu options
		cout << "1 - Pieceworker" << endl;
		cout << "2 - SalesRep" << endl;
		cout << "3 - Exit" << endl;
		cout << "Enter option: ";
		cin >> choice;
		if (choice == 1) //choice one for pieceworker
		{
			cout << "Enter Name: "; //Gets user input for Name, basePay, and piecesSold
			cin >> Name;
			cout << "Enter monthly Base Pay: ";
			cin >> basePay;
			cout << "Enter number of pieces sold: ";
			cin >> piecesSold;
			Pieceworker p(Name, basePay, piecesSold); //Paramterized constructor used
			cout << "Commission is " << p.getCommissionPerPiece() << " Per Piece" << endl;
			cout << "Pay for " << p.getName() << endl; //Functions used to print stored values
			cout << "Commission  $" << p.getCommission() << endl;
			cout << "Base Salary $" << p.getPay() << endl;
			cout << "Total Pay   $" << p.getTotalPay() << endl;
			cout << "\n";
		}
		else if (choice == 2) //choice two for salesworker
		{
			cout << "Enter Name: "; //Gets user input for Name, basePay, and sales
			cin >> Name;
			cout << "Enter monthly Base Pay: ";
			cin >> basePay;
			cout << "Enter Amount of Sales: ";
			cin >> sales;
			SalesWorker s(Name,basePay,sales); //Paramterized constructor used
			cout << "\n";
			cout << "Commission is " << s.getCommissionPercentage() << "%" << " of sales" << endl;
			cout << "Pay for " << s.getName() << endl; //Functions used to print stored values
			cout << "Commission  $" << s.getCommission() << endl;
			cout << "Base Salary $" << s.getPay() << endl;
			cout << "Total Pay   $" << s.getTotalPay() << endl;
			cout << "\n";
		}
		else //choice 3 to exit
		{
			cout << "Goodbye!" << endl;
			break;
		}
	}
}
