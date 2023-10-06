#include <iostream>
#include <string>
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

void printInvertedNumberPattern(int number)
{
	for (int i = number; i >= 1; i--)
	{
		for (int j = i; j >= 1; j--)
			cout << i << " ";
		cout << endl;
	}
}


int main()
{
	int number = readPositiveNumber("Enter a positive number: ");
	printInvertedNumberPattern(number);
	return 0;
}