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

void fillArraywithRandomNumbers(int arr[100], int arrayLength, int from, int to)
{

	for (int i = 0; i <= arrayLength - 1; i++)
		arr[i] = randomNumber(from, to);

}

void sumArrays(int arr[100], int arr2[100], int arrayLength, int arrSum[100])
{
	for (int i = 0; i <= arrayLength - 1; i++)
		arrSum[i] = arr[i] + arr2[i];
}

int main()
{
	//Seeds the random number generator in C++, called only once
	srand((unsigned)time(NULL));
	int arrayLength = readPositiveNumber("How many elements: ");
	int arr[100], arr2[100], arrSum[100];

	fillArraywithRandomNumbers(arr, arrayLength, 1, 100);
	fillArraywithRandomNumbers(arr2, arrayLength, 1, 100);

	cout << "\nArray 1 Elements: ";
	printArray(arr, arrayLength);

	cout << "\nArray 2 Elements: ";
	printArray(arr2, arrayLength);

	cout << "\nSum of array1 and array2 elements: ";
	sumArrays(arr, arr2, arrayLength, arrSum);
	printArray(arrSum, arrayLength);



	return 0;
}