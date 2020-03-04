class Rectangle
{
private:
	//Attributes
	double length, width;
public:
	//"Access Roads"
	Rectangle(double,double);
	bool setLength(double);
	double getLength();

	bool setWidth(double);
	double getWidth();
	
	double getArea();
	double getPerim();
	Rectangle operator+(Rectangle);
	Rectangle operator*(double);
	bool operator>();
	

	Rectangle operator++();	
	Rectange operator++(int);
};

