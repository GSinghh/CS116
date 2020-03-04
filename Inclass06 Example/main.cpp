#include "employee.h"
#include "date.h"

#include <iostream>
#include <string>
using namespace std;


int main()
{
	//Employee emp;
	Date hd;
	hd.setDate(1,1,2017); 
	Employee emp("John Smith", 40, 35, hd);
	//emp.setName("John Smith");
	//emp.setHours(40);
	//emp.setRate(25);
	emp.setHired(5,1,2010);
	emp.setHired(hd);
	cout << "Name is: " << emp.getName() << endl;
	cout << "Hours is: " << emp.getHours() << endl;
	cout << "Rate is: " << emp.getRate() << endl;
	//cout << "Your hire date is: " << hd.getDate.printLong();


	return 0;
}
