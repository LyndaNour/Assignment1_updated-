#ifndef HEADER_H_
#define HEADER_H_

/**Declaration of Search function
@param array An array which contains the file's data
@param size The size of the array
@param target The number we want to look for in the array
@return index 
*/
int Search(int array[], int const SIZE, int target); 

/**Declaration of ModifyValue function 
@param array The array which contains the file's data
@param index The index of the value we want to modify
@param SIZE The size of the array
@param newVal The new value at index
@return newValue
*/
int ModifyValue(int array[], int index,int const SIZE, int newVal);

/**Declaration of add function
@param array The array which contains the file's data
@param SIZE The array's size
@param newValue The value to add at the end of the array
*/
void Add(int array[], int const SIZE, int newValue);

/**Declaration of Delete value function
@param array An array of integers
@param index The index of the value we want to delete
@param SIZE The array's size
*/
void Delete(int array[], int index, int const SIZE);






#endif