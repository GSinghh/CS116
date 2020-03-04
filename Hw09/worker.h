#pragma once
class Worker //Worker class which stores salesman name and basepay
{

	protected: //protected variables, so other classes have access to variables
		string Name;
		double basePay;
	
	public: //public member functions
		Worker();
		Worker(string, double);
	
		void setName(string);
		string getName() {return Name;}

		void setPay(double);
		double getPay(){return basePay;}
		
};
