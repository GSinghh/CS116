
#include "date.h"

#include <string>
using namespace std;


class Employee //Class is created
{
	private:
		//Attributes
		double hoursWorked; //Private Variables inside class
		double hourlyRate;
		string Name;
		Date hired; //Date Object
	public:
		//Access Roads
		void setHours(double); //Public Member Functions
		double getHours();
		
		void setName(string);
		string getName();
			
		void setRate(double);
		double getRate();
		
		double getPay();

		
		void setHired(int, int ,int);
		Date getHired() { return hired; }
		void setHired(Date);	

		Employee(string, double, double, Date);
};
