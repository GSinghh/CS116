#include <iostream>

using namespace std;

#include "cube.h"

int main()
{
	Cube box(2,3,4);
	cout << "Length is" << box.getLength() << endl;
	cout << "Width is" << box.getWidth() << endl;
	cout << "Height is" << box.getHeight() << endl;
}
