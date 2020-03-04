#include <iostream>
#include <string>
#include <iomanip>
#include <vector>
using namespace std;

#include "linkedList.h"
#include "invoiceItem.h"
#include "Order.h"

void createInventory(vector<Product>&); //Creats inventory to choose from
void printInventory(vector<Product>);	//Prints out the inventory
void menu(vector<Product>); //Takes user to menu

int main()
{
	vector<Product> inventory;
	createInventory(inventory);
	
	menu(inventory);		


	
	return 0;
}

void createInventory(vector<Product>& inventory)
{
	//Populates the vector with the store inventory
	inventory.push_back(Product(50,"Common Sword"));
	inventory.push_back(Product(85,"Jumping potion"));
	inventory.push_back(Product(115, "Chain Shirt"));
	inventory.push_back(Product(230, "BreastPlate"));
	inventory.push_back(Product(100, "Steel Shield"));
	inventory.push_back(Product(250, "Wooden Shield"));
}

void printInventory(vector<Product> inventory)
{
	cout << "PRODUCT LIST" << endl;
	for(int i = 0; i < inventory.size(); i++)
	{
		cout << i + 1 << "  " << inventory[i].getDescription() << "   " << inventory[i].getPrice() << endl;

	}
}

void menu(vector<Product> inventory)
{
	vector<Order> allOrders; //Vector which stores order
	int quantity = 0;
	int option = 10;
	int position;
	string Name = " ";
	char c;
	int sum = 0;
	int choice = 10;
	static int orderNum = 1000;
	
	do //Do while loop to process user input
	{
		Order orders;
		printInventory(inventory);
		option = 10;
		choice = 10;
		orderNum++;
		//Main Menu which gets the users input for the cart
		while(choice != 0)
		{
			cout << "Enter item to buy or 0 to quit: ";
			cin >> choice;
			if (choice > 0)
			{
				cout << "Ordering " << inventory[choice - 1].getDescription() << ", Price is " << inventory[choice -1].getPrice() << endl; //Gets item that user chooses
				cout << "How Many: ";
				cin >> quantity;
				orders.appendNode(InvoiceItem(inventory[choice - 1].getDescription(), inventory[choice -1].getPrice(), quantity)); //adds item into linked list
			}
		}
	
		orders.displayCart();
		while (option != 0) //Gives user the option to change the order in the cart
		{
			cout << "Select item to remove or change, or 0 if no change: ";
			cin >> option;
			if (option == 0)
			{
				cout << "Checking Out" << endl;
				allOrders.push_back(orders); //Pushed back into the vector
			}
			else if (option > 0)
			{
				cout << "Enter 0 to remove, or new quantity to change: ";
				cin >> quantity;
				if (quantity == 0)
				{
					orders.deleteAt(option); //Deletes item at certain position
					orders.displayCart();
					allOrders.push_back(orders);
				}
				else if (quantity > 0)
				{
					orders.get(option).setQuantity(quantity); //Sets quantity if new quantity is needed
					orders.displayCart();
					allOrders.push_back(orders);
				}	
			}
		}
		cout << "Enter Name: "; //Gets user input and sets name, for invoice
		cin >>	Name;	
		orders.setName(Name);
		orders.printInvoice();
		static int orderNum = 1000;
		cout << "Another Order: ";
		cin >> c;
		}
		while (toupper(c) == 'Y'); //While loop which prints out order summary at the end
		cout << "Order Summary" << endl;
		cout << setw(10) << left << "Order#" << setw(10) << left << "Customer" << setw(10) << right << "Total" << endl;
		//for(int i = 0; i < allOrders.size(); i++)
		//{
			//cout << setw(10) << left << orderNum << setw(10) << left << orders.getName() << setw(10)  << right << endl;
		//}	
		


	
		
	
}
