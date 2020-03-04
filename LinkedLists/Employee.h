#pragma once


#include <string>

using namespace std;
	
class Employee
{
	private:
		string Name;
		double hours, rate;

	public:
		Employee(){Name = "None"; hours = rate = 0;}
		Employee(string N, int H, int R) {Name = N; hours = H; rate = R;}
		string getName(){return Name;}
		double getPay(){return hours * rate;}

		friend ostream& operator<<(ostream& out, Employee e)
		{
			out << e.Name << "   " << e.getPay();
			return out;
		}
		



};
