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

void readArray(int arr[100], int &arrayLength)
{
	cout << "\nHow many Elements do you want in your array: ";
	cin >> arrayLength;

	cout << "\nEnter array elements: \n";
	for (int i = 0; i <= arrayLength - 1; i++)
	{
		cout << "Element [" << i + 1 << "] = ";
		cin >> arr[i];
	}
		cout << endl;
	
}

void printArray(int arr[100], int arrayLength)
{
	for (int i = 0; i <= arrayLength - 1; i++)
		cout << arr[i] << " ";

	cout << endl;
}

short timesRepeated(int arr[100], int arraySize, short elementToCheck)
{
	short elementFrequency = 0;
	for (int i = 0; i <= arraySize - 1; i++)
		if (elementToCheck == arr[i])
			elementFrequency++;

	return elementFrequency;
}


int main()
{

	int arr[100], arrayLength, numberToCheck;

	readArray(arr, arrayLength);


    numberToCheck = readPositiveNumber("Enter the number you want to check: ");
  
	cout << "\nOriginal array: ";
	printArray(arr, arrayLength);

	cout << "Number " << numberToCheck;
	cout << " is repeated ";
	cout << timesRepeated(arr, arrayLength, numberToCheck) << " time(s)" << endl;


	return 0;
}