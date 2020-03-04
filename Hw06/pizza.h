#include <string>

class Pizza //Pizza Class
{
private: //attributes
	string Name;
	char pizzaSize;
	vector<string> toppings;

public: //access roads
	Pizza();

	bool setSize(char);
	char getSize();

	void setName(string);
	string getName();

	void addTopping(string);
	void clearTopping();
	
	double getPrice();
	void display();

};
