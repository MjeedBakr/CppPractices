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

void printAllDigitsFrequency(int number)
{
	for (int i = 0; i <= 9; i++)
	{
		short digitFrequency = 0;
		digitFrequency = countDigitFrequency(number, i);
		if (digitFrequency > 0)
			cout << "\Digit " << i << " Frequency is " << digitFrequency << " Time(s)." << endl;
	}
}


int main()
{
	int number = readPositiveNumber("Enter a positive number: ");
	printAllDigitsFrequency(number);
	return 0;
}