#include <iostream>
using namespace std;

#include "employee.h"

void Employee::setHours(double hours)
{
	hoursWorked = hours;
}

double Employee::getHours() //Returns Hours Worked
{
	return hoursWorked;
}

void Employee::setName(string employeeName)
{
	Name = employeeName;
}

string Employee::getName()
{
	return Name;
}

void Employee::setRate(double hRate)
{
	hourlyRate = hRate;
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

