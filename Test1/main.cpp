#include <iostream> 
#include <string>
#include <vector>
#include <iomanip>

using namespace std;

#include "salesRep.h" //included salesRep.h which has the class definition

void display(vector<SalesRep> &);
 
int main ()
{
	SalesRep temp; //temp object declared
	vector<SalesRep> sales; //vector of type SalesRep
	string Name = "bob";
	double productOneSales = 0.0;
	double productTwoSales = 0.0;

	cout << "Sales Reporting System" << endl;
	while (Name != "x") //Menu 
	{
		cout << "Enter Name or x to quit: ";
		getline(cin, Name); //Takes input from user for Name, and the sales made
		if (Name == "x") //prints out the sales Report
		{
			display(sales);
			cout << "\n";
			cout << "GoodBye!" << endl;
			break;
		}	
		temp.setName(Name);
		cout << "Enter product 1 Sales: ";
		cin >> productOneSales;
		temp.setProductOne(productOneSales); //Sales are set in the temp object
		cout << "Enter product 2 Sales: ";
		cin >> productTwoSales;
		temp.setProductTwo(productTwoSales); //Sales are set in the temp object
		cin.ignore();
		cout << "\n";
		sales.push_back(temp); //temp object is pushed back into the vector
	}

	return 0;
}

void display(vector<SalesRep> & myVector) //display function which prints out menu, vector passed in as paramter
{	
	double totalSales = 0.0 ;
	double totalCommission = 0.0;
	cout << "\n";
	cout << "Sales Report" << endl;
	cout << setw(15) << left << "SalesPerson" << setw(15) << "Total Sales" << setw(5) << "Commission" << endl; //prints out menu header
	for (int i = 0; i < myVector.size(); i++) // for loop which prints out name, total price, and commission for each salesRep
	{
		cout << setw(15) << left << myVector[i].getName() << "$ "<< setw(13) << setprecision(7) << myVector[i].getTotalSales() << setprecision(4) << "$ " << myVector[i].getCommission() << endl;
		totalSales += myVector[i].getTotalSales();
		totalCommission += myVector[i].getCommission();
		cout << "\n";
	}
	cout << setw(15) << left << "Total" << "$ " << setw(13) << setprecision(7) << totalSales << "$ " << totalCommission << endl; //prints out total price and commission
	cout << "\n";

	cout << "Diamond Club Qualified" << endl; //diamond club qualified for each employee who made more than 10000 in sales
	cout << setw(19) << left  << "Name" << setw(10) << "Total Sales" << endl;
	for (int i = 0; i < myVector.size(); i++) //for loop which prints out all employees over 10000 in sales.
	{
		if (myVector[i].getTotalSales() >= 10000)
		{
			cout << setw(19) << left << myVector[i].getName() << setprecision(7) << "$ "<< setw(10)<< myVector[i].getTotalSales() << endl;
		}
	}
	
}
