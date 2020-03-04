#include <iostream>
#include <string>
#include <vector>
#include <iomanip>

using namespace std;

#include "student.h"

void addNewStudent(vector<Student> &);//fuction prototypes
void returningStudent(vector<Student> &);
int linearSearch(vector<Student> &, int);
void studentMenu(vector<Student> &, int);


int main()//main function
{
	vector<Student> stuVector; //vector which holds students
	int choice = 0;
	string sName;
	
	while (choice != 3)//while loop for menu
	{
		cout << "MAIN MENU" << endl;//menu options
		cout << "1 – New student" << endl;
		cout << "2 - Returning student" << endl;
		cout << "3 - Quit" << endl;
		cout << "Enter Choice: ";
		cin >> choice;
		if (choice == 1)
		{
			addNewStudent(stuVector);//choice one to add new student
		}
		if (choice == 2)
		{
			returningStudent(stuVector);//function call to see if it is a returning student
		}
		if (choice == 3)
		{
			cout << "GoodBye!" << endl; //exit option
			break;
		}
		
	}



	return 0;
}

void addNewStudent(vector<Student> & myVector)
{
	Student temp; //temporary student object
	static int idnum = 1001;
	string stuName;
	cout << "Enter Name: ";//input for student name
	cin >> stuName;
	cout << stuName << " you are registered!   Student number is " <<  idnum << endl;
	temp.setName(stuName);//sets student name
	temp.setIDnum(idnum);//sets student id
	myVector.push_back(temp);//adds temporary object to vector
	idnum++;		
}

void returningStudent(vector<Student> & myVector)
{
	int idnum;
	int index;
	cout << "Enter ID: "; //takes input for student id
	cin >> idnum;
	index = linearSearch(myVector, idnum);//linear search function call which checks to see if idnum is already in the vector
	if (index == -1)
	{
		cout << "Sorry, " << idnum << " is not a valid student ID" << endl; //error message if idnum is not found
		return;
	}
	cout << "Welcome " << myVector[index].getName() << "!" << endl;
	cout << "\n";
	studentMenu(myVector,index); //function call which prints out a student menu

}

int linearSearch(vector<Student> & myVector, int idnum)//linear search function which checks for idnum
{
	for (int i = 0; i < myVector.size(); i++)
	{
		if (idnum == myVector[i].getIDnum())
			return i;
	}
	return -1;

}

void studentMenu(vector<Student> & myVector, int index)
{
	string courseID = " ";
	int units = 0;
	char Grade = ' ';
	int choice = 0;
	Course temp;
	while(choice != 4)//student menu
	{
		cout << "STUDENT MENU" << endl;
		cout << "1 - Add class" << endl;
		cout << "2 - Check GPA" << endl;
		cout << "3 - Print transcript" << endl;
		cout << "4 - Quit" << endl;
		cout << "Enter Choice: ";
		cin >> choice;
		
		if (choice == 1)//option to add class
		{
			cout << "Course ID? ";
			cin >> courseID; //Takes input and sets the course id
			temp.setCourseID(courseID);
	
			cout << "Units? ";
			cin >> units; //takes input and sets the course id
			temp.setCredits(units);
	
			cout << "Grade? ";
			cin >> Grade; //takes input and sets the letter grade
			temp.setLetterGrade(toupper(Grade));
			
			myVector[index].addCourse(temp); //adds the course into the vector
			cout << "Course Added" << endl;
			cout << "\n";
		}
		
		if (choice == 2) //option two which prints out the GPA
		{
			cout << "Your GPA is " << setprecision(3) << myVector[index].getGPA() << endl;
		}
		
		if (choice == 3)//option three which prints out the transcript
		{
			myVector[index].display();
		}
		
		if (choice == 4) //option four which is to exit
		{
			cout << "Goodbye " << myVector[index].getName() << endl;	
		}
	}
}
