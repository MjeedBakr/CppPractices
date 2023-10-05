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

int sumOfDigits(int number)
{
	int sum = 0;
	int remainder = 0;
	while (number > 0)
	{
		remainder = number % 10;
		number = number / 10;
		sum += remainder;
	}
	return sum;
}

void printSumOfInputDigits(int number)
{
	cout << "\nSum of Digits = " << sumOfDigits(number) << endl;
}


int main()
{
	printSumOfInputDigits(readPositiveNumber("Enter a positive number: "));
	return 0;
}