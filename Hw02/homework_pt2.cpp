#include <iostream>
#include <string>

using namespace std;

//declare a struct which holds the values of the students
struct Students
{
	string sName;
	int idnum;
	int *test;
	float average;
	char grade;
};

//function prototypes
void getData(Students array[], int nStudents, int nTests);
char calcLtr(float);
void printReport(Students array[], int nStudents);

int main ()
{
	int numOfTests;
	int numOfStudents;
	cout << "How many Students do you have: ";
	cin >> numOfStudents;
	//Input Validation
	if (numOfStudents <= 0)
	{
		cout << "Must have at least one student!\n";
		
	}
	
	//Asks user for number of tests
	cout << "How many tests for each student: ";	
	cin >> numOfTests;
	if (numOfTests < 2)
		{
			cout << "Must have atleast two tests" << endl;	
		}	
	
	//Dynamically allocate an array of student
	Students *stuArray = nullptr;
	stuArray = new Students[numOfStudents];
		
	//Pass Array, Number of Students and Number of Tests into getData function
	getData(stuArray, numOfStudents, numOfTests);
	//Array and Number of Students passed into the print report function
	printReport(stuArray, numOfStudents);

	// Free up dynamically allocated memory
	delete [] stuArray;

	return 0; 
}

//Get Data function which get user input and puts it into the Array
// Also calculates the average of the test scores 
void getData(Students array[], int nStudents, int nTests) 
{ 
	//total variable is used to store the total number of test scores
	int total;
	//Dynamically allocate another array based on the number of tests
	int *numberOfTests = nullptr;
	numberOfTests = new int [nTests];
	
	for (int i = 0; i < nStudents; i++)
		{
			total = 0; //total becomes 0
			// gets user input and stores it in the array
			cout << "Enter in a Name for the Student: ";
			cin >> array[i].sName;
			cout << "Enter in a ID Number for the student: ";
			cin >> array[i].idnum;
			cin.ignore();
			//Nested for loop which is used to get user input for the number of tests and to populate the varialbe total with all the test scores
			for (int index = 0; index < nTests; index++)
				{
					cout << "Enter Test Score " << index + 1 << ": "; //cout statements
					cin >> numberOfTests[index]; //user input for number of tests
					(total += numberOfTests[index]);	
				}
		
			array[i].average = (float)total / (float)nTests; //Calculates average
			array[i].grade = calcLtr(array[i].average); //function call to calcLtr function which gets letter grade
		} 
}
//Calculates letter grade 
char calcLtr(float avg)
{
	char grade = ' '; //Type char
	if (avg <= 100 && avg >= 90)
		{
			grade = 'A';	
		}
	if (avg <= 89 && avg >= 80)
		{
			grade = 'B';
		}
	if (avg <= 79 && avg >= 70)
		{
			grade = 'C';
		}
	if (avg <= 69 && avg >= 60)
		{
			grade = 'D';
		}
	if (avg <=59)
		{
			grade = 'F';
		}
	return grade; //returns grade 

}

void printReport(Students array[], int nStudents)
{
	//Cout Statements to print out grade report
	cout << "Grade Report" << endl;
	cout << "Name        IDNum   Average  Grade" << endl;
	//for loop to print out all values inside the array of type struct	
	for (int i = 0; i < nStudents; i++)
	{
		cout << array[i].sName << "        " << array[i].idnum << "      " << array[i].average << "        "  << array[i].grade << endl;
	}

}
