#include <iostream>
#include <string>
using namespace std;

enum enPerfectOrNot {Perfect = 1, NotPerfect = 2};

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

enPerfectOrNot checkPerfect(int number)
{
	int m = round(number / 2);
	int sum = 0;
	for (int counter = 1; counter <= m; counter++)
		if (number % counter == 0)
			sum += counter;

	if (sum == number)
		return enPerfectOrNot::Perfect;

	return enPerfectOrNot::NotPerfect;
}

void printPerfectNumberFrom1ToN(int number)
{
	cout << "\nPerfect numbers from 1 to " << number << " are: \n";
	for (int i = 1; i <= number; i++)
	{
		if (checkPerfect(i) == enPerfectOrNot::Perfect)
			cout << i << endl;
	}

}

int main()
{
	printPerfectNumberFrom1ToN(readPositiveNumber("PLease enter a positive number to print all perfect numbers between 1 and it: "));
	return 0;
}