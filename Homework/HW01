#include <iostream> 
#include <string>
#include <iomanip>
using namespace std;

struct StockInfo //struct which holds company name, number of shares, the purchase price, and current price
{
string Cname;
int Nshares;
double Pprice;
double Cprice;
};

void addRecord(StockInfo list[], int size); // Function Prototypes
void displayReport(StockInfo list[], int size);

int main () // Main function
{
	const int size = 2;
	StockInfo objects[size]; // Array of type StockInfo
	int option;								

	cout << "Welcome to your stock portfolio" << endl;
	cout << "1.Add Stocks\n"; //cout statements
	cout << "2.Display Profit/Loss\n";
	cout << "3.Exit Program\n";
	cout << "Select an Option: ";
	cin >> option; //Takes input for option
	while (option > 0 && option < 4) //While loop which only runs if option 1,2,3 is chosen
		{
		if (option == 1) //If statements for the user to choose which option is needed
			{
				cout << "Add Stocks\n";
				addRecord(objects, size); //function call to add record which takes 									user to addRecord function
				break;
			}
		if (option == 2)
			{
				cout << "You've Chosen to Display the Profit/Loss Margin\n";
				displayReport(objects, size);
				break;
			}
		if (option == 3 )
			{
				cout << "You've Chosen to exit the program\n";
				return 0;
			}	
		}
		
	
}

void addRecord(StockInfo list[], int size) //addRecord function which is used for 
{
	int sCount = 0;
	for (int index = 0; index < size; index++)
		{
			cin.ignore(); //cin.ignore used to take enter key out of the buffer
			cout << "Enter Company Name: ";
			getline(cin, list[index].Cname); //getline used to take in user input
			cout << "Enter Number of Shares: ";
			cin >> list[index].Nshares;
			cout << "What was the purchase price: ";
			cin >> list[index].Pprice;
			cout << "what is the current price: ";
			cin >> list[index].Cprice;
			sCount++;
		}
}

void displayReport(StockInfo list[], int size) //displayReport function is used to display
{
cout << "Portfolio Report\n";
cout << "================\n";
cout << "Company: ";

}
