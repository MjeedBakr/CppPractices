#include <iostream>
#include <string>
using namespace std;

enum enPrimeOrNot {Prime = 1, NotPrime = 2};

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

enPrimeOrNot checkPrime(int number)
{
	int m = round(number / 2);
	for (int counter = 2; counter <= m; counter++)
		if (number % counter == 0)
			return enPrimeOrNot::NotPrime;

	return enPrimeOrNot::Prime;
}

void printPrimeNumbersFrom1ToN(int number)
{
	cout << "\nPrime number from 1 To " << to_string(number) << " are: " << endl;
	for (int i = 1; i <= number; i++)
	{
		if (checkPrime(i) == enPrimeOrNot::Prime)
			cout << i << endl;
	}
}

int main()
{
	printPrimeNumbersFrom1ToN(readPositiveNumber("PLease enter a positive number to prine all prime number from 1 to n: "));
	return 0;
}