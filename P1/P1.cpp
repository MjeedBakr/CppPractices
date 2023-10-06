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
	for (int i = 1; i <= number; i++)
	{
		for (int j = 1; j <= i; j++)
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