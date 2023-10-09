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

int randomNumber(int from, int to)
{
	int randNum = rand() % (to - from + 1) + from;
	return randNum;
}

void printArray(int arr[100], int arrayLength)
{
	for (int i = 0; i <= arrayLength - 1; i++)
		cout << arr[i] << " ";

	cout << endl;
}

void fillArraywithNumbersFrom1ToN(int arr[100], int arrayLength)
{

	for (int i = 0; i <= arrayLength - 1; i++)
		arr[i] = i + 1;

}

bool arrayContainsTheNumber(int arr[100], int arrayLength, int number)
{
	for (int i = 0; i <= arrayLength - 1; i++)
		if (arr[i] == number)
			return true;

	return false;
}

void copyArray(int oldArray[100], int newArray[100], int arrayLength)
{
	for (int i = 0; i <= arrayLength - 1; i++)
		newArray[i] = oldArray[i];

}

void arrayShuffle(int arr[100], int arrayLength)
{
	int arrResult[100];
	int randomNum;
	for (int i = 0; i <= arrayLength - 1; i++)
	{
		do
		{
			randomNum = randomNumber(0, arrayLength - 1);

		} while (arrayContainsTheNumber(arrResult, arrayLength, arr[randomNum]));
		arrResult[i] = arr[randomNum];
	}
	copyArray(arrResult, arr, arrayLength);
}

int main()
{
	//Seeds the random number generator in C++, called only once
	srand((unsigned)time(NULL));
	int arrayLength = readPositiveNumber("How many elements: ");
	int arr[100];

	fillArraywithNumbersFrom1ToN(arr, arrayLength);

	cout << "\nArray elements before shuffle: \n";
	printArray(arr, arrayLength);

	arrayShuffle(arr, arrayLength);
	cout << "\nArray elements after shuffle: \n";
	printArray(arr, arrayLength);



	return 0;
}