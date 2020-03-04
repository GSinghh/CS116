#include <iostream>
using namespace std;

#include "rectangle.h"
int main ()

{
	Rectangle box;
	//box.setLength(5);
	cout << "Length is " << box.getLength() << endl;

	//box.setWidth(4);
	cout << "Width is " << box.getWidth() << endl;

	Rectangle box2(3.5,7.2);
	cout << "Length is " << box2.getLength() << endl;
	cout << "Width is " << box2.getWidth() << endl;
	
	Rectangle square(7.9);
	cout << "Length is " << square.getLength() << endl;
	cout << "Width is " << square.getWidth() << endl;
		
		
	return 0;
}
