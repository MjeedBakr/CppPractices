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

void printNumberInReversedOrder(int number)
{
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
	printNumberInReversedOrder(readPositiveNumber("Enter a positive number: "));
	return 0;
}