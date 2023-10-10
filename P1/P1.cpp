#include <iostream>
#include <cstdlib>
using namespace std;

int randomNumber(int from, int to)
{
	int randNum = rand() % (to - from + 1) + from;
	return randNum;
}

void fillArrayWithRandomNumbers(int arr[100], int &arrayLength)
{
	cout << "\nHow many elements do you want in your array: \n";
	cin >> arrayLength;

	for (int i = 0; i <= arrayLength; i++)
	{
		arr[i] = randomNumber(1, 100);
	}
}

void printArray(int arr[100], int arrayLength)
{
	cout << "\nArray elements: \n";
	for (int i = 0; i <= arrayLength - 1; i++)
		cout << arr[i] << " ";

	cout << endl;
}

int findNumberPositionInArray(int arr[100], int arrayLength, int targetNumber)
{
	for (int i = 0; i <= arrayLength; i++)
	{
		if (arr[i] == targetNumber)
			return i;
	}

	return -1;
}

int readNumber()
{
	int number;

	cout << "\nPlease enter a number to search for: \n";
	cin >> number;

	return number;
}

int main()
{
	//Seeds the random number generator in C++, called only once
	srand((unsigned)time(NULL));

	int arr[100];
	int arrayLength = 0;

	fillArrayWithRandomNumbers(arr, arrayLength);

	printArray(arr, arrayLength);
	
	int number = readNumber();
	cout << "\nNumber you are looking for is: " << number << endl;

	short numberPosition = findNumberPositionInArray(arr, arrayLength, number);
	if (numberPosition == -1)
		cout << "\nThe number is not found :-(" << endl;
	else
	{
		cout << "\nThe number found at position: " << numberPosition;
		cout << "\nThe number found order is: " << numberPosition + 1 << endl;
	}


	return 0;
}