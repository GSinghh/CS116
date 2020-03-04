#include <iostream>
#include <string>

using namespace std;

#include "simpleVector.h"
#include "class.h"



int main()
{
	SimpleVector<Item> Inventory; //Array which stores item objects
	SimpleVector<Item> Inv2; //Second array which is created for 
	char choice;
	char option;
	int number;
	string description;
	int quantity;
	int SKU;
	
	while (choice != 'Q')
	{
		Inventory.Sort(); //Sorts function
		cout << "Inventory Menu" << endl;
		cout << "A - Add an item" << endl;
		cout << "S - Search for an Item" << endl;
		cout << "L - List all Items" << endl;
		cout << "Q - Quit" << endl;
		cout << "Your Choice: ";
		cin >> choice;
		if (toupper(choice) == 'A') //if choice is A, gets user input, then passes into array
		{
			cout << "Enter SKU: ";
			cin >> SKU;
			cout << "Enter Description: ";
			cin >> description;
			cout << "Enter Quantity: ";
			cin >> quantity;
			if(Inventory.isFull() == true) //Uses copy constructor to create new array if full
			{
				cout << "Array is full" << endl;
				cout << "Creating a New array" << endl;
				SimpleVector<Item> Inv2 = Inventory;
				Inv2.insert(Item(SKU,description, quantity));
				for (int i = 0; i < Inv2.getSize();i++)
				{
					cout << Inv2[i] << endl;
				}
			}
			else
			{
				Inventory.insert(Item(SKU,description,quantity)); //inserts object into array
			}
		}
		else if (toupper(choice) == 'S')
		{
			cout << "Enter SKU to Find: "; //Linear search function, to figure out if SKU is in array
			cin >> SKU;
			int index = Inventory.Search(SKU);
			if(Inventory.Search(SKU) == -1)
			{
				cout << "No Item found that matches that SKU Number" << endl;
			}
			else
			{
				cout << Inventory[index] << endl;
				cout << "Update Description (Y/N)?: "; //used to update description
				cin >> choice;
				if (toupper(choice) == 'Y')
				{
					cout << "Enter New description: ";
					cin >> description;
					Inventory[index].setDescription(description);
				}
				

				cout << "Update Quantity (Y/N)?: "; //used to update quantity
				cin >> choice;
				if(toupper(choice) == 'Y')
				{
					cout << "Enter new quantity: ";
					cin >> quantity;
					Inventory[index].setQuantity(quantity);
				}
			}

		}
		else if (toupper(choice) == 'L')
		{
			if (Inventory.isEmpty() == true)
			{
				cout << "No items found" << endl; //Print out if array is empty
			}
			else
			{
				for(int i = 0; i < Inventory.getSize(); i++) //Used to print our items
				{
					cout << Inventory[i] << endl;
					cout << endl;
				}
			}
		}
		else if(toupper(choice) == 'Q')
		{
			cout << "Exiting" << endl;
			break;
		}
	

	}


	return 0;
}


