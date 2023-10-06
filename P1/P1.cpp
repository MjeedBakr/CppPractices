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

int reverseNumber(int number)
{
	int reversedNumber = 0;
	int remainder = 0;
	while (number > 0)
	{
		remainder = number % 10;
		number = number / 10;
		reversedNumber = reversedNumber * 10 + remainder;
	}
	return reversedNumber;
}

void printAllDigitsinOrder(int number)
{
	number = reverseNumber(number);
	int remainder = 0;
	while (number > 0)
	{
		remainder = number % 10;
		number = number / 10;
		cout << remainder << endl;
	}
}


int main()
{
	int number = readPositiveNumber("Enter a positive number: ");
	printAllDigitsinOrder(number);
	return 0;
}