#include <iostream>
#include <string>

using namespace std;

#include "rectangle.h"

int main ()
{
	Rectangle box1(4,5);
	cout << "box1 is" << box1 << endl;
	++box1;
	cout << "now box1 is" << box1 << endl;

	return 0;
}
