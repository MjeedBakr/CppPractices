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

void printLettersPattern(int number)
{
	short lettersCounter = 65;
	for (int i = 1; i <= number; i++)
	{
		for (int j = 1; j <= i; j++)
			cout << char(lettersCounter);

		cout << endl;
		lettersCounter++;

	}
}


int main()
{
	int number = readPositiveNumber("Enter a positive number: ");
	printLettersPattern(number);
	return 0;
}