#include <iostream>
#include <cstdlib>
using namespace std;

void printArray(int arr[100], int arrayLength)
{
	for (int i = 0; i <= arrayLength - 1; i++)
		cout << arr[i] << " ";

	cout << endl;
}

void addArrayElement(int number, int arr[100], int& arrayLength)
{
	arrayLength++;
	arr[arrayLength - 1] = number;
}
int readNumber()
{
	int number;

	cout << "\nPlease enter a number: \n";
	cin >> number;

	return number;
}

void addInputNumbersToArray(int arr[100], int& arrayLength)
{
	bool addMore = true;
	do
	{
		addArrayElement(readNumber(), arr, arrayLength);

		cout << "\nDo you want to add more numbers? [0]:No, [1]:Yes? ";
		cin >> addMore;

	} while (addMore);

}

int main()
{


	int arr[100];
	int arrayLength = 0;

	addInputNumbersToArray(arr, arrayLength);

	cout << "\nArray Length: " << arrayLength;
	cout << "\nArray elements: ";
	printArray(arr, arrayLength);


	return 0;
}