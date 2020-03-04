#include <iostream>
#include <string>

using namespace std;
	
#include "pieceworker.h"

Pieceworker::Pieceworker() //defualt constructor
{
	piecesSold = 10;
}

Pieceworker::Pieceworker(string na, double bp, int pSold) //parameterized constructor
{
	Name = na;
	basePay = bp;
	piecesSold = pSold;
}

void Pieceworker::setPiecesSold(int pSold) //sets pieces sold
{
	piecesSold = pSold;
}

double Pieceworker::getCommissionPerPiece() //calculates commission per piece with the amount of pieces sold
{
	double CommissionPP;
	
	if (piecesSold < 200)
	{
		CommissionPP = 0.75;
	}
	else if(piecesSold < 999)
	{
		CommissionPP = 1.25;
	}
	else
	{
		CommissionPP = 1.75;	
	}
	return CommissionPP; //returns commission per piece
}

double Pieceworker::getCommission() //returns commission
{
	return getCommissionPerPiece() * piecesSold;
}

double Pieceworker::getTotalPay() //returns total pay
{
	return getCommission() + basePay;
}

