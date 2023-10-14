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
		arr[i] = randomNumber(-100, 100);
	}
}

void printArray(int arr[100], int arrayLength)
{
	for (int i = 0; i <= arrayLength - 1; i++)
		cout << arr[i] << " ";

	cout << endl;
}

bool isPositive(int number)
{
	if (number > 0)
		return true;

	return false;
}

int countPositive(int arr[100], int arrayLength)
{
	int counter = 0;
	for (int i = 0; i < arrayLength; i++)
		if (isPositive(arr[i]))
			counter++;

	return counter;
}

int main()
{
	//Seeds the random number generator in C++, called only once
	srand((unsigned)time(NULL));

	int arr[100];
	int arrayLength = 0;

	fillArrayWithRandomNumbers(arr, arrayLength);

	cout << "\nArray 1 elements: ";
	printArray(arr, arrayLength);

	cout << "\Positive numbers count is: ";
	cout << countPositive(arr, arrayLength) << endl;



	return 0;
}