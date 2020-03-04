#include "course.h"

class Student //student class which holds the student name, idnum, and a vector of type courses
{
	private:
		string Name;
		int idnum;
		vector<Course> Courses;
	public:
		Student();
		Student(string, int);
	
		void setName(string);
		string getName();

		void setIDnum(int);
		int getIDnum();

		void addCourse(Course);
		double getGPA();
		void display();
		
};

