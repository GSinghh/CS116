#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

class Employee //Class is created
{
	private:
		//Attributes
		double hoursWorked; //Private Variables inside class
		double hourlyRate;
		string Name;
	public:
		//Access Roads
		bool setHours(double); //Public Member Functions
		double getHours();
		
		bool setName(string);
		string getName();
			
		bool setRate(double);
		double getRate();
		
		double getPay();
		
		

};

bool Employee::setHours(double hours) //Sets Hours, also a boolean function
{
	if (hours < 0) //Input Validation, "Hours Worked cannot be less than 0"
		return false;
	hoursWorked = hours;
	return true; //Returns true as long as valid values are put in
}

double Employee::getHours() //Returns Hours Worked
{
	return hoursWorked;
}

bool Employee::setName(string employeeName) //Sets Name, also a boolean function
{
	if (employeeName == "")//Input Validation, "Name cannot be empty"
		return false;	
	Name = employeeName; 
	return true; //Returns true as long as valid values are put in
}

string Employee::getName() //Returns Name
{
	return Name;
}

bool Employee::setRate(double hRate) //Sets Hourly Rate, also a boolean function
{
	if (hRate < 0) //Input Validation, "Hourly Rate cannot be less than 0"
		return false;
	hourlyRate = hRate;
	return true;	
}

double Employee::getRate() //Returns Hourly Rate
{
	return hourlyRate;
}

double Employee::getPay() //Returns overall gross pay
{
	double overtimeHours; //Variable used for seperate overtime hours
	double normalHours; //Normal Non-overtime hours
	if (hoursWorked > 40) //Only if hours worked are over 40
		{
			overtimeHours = (hoursWorked - 40); //Stores overtime hours
			normalHours = hoursWorked - overtimeHours; //Stores normal hours
		
		return (normalHours * hourlyRate) + (overtimeHours * (1.5 * hourlyRate));	
			//Returns the gross pay	
		}
	
	else
		{
			return hoursWorked * hourlyRate; //Return normal non-overtime gross pay
		} 
	
}

int main ()
{
	Employee emp1; //Object Created
	string Name; //Variables from class
	double hoursWorked;
	double hourlyRate;
	char choice; //Used to exit program if needed
	while (true) //While loop for multiple employees if needed
		{	
			cout << "Enter Employee Name: "; //Takes input for employee name
			cin >> Name;
		while (!emp1.setName(Name)) //Input Validation with boolean public member function
			{
				cout << "Name cannot be blank, re-enter: ";
				cin >> Name;
			}
		emp1.setName(Name); //Passes name into function
	
		cout << "Enter Hours Worked: "; //Takes input for Hours Worked
		cin >> hoursWorked;

		while(!emp1.setHours(hoursWorked)) //Input Validation with boolean public member function
			{
				cout << "Hours cannot be negative, re-enter: ";
				cin >> hoursWorked;
			}	
		emp1.setHours(hoursWorked); //Passes Hours Worked into function

		cout << "Enter Hourly Rate: "; //Takes input for Hourly Rate
		cin >> hourlyRate;
		while(!emp1.setRate(hourlyRate)) //Input Validation with boolean public member function
		{
			cout << "Hourly Rate cannot be negative, re-enter: ";
			cin >> hourlyRate;
		}
		//Prints out Gross pay for the employee
		cout << "Gross pay for " << emp1.getName() << "  $" << fixed << setprecision(2) << emp1.getPay() << endl;

		cout << "Another Employee?  (Y/N): "; //Choice is given to calculate for another employee
		cin >> choice;
	if (choice == 'n' || choice == 'N')
		{
			cout << "GoodBye!\n";
			break;	
		}

		
	}
	return 0;
}
