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

	if (!isNumberInArray(arr, arrayLength, number))
		cout << "No, The number is not found :-(" << endl;
	else
		cout << "Yes, The number is found :-)" << endl;


	return 0;
}