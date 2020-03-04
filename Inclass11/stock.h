#pragma once
#include <string>

using namespace std;

class Stock
{
	private:
		string company;
		int shares;
		double current, purchase;

	public:
		Stock(){company = "none"; shares = current = purchase = 0;}
		Stock(string, int, double, double);
		void setShares(int s){shares = s;}
	
		int getValue(){return (shares * (current - purchase));}
		friend ostream& operator<<(ostream & out, Stock s)
		{
			out << "Company Name " << s.company << " with the value of "  << s.getValue() << endl;
			return out;
		}

};

Stock::Stock(string N, int s, double c, double p)
{
	company = N;
	shares = s;
	current = c;
	purchase = p;
}
