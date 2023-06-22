#include"Header.h"
#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	int const ARRAY_SIZE = 150;
	int array[ARRAY_SIZE]={0};
	int x;
	int target, position, index, oldVal, newVal, numberToAdd=0;

	ifstream theFile; // create theFile object

	// attempt to open the file
	theFile.open("text.txt");

	// verify that the file is opened
	if (theFile.is_open())
	{
		// store data in an array 
		int count = 0;
		while (theFile >> array[count])
		{
			cout <<array[count] << " ";
			count++;
		}cout << endl;

		theFile.close(); // close the file 		
	}
	else
		//file not found
	{
		cout << "ERROR! FILE NOT FOUND" << endl;
	}

	// check if a number exists in the array and return the index 
	cout << "Enter the value you're looking for: ";
	cin >> target;
	cout << "the number " << target << " is found at index " << Search(array, ARRAY_SIZE, target) << "\n\n" << endl;

	// modify a value at a given index in the array
	cout << "Enter the index of the value you want to change: ";
	cin >> index;

	cout << "Enter the new value: ";
	cin >> newVal;
	oldVal = array[index];

	try
	{
		x = ModifyValue(array, index, ARRAY_SIZE, newVal);
	}
	catch (std::out_of_range& ex)
	{
		cerr << ex.what() << endl;
		abort();
	}

	catch (std::logic_error& ex)
	{
		cerr << ex.what() << endl;
		abort();
	}

	cout << "The old value at index " << index << " is " << oldVal << " and the new value is " << x << "\n\n" << endl;


	// add a value to the end of the array
	try
	{
		Add(array, ARRAY_SIZE, numberToAdd);
	}
	catch (std::out_of_range& ex)
	{
		cerr << ex.what() << endl;
		abort();
	}
	cout << "\n\n";

	// delete a number at a given index 
	cout << "Enter the index of the value you want to remove: ";
	cin >> position;
	
	try
	{
		Delete(array, position, ARRAY_SIZE);
	}
	catch (std::out_of_range& ex)
	{
		cerr << ex.what() << endl;
		abort();
	}
	cout << "\n\n";

	return 0;
}