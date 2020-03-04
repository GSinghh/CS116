#include <iostream>
#include <vector>
#include <ctype.h>
#include <iomanip>
using namespace std;

#include "pizza.h"

void newOrder(vector<Pizza> &); //function prototypes
void showOrder(vector<Pizza> &);
void orderSummary(vector<Pizza> &);

int main()
{
	vector<Pizza> myClass; //vector of objects is created
	int choice = 0;

	while (choice != 3)//menu created with while loop
	{
		cout << "1 - New Order\n";
		cout << "2 - Show all orders\n";
		cout << "3 - Exit\n";
		cout << "Your Choice: ";
		cin >> choice;
		if (choice == 1)
		{
			newOrder(myClass); //function call to newOrder
		}
		if (choice == 2)
		{
			showOrder(myClass); //function call to showOrder 
		}
		if (choice == 3)
		{
			orderSummary(myClass);	//function call to orderSummary	
		}
		if (choice != 1 || choice != 2 || choice != 3) //input validation for the menu
		{
			cout << "Invalid Input, re-enter" << endl;
		}
	}

	return 0;
}

void newOrder(vector<Pizza> & myPizza) //processes any new order which user wants to enter in
{
	Pizza temp; //temporary pizza object
	string Name;
	char pizzaSize;
	string pizzaTopping;
	
	cout << "Enter size (S, M, L): "; //takes input for pizza size
	cin >> pizzaSize;
	while(!temp.setSize(toupper(pizzaSize))) //input validation for pizza size
	{
		cout << "Invalid Choice, please re-enter: ";
		cin >> pizzaSize;
	}
	temp.setSize(pizzaSize);

	while (pizzaTopping != "x") //While loop for adding toppings into vector
	{	
		cout << "Enter a topping, enter x when done: ";
		cin >> pizzaTopping;
		temp.addTopping(pizzaTopping);
	}
	cout << "Enter in a customer Name: "; //Takes input for customer Name
	cin >> Name;
	temp.setName(Name);
	myPizza.push_back(temp); //Temp object is pushed into vector of objects
	cout << "\n";

	cout << "YOUR ORDER" << endl;
	cout << "\n";
	temp.display();
	
}

void showOrder(vector<Pizza> & myPizzaVector)//showOrder function which is used to print out each order
{
	for (int i = 0; i < myPizzaVector.size(); i++)
	{
		myPizzaVector[i].display();
	}

}

void orderSummary(vector<Pizza> & myPizzaVector)//prints out customer, size, and price. Also prints out total price of all orders.
{
	cout << "Order Summary" << endl;
	cout << "Customer   Size   Price" << endl;
	for (int i = 0; i < myPizzaVector.size(); i++)
	{
		cout << setw(12) << left << myPizzaVector[i].getName() << myPizzaVector[i].getSize()  << setw(3) << " " << myPizzaVector[i].getPrice() << endl;	
	}

	cout << "\n";
	double totalPrice = 0.0;
	for (int i = 0; i < myPizzaVector.size(); i++)
	{
		totalPrice += myPizzaVector[i].getPrice();//for loop which gives totalPrice value of all orders
	}
	cout << "Total Sales:   $" << totalPrice << endl;
}
