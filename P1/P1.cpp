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

int reverseDigit(int number)
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

void printSumOfInputDigits(int number)
{
	cout << "\Reverse of " << number << " = " << reverseDigit(number) << endl;
}


int main()
{
	printSumOfInputDigits(readPositiveNumber("Enter a positive number: "));
	return 0;
}