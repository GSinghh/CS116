class Fraction
{
	private:
		int num;	//represents numerator
		int den;	//represents denominator
		void simplify();  //reduces to lowest terms
				//note simplify should only be used by other member functions
				//so it is not a public function
	public:
		Fraction(); //default constructor
		Fraction(int,int); //Parameterized constructor
		void setNum(int); //sets value for numerator
		int getNum(); //returns value for numerator
		void setDen(int); //sets value for denominator
		int getDen(); //returns value for denominator
		Fraction operator+(Fraction); //returns the sum of two fractions
		Fraction operator-(Fraction); //returns the difference of two fractions
		Fraction operator*(Fraction); //returns the product of two fractions
		Fraction operator/(Fraction); //returns the quotient of two fractions
		friend ostream& operator<<(ostream&, Fraction); //prints out fraction
		friend istream& operator>>(istream&, Fraction&); //takes input into object
		bool operator<(Fraction); //Less than comparison operator
		bool operator>(Fraction); //Greater than comparison operator
		bool operator==(Fraction);// Equals to comparison operator
};
