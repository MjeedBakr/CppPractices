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

void copyArray(int oldArray[100], int newArray[100], int arrayLength)
{
	for (int i = 0; i <= arrayLength - 1; i++)
		newArray[i] = oldArray[i];

}

void swap(int& a, int& b)
{
	int temp;
	temp = a;
	a = b;
	b = temp;
}

void arrayShuffle(int arr[100], int arrayLength)
{
	for (int i = 0; i <= arrayLength - 1; i++)
	{
		swap(arr[randomNumber(0, arrayLength - 1)], arr[randomNumber(0, arrayLength - 1)]);
	}
}

int main()
{
	//Seeds the random number generator in C++, called only once
	srand((unsigned)time(NULL));

	int arr[100];
	int arrayLength = readPositiveNumber("How many elements: ");

	fillArraywithNumbersFrom1ToN(arr, arrayLength);

	cout << "\nArray elements before shuffle: \n";
	printArray(arr, arrayLength);

	arrayShuffle(arr, arrayLength);

	cout << "\nArray elements after shuffle: \n";
	printArray(arr, arrayLength);



	return 0;
}