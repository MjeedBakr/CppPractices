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

void fillArraywithRandomNumbers(int arr[100], int arrayLength)
{

	for (int i = 0; i <= arrayLength - 1; i++)
		arr[i] = randomNumber(1,100);

}

void copyArrayInReverseOrder(int oldArray[100], int newArray[100], int arrayLength)
{
	for (int i = 0; i <= arrayLength - 1; i++)
		newArray[i] = oldArray[arrayLength - i - 1];

}

int main()
{
	//Seeds the random number generator in C++, called only once
	srand((unsigned)time(NULL));

	int arr[100], arr2[100];
	int arrayLength = readPositiveNumber("How many elements: ");

	fillArraywithRandomNumbers(arr, arrayLength);

	cout << "\nArray elements before shuffle: \n";
	printArray(arr, arrayLength);

	copyArrayInReverseOrder(arr, arr2, arrayLength);

	cout << "\nArray 2 elements after copying array 1 in reverse order: \n";
	printArray(arr2, arrayLength);





	return 0;
}