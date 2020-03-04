#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

struct Employee //struct which creates the employees names and values
{
string eName;
double hours, rate, pay;
};

void getData(Employee list[], int size); //Enters and stores data for all employees 
void calcPay(int hours, double rate); //Calculates the pay for the employees
//void printPayroll(Employee list[], int size); // Prints out the payroll for the employees

int main () //main function 
{
	const int size = 4;
	Employee company[size];
	getData(company, size);
	


return 0;
}


void getData(Employee list[], int size) //Enters and stores data for all employees
{
	
	cout << "Enter data for 4 Employees" << endl; //Cout statement
	for (int index = 0; index < size; index++) //for loop which goes through to get values for all employees
	{
		cout << "Employee name: "; 
		cin >> list[index].eName; //Stores employee name
		cin.ignore();
		cout << "Hours Worked: "; //Stores employees hours
		cin >> list[index].hours;
		if (list[index].hours < 0) //Input Validation
			{
				cout << "Hours must be positive" << endl;
				cout << "Please re-enter amount of hours: ";
				cin >> list[index].rate;
			}	

		cout << "Hourly Rate: ";
		cin >> list[index].rate;	
		if (list[index].rate < 0) //Input Validation (Cannot be less than)
			{
				cout << "Hourly rate must be positive" << endl;
				cout << "Please re-enter hourly rate: ";
				cin >> list[index].rate;
			}	

	}
					
}

void calcPay(int hours, double rate)
{



}

//void printPayroll(Employee list[], size)

