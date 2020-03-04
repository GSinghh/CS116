#pragma once

#include "LinkedList.h"
#include "Employee.h"

class EmployeeList : public LinkedList<Employee>
{
	public:
		void printPayroll();

};


void EmployeeList::printPayroll()
{
	//walk the list and print the data
	ListNode * nodePtr; //to walk the list
	//start at the first node
	nodePtr = head;
	//walk the list and print the data
	while(nodePtr)
	{
		//print the data at nodePtr
		//using employee class functions
		cout << nodePtr->data.getName() << "    " << nodePtr->data.getPay() << endl;
		//move to next node
		nodePtr = nodePtr->next;
	}
}

