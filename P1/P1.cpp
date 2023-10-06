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

void printInvertedLettersPattern(int number)
{
	short lettersCounter = 64 + number;
	for (int i = number; i >= 1; i--)
	{
		for (int j = i; j >= 1; j--)
			cout << char(lettersCounter);

		cout << endl;
		lettersCounter--;

	}
}


int main()
{
	int number = readPositiveNumber("Enter a positive number: ");
	printInvertedLettersPattern(number);
	return 0;
}