#include <iostream>
#include <string>

using namespace std;

#include "LinkedList.h"
#include "Employee.h"
#include "EmployeeList.h"

int main()
{
	//LinkedList<Employee> Workers;
	EmployeeList Workers;
	Workers.appendNode(Employee("John Smith", 40, 10));
	Workers.appendNode(Employee("Sam Jones", 50, 20));
	Workers.displayList();
	
	LinkedList<int> nums;
	cout << "This is the current list" << endl;
	nums.appendNode(10);
	nums.appendNode(20);
	nums.appendNode(30);
	nums.displayList();
	
	cout << "New List is" << endl;
	nums.deleteNode(20);
	nums.displayList();

	LinkedList<string> colors;
	colors.appendNode("Black");
	colors.appendNode("Red");
	colors.appendNode("Green");
	colors.displayList();
	


	return 0;
}
