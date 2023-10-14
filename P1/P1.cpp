#include <iostream>
#include <cstdlib>
using namespace std;

int randomNumber(int from, int to)
{
	int randNum = rand() % (to - from + 1) + from;
	return randNum;
}

void fillArrayWithRandomNumbers(int arr[100], int& arrayLength)
{
	cout << "\nHow many elements do you want in your array: \n";
	cin >> arrayLength;

	for (int i = 0; i <= arrayLength; i++)
	{
		arr[i] = randomNumber(1, 100);
	}
}

bool isOdd(int number)
{
	if (number % 2 != 0)
		return true;

	return false;
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

void copyArrayOnlyOddNumbers(int oldArray[100], int newArray[100], int arrayLength, int &newArrayLength)
{
	for (int i = 0; i <= arrayLength - 1; i++)
	{
		if (isOdd(oldArray[i]))
			addArrayElement(oldArray[i], newArray, newArrayLength);
	}
}



int main()
{
	//Seeds the random number generator in C++, called only once
	srand((unsigned)time(NULL));

	int arr[100];
	int arrayLength = 0;
	int array2Length = 0;

	fillArrayWithRandomNumbers(arr, arrayLength);

	int arr2[100];
	copyArrayOnlyOddNumbers(arr, arr2, arrayLength, array2Length);

	cout << "\nArray 1 elements: ";
	printArray(arr, arrayLength);

	cout << "\nArray 2 elements after copying only odd numbers: ";
	printArray(arr2, array2Length);


	return 0;
}