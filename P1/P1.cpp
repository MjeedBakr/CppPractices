#include <iostream>
#include <cstdlib>
using namespace std;

enum enPrimeOrNot { Prime = 1, NotPrime = 2 };

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

enPrimeOrNot checkPrime(int number)
{
	int m = round(number / 2);

	for (int counter = 2; counter <= m; counter++)
		if (number % counter == 0)
			return enPrimeOrNot::NotPrime;

	return enPrimeOrNot::Prime;
}

void copyOnlyPrimeNumbers(int oldArray[100], int newArray[100], int arrayLength, int &array2Length)
{
	int elementsCounter = 0;
	for (int i = 0; i <= arrayLength - 1; i++)
		if (checkPrime(oldArray[i]) == enPrimeOrNot::Prime)
		{
			newArray[elementsCounter] = oldArray[i];
			elementsCounter++;
		}
	array2Length = elementsCounter;
}

int main()
{
	//Seeds the random number generator in C++, called only once
	srand((unsigned)time(NULL));

	int arr[100], arrayLength;

	fillArraywithRandomNumbers(arr, arrayLength, 1, 100);

	cout << "\nArray 1 Elements: ";
	printArray(arr, arrayLength);

	int arr2[100], array2Length;
	copyOnlyPrimeNumbers(arr, arr2, arrayLength, array2Length);

	cout << "\nArray 2 Elements after copy with only prime numbers: ";
	printArray(arr2, array2Length);



	return 0;
}