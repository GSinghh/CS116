
class Course // Course class which holds the course id, number of credits, and the letter grade
{
	private:
		string courseID;
		int credits;
		char letterGrade;
		
	public: 
		Course();
		Course(string, int, char);
		
		void setCourseID(string);
		string getCourseID();
				
		void setCredits(int);
		int getCredits();
		
		void setLetterGrade(char);
		char getLetterGrade();
		
			
};

