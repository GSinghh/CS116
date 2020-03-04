#include <iostream>
#include <iomanip>

using namespace std;

#include "fraction.h"

Fraction::Fraction() //default constructor
{ 
	num = 0; 
	den = 1; 
}

Fraction::Fraction(int numerator, int denominator) //parameterized constructor
{
	if (denominator == 0)
	{
		den = 1;
	}
	else
	{	
		den = denominator;
	}
	num = numerator;
}

void Fraction::setNum(int numerator)//set Numerator
{
	num = numerator;
}

int Fraction::getNum() //get Numerator
{
	return num;
}

void Fraction::setDen(int denominator) //set Denominator
{
	den = denominator;
}
 
int Fraction::getDen() //get Denominator
{
	return den;
}

Fraction Fraction::operator+(Fraction other)
{
	//Adds two fractions together
	//Need alike denominators
	//Denomiators multiplied by each other
	//Cross multiplacation occurs
	//returns answer
	//if denominators are the same just add numerators

	
	Fraction temp1; //will store multiplied fractions
	Fraction temp2;
	Fraction answer;
	if (den == other.den)
	{
		answer.num = num + other.num;
		answer.den = den; 
	
	}
	else
	{
		temp1.num = num * other.den; //These next four lines are the same as
		temp1.den = den * other.den; //doing cross multiplaction on paper
		temp2.num = other.num * den;
		temp2.den = other.den * den;
		answer.num = temp1.num + temp2.num;
		answer.den = temp1.den; //same denominator as temp1 or temp2 
	}
	answer.simplify();
	return answer;	
}

Fraction Fraction::operator-(Fraction other)
{
	//Subtracts two fractions
	//Needs alike denominators
	//Denominators multiplied together
	//Cross multiplications
	//returns answer
	//if denominators are same, just subtract numerators
	Fraction temp1;
	Fraction temp2;
	Fraction answer;
	if (den == other.den)
	{
		answer.num = num - other.num;
		answer.den = den;
	
	}
	else
	{
		temp1.num = num * other.den; //These next four lines are the same as
		temp1.den = den * other.den; //doing cross multiplaction on paper
		temp2.num = other.num * den;
		temp2.den = other.den * den;
		answer.num = temp1.num - temp2.num; //numerator subtraction
		answer.den = temp1.den; //Same denominator as temp2
	}
	answer.simplify();
	return answer;
}

Fraction Fraction::operator*(Fraction other)
{
	//Multiplacation operator
	//Doesn't need alike denominators
	//Numerators and denominators multiplied across
	Fraction answer;
	answer.num = num * other.num;
	answer.den = den * other.den;
	answer.simplify();
	return answer;
}

Fraction Fraction::operator/(Fraction other)
{
	//Quotient operator
	//Doesn't need alike denominators
	//Numerator and denominator flipped
	//of second fraction
	//Then multiplacation occurs
	Fraction answer;
	Fraction temp1;
	
	answer.num = num * other.den;
	answer.den = den * other.num;
	answer.simplify();
	return answer;
}

ostream& operator<<(ostream &out, Fraction other)//ostream operator overloaded
{	
	if (other.den == 1) //if denominator is one, return num
	{
		out << other.num;
		return out;
	}
	else if (other.num == other.den) //if top is the same as bottom return one
	{
		out << 1;
		return out;
	}
	else if (other.num == 0) //if num is 0, return 0
	{
		out << 0;
		return out;
	}
	else //normal printing out
	{
		out << other.num << "/" << other.den;
		return out;
	} 
}

istream& operator>>(istream &in, Fraction &other) //istream operator overloaded, input into object
{
	char dummy;//dummy character
	in >> other.num >> dummy >> other.den;

	return in;
}

bool Fraction::operator<(Fraction other) //Overloaded less than operator
{
	Fraction temp1; //temporary objects
	Fraction temp2;
	if (den == other.den) //if denominators are the same, compare numerators
	{
		if (num < other.num)
		{
			return true;		
		}
		else 
			return false;
	}

	else
	{
		temp1.num = num * other.den; //Cross multiply
		temp2.num = other.num * den;
		
		if (temp1.num < temp2.num)//If numerator is less than
		{
			return true;
		}
		else
			return false;	
	}
}

bool Fraction::operator>(Fraction other) //Greater than operator
{
	Fraction temp1; //temporary objects
	Fraction temp2;
	if (den == other.den)//If denominators are the same
	{
		if (num > other.num)//compare numerators
		{
			return true;		
		}
		else 
			return false;
	}

	else //if denominators arent the same
	{
		temp1.num = num * other.den;//cross multiply 
		temp2.num = other.num * den;
		
		if (temp1.num > temp2.num) //Compare numerators
		{
			return true;
		}
		else
			return false;	
	}
}

bool Fraction::operator==(Fraction other)//Equal than operator
{
	if (num == other.num && den == other.den) //If num and den are same on both fractions
	{
		return true;
	}
	else //return false if not equal
	{
		return false;
	}
}

void Fraction::simplify() //simplify function
{
	//simplify means that there is no remainder
	//Modulus must return 0 as the remainder
	//to show that number is in its simplest form
	int sign = num * den;	//New varialbe created which is num * den, size of the for loop
	if (sign < 0) //If sign is negative
		sign *= -1; //multiply by negative one
	for (int i = sign; i > 1 ; i--)//for loop which decrements 
	{	
		if (((num % i) == 0) && ((den % i) == 0)) //modulus both num and den and equal them to zero
		{				
			num /= i;	//Stores new values after division
			den /= i;
		}
	}
}	
