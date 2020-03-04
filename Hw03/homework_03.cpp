/****************************************************
Programmer's Name: Gurpreet Singh
Program Description: The purpose of this program was to create a program which would provide health information to clients/patients. This information includes a patients BMI, Max Heart Rate, and a BMI Category based on the patients BMI.
***********************************************************/

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

class HealthProfile
{
private: 
	//Attributes
	string name; //Private Variables inside class
	int age;
	int weight;
	int height;
public:
	//Access Roads
	void setName(string); //Public Member Functions
	string getName();
	
	void setAge(int);
	int getAge();

	void setWeight(int);
	int getWeight();
	
	void setHeight(int);
	int getHeight();
	
	double getBMI(int, int);
	string getCategory(double);
	int getMaxHR(int);
	 
	void printProfile(string, double, string, int);
			
};

void HealthProfile::setName(string N) //Sets Name
{
	name = N;
}

string HealthProfile::getName() //Returns Name
{
	return name;
}

void HealthProfile::setAge(int patientAge) //Sets Patients Age
{
	patientAge = age;
}

int HealthProfile::getAge() //Returns Patients Age
{
	return age;
}

void HealthProfile::setWeight(int patientWeight) //Sets Patients Weight
{
	patientWeight = weight;
}

int HealthProfile::getWeight() //Returns Patients Weight
{
	return weight;
}

void HealthProfile::setHeight(int patientHeight) //Sets Patients Height
{
	patientHeight = height;
}

int HealthProfile::getHeight() //Returns Patiens Height
{
	return height;
}

double HealthProfile::getBMI(int patientWeight, int patientHeight)
{
	//Returns Patients BMI
	return ((double)patientWeight * 703)/ ((double)patientHeight * (double)patientHeight);
}

int HealthProfile::getMaxHR(int patientsAge)
{
	//Returns Patients Maximum HeartRate
	return 220 - patientsAge;
}

void HealthProfile::printProfile(string patientsName, double BMI, string Cat, int patientsHR)
{
	//Returns Patients Health Profile
	cout << "Health Profile for " << patientsName << endl;
	cout << "BMI:   " << setprecision(3) << BMI << endl;
	cout << "BMI Category: " << Cat << endl;
	cout << "Max Heart rate: " << patientsHR << endl;
	cout <<"\n";
}

string HealthProfile::getCategory(double patientBMI)
{
	//Returns a category based on the patients BMI
	string Category;
	if (patientBMI >= 30)
		Category = "Obese";
	else if (patientBMI >= 25 )
		Category = "Overweight";
	else if (patientBMI >= 18.5)
		Category = "Normal";
	else if (patientBMI < 18.5)
		Category = "UnderWeight";
	return Category;
}

int main ()
{
	//Create your object
	HealthProfile patient1;
	//Declaring Variables
	string name;
	string weightCategory;
	int age, weight, height, inches, feet;
	double BMI;
	int maxHR;	
	while (name != "x")
	{
		cout << "Enter name or X to Quit: ";
		cin >> name;
	
		if (name == "x") //Gives user choice to exit the program
			{
				cout << "You've chosen to exit" << endl;			
				return 0;
			}
		cout << "Your Age: "; //Enter in values
		cin >> age;
		cout << "Your Weight: ";
		cin >> weight;
		cout << "Your Height - feet: ";
		cin >> feet;
		cout << "Your Height - inches: ";
		cin >> inches;
		height = (feet * 12) + inches; //Convert feet into inches for accurate calculations
		patient1.setName(name); //Passing in values to functions
		patient1.setAge(age);
		patient1.setWeight(weight);
		patient1.setHeight(height);
		patient1.getBMI(weight, height);
		patient1.getMaxHR(age);
		BMI = patient1.getBMI(weight, height);
		weightCategory = patient1.getCategory(BMI); 
		maxHR = patient1.getMaxHR(age);
		patient1.printProfile(name, BMI, weightCategory, maxHR);
	}

	
	


	return 0;
}

