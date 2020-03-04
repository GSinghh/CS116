#include <iostream>
#include <string>
using namespace std;

#include "Bank.h"

BankAccount::BankAccount() //default constructor
{
	Name = "Default";
	accountNum = 01;
	PIN = 2468;
	Balance = 0;
 
}

BankAccount::BankAccount(string N, int aN, int P, double B) //parameterized constructor
{ 
	Name = N;
	accountNum = aN;
	PIN = P;
	Balance = B;
}

void BankAccount::setName(string N) //setName function
{
	Name = N;
}

string BankAccount::getName() //getName function
{
	return Name;
}
 
void BankAccount::setAccountNum(int aN) //setAccountNum function
{
	accountNum = aN;
}

int BankAccount::getAccountNum() //getAccountNum function
{
	return accountNum;
}

double BankAccount::getBalance() //getBalance function
{
	return Balance;
}

void BankAccount::setPIN(int accountPIN)
{
	PIN = accountPIN;	
}

bool BankAccount::checkPIN(int pinNumber) //checkPin function
{
	if (PIN == pinNumber)
	{
		return true;
	}
	else
	{ 		
		return false;
	}
}

void BankAccount::deposit(double deposit) //deposit function
{
	 Balance += deposit;
}

void BankAccount::withdrawl(double withdrawl) //withdrawl function
{
	if (Balance - withdrawl < 0)
		cout << "Insufficent Funds" << endl;
	else
		Balance -= withdrawl;
}
