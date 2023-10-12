#include <iostream>
#include <cstdlib>
using namespace std;

void printArray(int arr[100], int arrayLength)
{
	cout << "\nArray Length: " << arrayLength;
	cout << "\nArray elements: ";
	for (int i = 0; i <= arrayLength - 1; i++)
		cout << arr[i] << " ";

	cout << endl;
}

int readNumber()
{
	int number;

	cout << "\nPlease enter a number: \n";
	cin >> number;

	return number;
}

void addNumbersToArray(int arr[100], int& arrayLength)
{
	short choice = 0;
	do
	{
		arr[arrayLength] = readNumber();
		arrayLength++;

		cout << "Do you want to add more numbers? [0]:No, [1]:Yes? ";
		cin >> choice;
	} while (choice == 1);

}

int main()
{


	int arr[100];
	int arrayLength = 0;

	addNumbersToArray(arr, arrayLength);

	printArray(arr, arrayLength);


	return 0;
}