#include <iostream>
#include "rectangle.h"

class Cube : public Rectangle
{
	//a cube is a rectangle with a height
	
	private: 
		double height;
	
	public:
		Cube();
		Cube(double,double,double);
		void setHeight(double);
		double getHeight(){return height;}
		double getVolume();
		friend ostream operator<<(ostream, Cube);
};
