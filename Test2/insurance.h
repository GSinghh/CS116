#pragma once
class Insurance
{

	protected:
		string Name;
		int policyNumber; //protected variables in base class
		double premium; 

	public:
		Insurance(){Name = "None"; policyNumber = 0; premium = 0.00;}
		Insurance(string N){Name = N;}
		void setName(string N){Name = N;}
		void setPnumber(int numb){policyNumber = numb;}
		void setPremium(double P){premium = P;}

		string getName(){return Name;}
		int getPnumber(){return policyNumber;}
		double getPremium(){return premium;}
		
		virtual void print() = 0; //pure virtual function to make abstract base class





};
