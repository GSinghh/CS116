#include <iostream>
using namespace std;

int *copyArray(const int *, int size);
void displayArray(const int array[], int size); 

int main ()
{
	const int size1 = 3; //declaring two const ints
	const int size2 = 5;

	int array1[size1] = {1,3,5}; //array with size1 as capacity
	int array2[size2] = {7,9,11,13,15}; //array with size2 as capacity

	int *copy1 = nullptr; //Two pointers which are declared nullptr
	int *copy2 = nullptr;


	copy1 = copyArray(array1, size1); // Makes copies of both of the arrays
	copy2 = copyArray(array2, size2);

	cout << "Here are the contents of the original arrays\n";
	displayArray(array1, size1); //display the contents in the first array
	displayArray(array2, size2); //display the contents in the second array

	cout << "Here are the contents of the copied arrays\n";
	displayArray(copy1, size1); // display the contents of the first copied array
	displayArray(copy2, size2); // display the contents of the second copied array

	delete [] copy1; //Free up dynamically allocated memory
	delete [] copy2;
	copy1 = nullptr; //set the pointers to 0
	copy2 = nullptr;
	return 0;
}



int *copyArray(const int *array, int size) //function to copy the array
{
	int *newArray = nullptr; //pointer declared to null
	if (size <= 0) //input validation
		return nullptr;

	newArray = new int[size]; //dynamically creating an array

	for (int index = 0; index < size; index++) //for loop which copies the elements of the array in reverse
	{
		newArray[(size -1) - index] = array[index]; 
	}
	return newArray;
}



void displayArray(const int array[], int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << array[i] << " ";
	}
	cout << endl;
}
