#include <iostream>
#include <string>
#include <vector>
#include <iomanip>
using namespace std;

#include "student.h"



Student::Student()//default constructor
{
	Name = "Default";
	idnum = 101;
}

Student::Student(string sName, int ID)//overloaded constructor
{
	Name = sName;
	idnum = ID;
}

void Student::setName(string sName)//sets name
{
	Name = sName;
}

string Student::getName()//returns name
{
	return Name;
}

void Student::setIDnum(int ID)//sets id num
{
	idnum = ID;
}

int Student::getIDnum()//returns idnum
{
	return idnum;
}

void Student::addCourse(Course temp)//pushed course object into vector
{
	Courses.push_back(temp);
}

double Student::getGPA()//function which returns the GPA 
{
	double gradePoints = 0.0;
	double gradeValue = 0.0;
	double totalGradePoints = 0.0;
	double totalUnits = 0.0;
	double GPA = 0.0;
	
	//GPA is calculated by adding up total grade points divided by total class credits.
	for (int i = 0; i < Courses.size(); i++)
	{
		if (Courses[i].getLetterGrade() == 'A')
			{
				gradeValue = 4;
			}
		if (Courses[i].getLetterGrade() == 'B')
			{
				gradeValue = 3;
			}
		if (Courses[i].getLetterGrade() == 'C')
			{
				gradeValue = 2;
			}
		if (Courses[i].getLetterGrade() == 'D')
			{
				gradeValue = 1;
			}
		gradePoints = (Courses[i].getCredits() * gradeValue);
		totalGradePoints += gradePoints;
		totalUnits += Courses[i].getCredits();
		GPA = (totalGradePoints / totalUnits);
	}
	return GPA;
	
}

void Student::display()//displays transcript for student
{
	cout << "Transcript for: " << getName() << endl;
	cout << "==========================" << endl;
	cout << "Course    Grade" << endl;
	for (int i = 0; i < Courses.size(); i++)
	{
		cout << setw(12) << left <<  Courses[i].getCourseID() << setw(5) <<  Courses[i].getLetterGrade() << endl;
	}
	cout << "\n";
	cout << setprecision(3)  << "Your GPA is: " << getGPA() << endl;
	cout << "\n";
}

