#include <iostream>
#include <string>

using namespace std;

#include "salesWorker.h"

SalesWorker::SalesWorker()//default constructor
{
	monthlySales = 10;
}

SalesWorker::SalesWorker(string na, double bp, int ms) //paramterized constructor
{
	Name = na;
	basePay = bp;
	monthlySales = ms;
}

void SalesWorker::setMonthlySales(int ms)//sets monthly sales
{
	monthlySales = ms;
}

double SalesWorker::getCommissionPercentage() //returns commission percentage by calculating with monthly sales
{
	double CommissionP;
	
	if (monthlySales < 5000)
	{
		CommissionP = 0.15;
	}
	else if(monthlySales< 9999.99)
	{
		CommissionP = 0.18;
	}
	else
	{
		CommissionP = 0.20;	
	}
	
	return CommissionP;

}

double SalesWorker::getCommission() //returns overall commission
{
	return getCommissionPercentage() * monthlySales;
}

double SalesWorker::getTotalPay() //returns total pay
{
	return getCommission() + basePay;
}
