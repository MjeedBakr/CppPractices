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

int arrayMaxNumber(int arr[100], int arrayLength)
{
	int maxNumber = 0;

	for (int i = 0; i < arrayLength; i++)
		if (arr[i] > maxNumber)
			maxNumber = arr[i];

	return maxNumber;

}

int main()
{
	//Seeds the random number generator in C++, called only once
	srand((unsigned)time(NULL));

	int arr[100], arrayLength;

	fillArraywithRandomNumbers(arr, arrayLength, 1, 100);

  
	cout << "\nArray Elements: ";
	printArray(arr, arrayLength);


	cout << "\nMaximun Number is: ";
	cout << arrayMaxNumber(arr, arrayLength) << endl;

	return 0;
}