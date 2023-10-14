#include <iostream>
#include <cstdlib>
using namespace std;

void fillArray(int arr[100], int& arrayLength)
{
	arrayLength = 10;
	arr[0] = 10;
	arr[1] = 10;
	arr[2] = 10;
	arr[3] = 50;
	arr[4] = 50;
	arr[5] = 70;
	arr[6] = 70;
	arr[7] = 70;
	arr[8] = 70;
	arr[9] = 90;

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

short findNumberPositionInArray(int arr[100], int arrayLength, int number)
{
	for (int i = 0; i <= arrayLength; i++)
	{
		if (arr[i] == number)
			return i;
	}

	return -1;
}

bool isNumberInArray(int arr[100], int arrayLength, int number)
{
	return findNumberPositionInArray(arr, arrayLength, number) != -1;
}


void copyDistinctNumbers(int arrSource[100], int arrDistination[100], int arrLength, int &arr2Length)
{
	for (int i = 0; i < arrLength; i++)
	{
		if (!isNumberInArray(arrDistination, arr2Length, arrSource[i]))
			addArrayElement(arrSource[i], arrDistination, arr2Length);
	}

}

int main()
{

	int arr[100];
	int arrayLength = 0;
	int array2Length = 0;

	fillArray(arr, arrayLength);

	int arr2[100];
	copyDistinctNumbers(arr, arr2, arrayLength, array2Length);


	cout << "\nArray 1 elements: ";
	printArray(arr, arrayLength);

	cout << "\nArray 2 elements with distinct numbers only: ";
	printArray(arr2, array2Length);




	return 0;
}