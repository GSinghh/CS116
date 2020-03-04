#include <iostream>
using namespace std;

int *duplicateArray(const int *arr , int size);

int main ()
{
	const int SIZE1 = 5;  
	const int SIZE2 = 7; 
	int array1[SIZE1] = {5,10,15,20,25};
	int array2[SIZE2] = {30,35,40,45,50,55,60}


	int *dup1 = nullptr; 
	int *dup2 = nullptr;
	dup1 = duplicateArray(array1, SIZE1);
	dup2 = duplicateArray(array2, SIZE2);

	return 0;
}

int *duplicateArray (const int *arr, int size)
{
	int newArray = nullptr;
	newArray = new int[size];

	for (int index = 0; index < size; index++)
	newArray[index] = 


	return newArray;
}
