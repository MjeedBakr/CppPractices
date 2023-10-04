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

void printPerfectNumber(int number)
{
	if (checkPerfect(number) == enPerfectOrNot::Perfect)
		cout << number << " Is a Pefect Number.";
	else
		cout << number << " Is not a Perfect Number.";

}

int main()
{
	printPerfectNumber(readPositiveNumber("PLease enter a positive number to check if it is Perfect or Not: "));
	return 0;
}