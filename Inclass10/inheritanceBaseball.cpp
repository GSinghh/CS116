#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

#include "pitcher.h"
#include "batter.h"

int main()
{
	int choice = 0;
	int playerNumber;
	int innings;
	int runs;
	int atBats;
	int hits;
	string Name;
	while (choice != 3)
	{
		cout << "MENU" << endl;
		cout << "1 - Pitcher" << endl;	
		cout << "2 - Batter" << endl;	
		cout << "3 - Quit" << endl;
		cout << "Select Player Type: ";
		cin >> choice;
		cin.ignore();
			
		if (choice == 1)
		{
			cout << "Enter Pitcher Name: ";	
			getline(cin, Name);
			cout << "Enter Player Number: ";
			cin >> playerNumber;
			cout << "Enter Earned Runs: ";
			cin >> runs;
			cout << "Enter Innings Pitched: ";
			cin >> innings;
			Pitcher p(Name, playerNumber, innings, runs);
			/*cout << "Name is " << p.getName() << endl;
			cout << "Player Number is " << p.getNum() << endl;
			cout << "Amount of innings are " << p.getInnings() << endl;
			cout << "Amount of Runs " << p.getRuns() << endl;
			*/
			cout << "Pitcher " << Name << ", Earned Run Average " << p.getERA() << endl;
			
		}
		if (choice == 2)
		{
			cout << "Enter Batter Name: ";	
			getline(cin, Name);
			cout << "Enter Player Number: ";
			cin >> playerNumber;
			cout << "Enter at Bats: ";
			cin >> atBats;
			cout << "Enter Hits: ";
			cin >> hits;
			Batter b(Name, playerNumber, hits, atBats);
			
			cout << "Batter " << Name << ", Batting Average " << fixed << setprecision(3) << b.getBattingAVG() << endl;

		}
		if (choice == 3)
		{
			cout << "Goodbye!" << endl;
			break;
		}
	}

	return 0;	
}

