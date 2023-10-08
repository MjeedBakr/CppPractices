#include <iostream>
#include <cstdlib>
using namespace std;

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

void fillArraywithRandomNumbers(int arr[100], int &arrayLength, int from, int to)
{
	cout << "\nHow many Elements do you want in your array: ";
	cin >> arrayLength;

	for (int i = 0; i <= arrayLength - 1; i++)
		arr[i] = randomNumber(from, to);

}

int arrayMinNumber(int arr[100], int arrayLength)
{
	int minNumber = 0;
	minNumber = arr[0];

	for (int i = 0; i < arrayLength; i++)
		if (arr[i] < minNumber)
			minNumber = arr[i];

	return minNumber;

}

int main()
{
	//Seeds the random number generator in C++, called only once
	srand((unsigned)time(NULL));

	int arr[100], arrayLength;

	fillArraywithRandomNumbers(arr, arrayLength, 1, 100);

  
	cout << "\nArray Elements: ";
	printArray(arr, arrayLength);


	cout << "\Minimum Number is: ";
	cout << arrayMinNumber(arr, arrayLength) << endl;

	return 0;
}