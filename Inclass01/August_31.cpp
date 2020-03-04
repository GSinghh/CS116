#include <iostream>
#include <string>
using namespace std;

struct Employee
{
string ename;
double hours, rate, pay;

};

int main ()
{
// Creating array
const int size = 2;
Employee workers[size];

 for (int index = 0; index < size; index++)
	{
		// Enter and store data		
		cout << "Enter name: ";
		getline(cin, workers[index].ename); 
		cout << "Enter rate: ";
		cin >> workers[index].rate;
		cout << "Enter hours: ";
		cin >> workers[index].hours;
		// Remove extra enter key
		cin.ignore();
		// Calculate pay
		workers[index].pay = workers[index].rate * workers[index].hours;
		cout << "Your wage is: " << workers[index].pay << endl;
		
	}


return 0;
}
