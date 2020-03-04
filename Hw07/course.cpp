#include <string>
#include <iostream>

using namespace std;

#include "course.h"


Course::Course()//default constructor
{
	courseID = "CS116";
	credits = 4;
	letterGrade = 'A';

}

Course::Course(string CID, int nCredits, char grade)//overloaded constructor
{
	courseID = CID;
	credits = nCredits;
	letterGrade = grade;

}

void Course::setCourseID(string CID)//sets course ID
{
	courseID = CID;
}

string Course::getCourseID()//returns course ID
{
	return courseID;
}

void Course::setCredits(int nCredits)//sets number of credits
{
	credits = nCredits;
}

int Course::getCredits()//returns credits
{
	return credits;
}

void Course::setLetterGrade(char grade)//sets letter grade
{
	letterGrade = grade;
}

char Course::getLetterGrade()//returns letter grade
{
	return letterGrade;
}
