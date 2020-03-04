//start it as a vector of int
#include <iostream>
using namespace std;
template <class T>
class SimpleVector
{
private:
	//need a pointer to represent the array
	T* list;
	int numElements;
	int maxSize;  //current number of elements allocated
public:
	//default constructor
	SimpleVector();
	//copy constructor
	SimpleVector(const SimpleVector &);
	//destructor
	~SimpleVector();
	//insert an item on the list
	void insert(T);
	void print();
	bool isFull();
	bool isEmpty();
	int getSize() { return numElements; }
	int getMaxSize(){return maxSize;}
	T& getItemAt(int);
	int Search(T); //Linear Search
	void Sort();
	//overload []
	T& operator[](int);
	bool isValidSubscript(int s)
	{
		return (s >= 0 && s < numElements);
	}
	
	//exception handling class
	class BadSubscript
	{
	private:
		int sub;
	public:
		BadSubscript() { sub = 0; }
		BadSubscript(int s) { sub = s; }
		int getSub() { return sub; }
	};
};
	//for a template all class definitions go in .h file
	//copy constructor
template <class T>
SimpleVector <T>::SimpleVector(const SimpleVector &obj)
{
	//make a DEEP copy of obj
	//copy the array size
	numElements = obj.numElements;
	maxSize  = obj.maxSize;
	//allocate memory for this copy
		list = new T[maxSize];
	//copy the data over element by element
		for (int i = 0; i < numElements; i++)
	list[i] = obj.list[i];

	cout << "Copy Constructor Called" << endl;
}
template <class T>
T& SimpleVector<T>::operator[](int position)
{
	return getItemAt(position);
}

template <class T>
T& SimpleVector<T>::getItemAt(int position)
{
	//return value at this position of the list
	//make sure position is valid
	if (isValidSubscript(position))
	{
		return list[position];
	}
	else
	{
		throw (BadSubscript(position));
	}
}
template <class T>
bool SimpleVector<T>::isFull()
{
	//return true if array is full
	return (numElements == maxSize);
}
template <class T>
bool SimpleVector<T>::isEmpty()
{
	return (numElements == 0);
}
template <class T>
SimpleVector<T>::SimpleVector()
{
	//sest a default size
	maxSize = 10;
	//allocate the array
	list = new T[maxSize];
	numElements = 0;
}
template <class T>
void SimpleVector<T>::insert(T val)
{
	//really need to make sure there is space
	//need to increase size of list if not
	if (!isFull())
	{
		//make val the next element of the array
		list[numElements] = val;
		//update numElements
		numElements++;
	}
}
//destructor
template <class T>
SimpleVector<T>::~SimpleVector()
{
	//release the memory that has been allocated
	delete[]list;
	//cout << "destructor called, memory deleted" << endl;
}
template <class T>
void SimpleVector<T>::print()
{
	//print all the data in the list
	for (int i = 0; i < numElements; i++)
	{
		cout << list[i] << endl;
	}
}

template <class T>
int SimpleVector<T>::Search(T item) //linear search function
{
		
	for(int i = 0; i < numElements; i++)
	{
		if (list[i] == item)
			return i;
	}
	return -1;
}

template<class T>
void SimpleVector<T>::Sort() //sort function which is provided in lab specifactations
{
    int startScan, minIndex;
    T minValue;
    for (startScan = 0; startScan < numElements - 1; startScan++)
    {
        minIndex = startScan;
        minValue = list[startScan];
        for (int i = startScan + 1; i < numElements; i++)
        {
            if (list[i] < minValue)
            {
                minValue = list[i];
                minIndex = i;
            }
            list[minIndex] = list[startScan];
            list[startScan] = minValue;
        }
    }
}


