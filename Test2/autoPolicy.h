#include <iostream>

using namespace std;

#include "insurance.h"
class autoPolicy : public Insurance //derived class auto policy
{
	private:
		int tickets;
	public:
		autoPolicy(){Name = "None"; policyNumber = 0; tickets = 0;}
		autoPolicy(string N, int numb, int T){Name = N; policyNumber = numb; tickets = T;}
		
		int getPremium() //calculates premium
		{
			if (tickets == 0)
			{
				premium = 95;			
			}
			else if (tickets < 3)
			{
				premium = 140;
			}
			else if (tickets >= 3)
			{
				premium = 175;
			}
			return premium;
		}
		void print()
		{
			cout << "Customer: " << Name << endl;
			cout << "Policy #: " << policyNumber << endl;
			cout << "Number of tickets: " << tickets << endl;
			cout << "Auto Insurance Premium: " << getPremium() << endl;
		}



};
