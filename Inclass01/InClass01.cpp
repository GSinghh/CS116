#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

struct GradeInfo //Struct that creates the template
{
	string sname; //student name
	int test; // student test score
};

// double getinput(GradeInfo list[], int);

int main()
{
	double sum; //sum of all the test scores
	const int size = 3; // number of students
	GradeInfo students[size]; //array of type GradeInfo

for (int index = 0; index < size; index++) //For loop which gets and stores the students data
{
	cout << "Enter Name: "; // Enter students name
	getline(cin, students[index].sname);
	cout << "Enter score for " << students[index].sname << ": "; //Enter students Test Score
	cin >> students[index].test;
	cin.ignore();
	sum+=students[index].test;
}
//cout << sum << endl;

double average = sum / size; // Gets the average by dividing test scores by number of students

cout << "Class Average: " << setprecision(4) << average << endl; //Prints out class average to two decimal places

}
