#include <iostream>
#include <cstdlib>
using namespace std;

int readPositiveNumber(string message)
{
	int number;
	do
	{
		cout << message << endl;
		cin >> number;
	} while (number < 1);
	return number;
}

void readArrayElements(int arr[], int arraySize)
{
	cout << "Enter array elements: \n";
	for (int i = 0; i <= arraySize - 1; i++)
	{
		cout << "Element [" << i + 1 << "] = ";
		cin >> arr[i];
		cout << "\n";
	}
	
}

void printArrayElements(int arr[], int arraySize)
{
	cout << "Original array: ";
	for (int i = 0; i <= arraySize - 1; i++)
		cout << arr[i] << " ";

	cout << endl;
}

short checkElementFrequency(int arr[], int arraySize, short elementToCheck)
{
	short elementFrequency = 0;
	for (int i = 0; i <= arraySize; i++)
		if (elementToCheck == arr[i])
			elementFrequency++;

	return elementFrequency;
}


int main()
{
	int arraySize = readPositiveNumber("How many Elements do you want in your array: ");

	int newArray[1000];

	readArrayElements(newArray, arraySize);
	cout << "\n";
	short numberToCheck = readPositiveNumber("Enter the number you want to check: ");

	printArrayElements(newArray, arraySize);
	cout << numberToCheck << " is repeated " << checkElementFrequency(newArray, arraySize, numberToCheck) << " time(s)" << endl;


	return 0;
}