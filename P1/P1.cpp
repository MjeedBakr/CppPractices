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

void copyArray(int oldArray[100], int newArray[100], int arrayLength)
{
	for (int i = 0; i <= arrayLength - 1; i++)
		newArray[i] = oldArray[i];

}


int main()
{
	//Seeds the random number generator in C++, called only once
	srand((unsigned)time(NULL));

	int arr[100], arrayLength;

	fillArraywithRandomNumbers(arr, arrayLength, 1, 100);

	cout << "\nArray 1 Elements: ";
	printArray(arr, arrayLength);

	int arr2[100];
	copyArray(arr, arr2, arrayLength);

	cout << "\nArray 2 Elements after copy: ";
	printArray(arr2, arrayLength);



	return 0;
}