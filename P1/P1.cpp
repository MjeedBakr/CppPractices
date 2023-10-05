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

int countDigitFrequency(int number, short digitToCheck)
{
	int freqCounter = 0;
	int remainder = 0;
	while (number > 0)
	{
		remainder = number % 10;
		if (remainder == digitToCheck)
			freqCounter++;
		number = number / 10;
	}
	return freqCounter;
}

void printDigitFrequency(int number, short digitToCheck)
{
	cout << "\Digit " << digitToCheck << " Frequency is " << countDigitFrequency(number, digitToCheck) << " Time(s)." << endl;
}


int main()
{
	int number = readPositiveNumber("Enter a positive number: ");
	short digitToCheck = readPositiveNumber("Enter a positive digit to count its frequency time: ");
	printDigitFrequency(number, digitToCheck);
	return 0;
}