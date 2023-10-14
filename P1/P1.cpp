#include <iostream>
#include <cstdlib>
using namespace std;

void fillArrayWithInputNumbers(int arr[100], int& arrayLength)
{
	cout << "\nHow many elements do you want in your array: \n";
	cin >> arrayLength;

	int arrayCounter = 0;
	do
	{
		cout << "Enter the " << arrayCounter + 1 << " Element : ";
		cin >> arr[arrayCounter];

		arrayCounter++;
	} while (arrayCounter < arrayLength);

}

void printArray(int arr[100], int arrayLength)
{
	for (int i = 0; i <= arrayLength - 1; i++)
		cout << arr[i] << " ";

	cout << endl;
}

void addArrayElement(int number, int arr[100], int& arrayLength)
{
	arrayLength++;
	arr[arrayLength - 1] = number;
}

bool checkArrayContainsTheElement(int number, int arr[100], int arrayLength)
{
	for (int i = 0; i < arrayLength; i++)
		if (number == arr[i])
			return true;

	return false;
}

void copyDistinctNumbers(int arrSource[100], int arrDistination[100], int arrLength, int &arr2Length)
{
	for (int i = 0; i < arrLength; i++)
	{
		if (checkArrayContainsTheElement(arrSource[i], arrDistination, arr2Length))
			continue;
		else
			addArrayElement(arrSource[i], arrDistination, arr2Length);
	}

}


int main()
{

	int arr[100];
	int arrayLength = 0;
	int array2Length = 0;

	fillArrayWithInputNumbers(arr, arrayLength);

	int arr2[100];
	copyDistinctNumbers(arr, arr2, arrayLength, array2Length);


	cout << "\nArray 1 elements: ";
	printArray(arr, arrayLength);

	cout << "\nArray 2 elements with distinct numbers: ";
	printArray(arr2, array2Length);




	return 0;
}