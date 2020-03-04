#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

#include "Bank.h"

int findAccount(BankAccount[] , int, int); //function prototypes
void processAccount(BankAccount[] , int);

int main ()
{
	const int SIZE = 5; //size of Array
	BankAccount bank[SIZE]; //Array of Objects
	int accountNum = 1;
	int PIN;
	int result;
	int counter = 0;
	
	bank[0] = BankAccount("Clark Kent", 101, 1234, 50); //Parameterized constructors for each element of the array
	bank[1] = BankAccount("Bruce Wayne", 102, 4321, 100); // Setting values
	bank[2] = BankAccount("Lois Lane", 103, 7777, 25);
	bank[3] = BankAccount("Oliver Queen", 104, 7891, 70);
	bank[4] = BankAccount("Barry Allen", 105, 2590, 90);

	cout << "Welcome to my Bank!" << endl;
	while (accountNum != 0)
	{	
		cout << "Enter account number or 0 to quit: ";
		cin >> accountNum; //Entering in account number
		if (accountNum == 0) //Exit statement for while loop
		{
			cout << "Exiting Program" << endl;
			return 0;		
		}
		result = findAccount(bank, SIZE, accountNum); //function call to findAccount, stored in result
		while (result == -1)//Input Validation for account Number
		{
			cout << "Invalid Account Number, re-enter:";
			cin >> accountNum;
			findAccount(bank, SIZE, accountNum); //function call again to see if result is not -1
			result = findAccount(bank, SIZE, accountNum); //stored in result
		}
		cout << "Enter PIN: "; //Takes in input for PIN
		cin >> PIN;
		while (!bank[result].checkPIN(PIN)) //Input Validation for PIN Number
		{
			cout << "Invalid PIN, re-enter:";
			cin >> PIN;	
		}
			
		cout << "Welcome " << bank[result].getName() << "!" << endl; //Prints out account holders Name
		processAccount(bank, result); //function call to processAccount function
				
	}
		

}

int findAccount(BankAccount bank[] , int size, int accountNumber)//function for linear search
{								//Takes in array, size of array, and the account number as parameters
	for (int i = 0; i < size; i++)//for loop which goes through each element of the array
	{
		if (accountNumber == bank[i].getAccountNum())
		{
			return i; //if account number is found returns i or index at which number is found
		}
	}
	return -1; //returns -1 if number is not found
}

void processAccount(BankAccount bank[] , int index) //Process account function which takes the array and the index at which the account
{							//number was found
	int deposit;
	int withdrawl;
	char choice;
	
	while(choice != 'q' || choice != 'Q') //while loop which will process the deposit and withdraw functions
		{
		cout << "D(eposit) / W(ithdraw) / Q(uit): ";
		cin >> choice;
		if (choice == 'D' || choice == 'd')
		{
			cout << "Enter Deposit Amount: ";//option 1 for deposit
			cin >> deposit;
			bank[index].deposit(deposit);
			cout << "Your Balance is $"  << setprecision(2) << fixed << bank[index].getBalance() << "\n";
		}
		if (choice == 'W' || choice == 'w')
		{
			cout << "Enter Withdrawl Amount: ";//option 2 for withdrawl
			cin >> withdrawl;
			bank[index].withdrawl(withdrawl);
			cout << "Your Balance is $" << setprecision(2) << fixed << bank[index].getBalance() << "\n";
		}
		else if (choice == 'q' || choice == 'Q')
		{
			cout << "Goodbye " << bank[index].getName() << "\n"; //Exits and goes back to main menu
			return;
		}
	}
}
