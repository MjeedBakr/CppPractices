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
	string num = to_string(number);
	for (int i = num.length(); i >= 0; i--)
		cout << num[i] << endl;
}


int main()
{
	printNumberInReversedOrder(readPositiveNumber("Enter a positive number: "));
	return 0;
}