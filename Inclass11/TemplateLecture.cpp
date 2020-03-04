#include <iostream>
#include <string>

using namespace std;

#include "simplevector.h"
#include "stock.h"

void show(SimpleVector<int> list)
{
	cout << "in show printing values" << endl;
	list.print();
}

int main()
{
	string choice = "yes";
	string company;
	int shares;
	double pPrice;
	double cPrice;
	
	SimpleVector<Stock> portfolio;
	while(choice != "no")
	{
		cout << "Enter Company: ";
		cin >> company;
		cout << "Enter Shares: ";
		cin >> shares;
		cout << "Enter Purchase Price: ";
		cin >> pPrice;
		cout << "Enter Current Price: ";
		cin >> cPrice;
		portfolio.insert(Stock(company,shares,cPrice,pPrice));
		for(int i = 0; i < portfolio.getSize(); i++)
		{
			cout << portfolio[i] << endl;
		}
		cout << "Another? (yes/no)";
		cin >> choice;
		if (choice == "no")
		{
			break;
		}
		else
		{
			//run program again
		}
	}

	/*
	//create a simple vector of int
	SimpleVector<int> nums;
	//i want to add a number to this list
	nums.insert(10);
	nums.insert(20);
	cout << "size is " << nums.getSize() << endl;
	nums.print();
	cout << nums.getItemAt(0) << endl;
	//cout << nums[0] << endl;
	/*
	try // possible exception to vatch
	{
		cout << nums.getItemAt(8) << endl;
	}
	catch (SimpleVector<int>::BadSubscript(p))
	{
		cout << p.getSubscript() << "is a bad subscript" << endl;
	}
	*/

	//make another with string
	//SimpleVector<string>colors;
	//colors.insert("Red");
	//colors.insert("blue");
	//colors.print();

}
