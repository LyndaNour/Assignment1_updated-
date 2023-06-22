#include"Header.h"
#include<iostream>
#include<fstream>
using namespace std;

// Search a value in the array
int Search(int arr[], int const SIZE, int target)
{
	for (int i = 0; i < SIZE; i++)
	{
		if (arr[i] == target)
		{
			return i;	
		}
	}
	return -1;
}
// Modify a value at a given index 
int ModifyValue(int array[], int index,int const SIZE, int newVal)
{
	if (index < 0 || index > SIZE)
	{
		throw std::out_of_range(" In ModifyValue, the value of index is out of range! ");
	}

	int oldVal = array[index];
	array[index] = newVal;

	if (oldVal == newVal)
	{
		throw std::logic_error("In ModifyValue, the oldValue and the new value cannot be the same!");
	}
	return newVal;
}

// add a value to the end of the array 
void Add(int array[], int const SIZE, int newValue)
{

	int i = 0;
	while (array[i] != 0 )
	{
		i++;
		
	}
	if (i >= SIZE)
	{
		throw std::out_of_range("In Add, the index is out of range! ");
	}

	cout << "You can add a value to index " << i << endl;
	cout << "Which value you want to add to the end of the array: ";
	cin >> newValue;
	array[i] = newValue;
	cout << "The value " << array[i] << " is added to the index " << i << endl;

	for (int i = 0; i < SIZE; i++)
	{
		cout << array[i] << " ";
	}cout << endl;

}
// delete a value at a given index 
void Delete(int array[], int index, int const SIZE)
{

	array[index] = 0;

	if (index<0 || index>SIZE)
	{
		throw std::out_of_range("At Delete, the index is out of range! ");
	}

	for (int i = 0; i < SIZE; i++)
	{
		cout << array[i] << " ";
	}cout << endl;



}
