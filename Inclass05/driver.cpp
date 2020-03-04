#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

#include "employee.h"

void getData(Employee*, int);
void printPayroll(Employee[], int);

int main()

{
	Employee* company;
	int howMany;
	cout << "How many employees? ";
	cin >> howMany;
	company = new Employee[howMany];
	
	getData(company, howMany);
	
	printPayroll(company, howMany);
	delete [] company;
}

void getData(Employee array[], int NumofEmp)
{
	string Name;
	double hoursWorked; 
	double hourlyRate;
	for(int i = 0; i < NumofEmp; i++)
	{
		cout << "Enter employee's Name: ";
		cin >> Name;
		array[i].setName(Name);
		
		cout << "Enter hours worked: ";
		cin >> hoursWorked;
		array[i].setHours(hoursWorked);

		cout << "Enter hourly rate: ";
		cin >> hourlyRate;
		array[i].setRate(hourlyRate);
	
	}
}

void printPayroll(Employee* array, int num)
{
	cout << "PAYROLL REPORT" << endl;

	cout << left << "Employee Name " << setw(10) <<"Hours"  << setw(10)<< "Rate" << setw(10) 
	<< " Pay" << endl;

	for (int i = 0; i < num; i++)
	{
		cout << setw(10) << array[i].getName() << setw(15) << array[i].getHours() << setw(10)<< array[i].getRate() << setw(10) << setprecision(2) << fixed << array[i].getPay() << endl;
	}
}
