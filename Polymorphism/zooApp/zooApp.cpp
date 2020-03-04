#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Animal
{
	protected:
		int weight;
		string name;


	public:
		Animal(){name = "none", weight = 0;}
		Animal(string n,int w){name = n; weight = w;}
		string getName(){return name;}
		int getWeight(){return weight;}
		virtual string speak() = 0; //PURE VIRTUAL FUNCTION

};


class Lion : public Animal
{

	
	public:
		//must write code for pure virtual function
		Lion();
		Lion(string n, int w);
		string speak(){return "roar!";}
		

};



class Bear : public Animal
{
	public:
		//must write code for pure virtual function
		Bear();
		Bear(string n, int w);
		string speak(){return "growl!";}
		

};

int main()
{
	vector<Animal*> zoo;

	zoo.push_back(new Lion("Simba", 500));
	zoo.push_back(new Bear("Mustafa", 1000));
	zoo.push_back(new Lion("Yogi", 400));
	
	for(int i = 0; i < zoo.size(); i++)
	{
		cout << zoo[i]->getName() << " says " << zoo[i]->speak() << endl;
	}
	
	


}
