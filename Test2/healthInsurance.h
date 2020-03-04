#include <iostream>

using namespace std;

#include "insurance.h"
class healthInsurance : public Insurance
{

	private:
		char smoker;

	public:
		healthInsurance(){Name = "None"; policyNumber = 0; smoker = 'N';}
		healthInsurance(string N,int P, char S){Name = N; policyNumber = P; smoker = S;}
		
		int getPremium() //calculates premium
		{
			if (smoker == 'N')
			{
				premium = 190;
			}
			else if (smoker == 'Y')
			{
				premium = 250;
			}
			return premium;
		}
		string getStatus() //gets status if smoker/non-smoker
		{	string status;
			if (smoker == 'N')
			{
				status = "Non-Smoker";
			}
			else if (smoker == 'Y')
			{
				status = "Smoker";
			}
		}


		void print() //print function
		{
			cout << "Customer: " << Name << endl;
			cout << "Policy #: " << policyNumber << endl;
			cout << "Status: " << getStatus() << endl;
			cout << "Health Insurance Premium : " << getPremium() << endl;
		}




};
