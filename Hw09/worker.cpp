#include <iostream>
#include <string>

using namespace std;
	
#include "worker.h"

Worker::Worker() //Default Constructor
{
	Name = "None";
	basePay = 10.00;

}

Worker::Worker(string sName, double bPay) //Parameterized Constructor
{
	Name = sName;
	basePay = bPay;
}

void Worker::setName(string sName)//sets Name
{
	Name = sName;
}

void Worker::setPay(double bPay)//sets basePay
{
	basePay = bPay;
}
