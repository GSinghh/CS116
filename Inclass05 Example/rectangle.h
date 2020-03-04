class Rectangle
{
private:
	//Attributes
	double length, width;
public:
	//"Access Roads"
	Rectangle();
	//Parameterized constructor
	Rectangle(double, double);
	
	Rectangle(double);
	~Rectangle();
	bool setLength(double);
	double getLength(){ return length; }
	//inline function defintion
	
	bool setWidth(double);
	double getWidth() {return width;}
	
	double getArea() {return length * width;}
	double getPerim();
};

