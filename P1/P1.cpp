#include <iostream>
using namespace std;
//26, 27, 28, 29, 30, 32, 37, 46, 50

//26
void printNumberFrom1ToN(int number)
{
	int counter = 1;
	while (number >= 1)
	{
		cout << counter << endl;
		number--;
		counter++;
	}
}

//27
void printNumberFromNTo1(int number)
{
	while (number >= 1)
	{
		cout << number << endl;
		number--;
	}
}

//28
int sumOddNumbersFrom1ToN(int number)
{
	int sum = 0;
	while (number >= 1)
	{
		if (number % 2 != 0)
		{
			sum += number;
		}
		number--;
	}
	return sum;
}

//29
int sumEvenNumbersFrom1ToN(int number)
{
	int sum = 0;
	while (number >= 1)
	{
		if (number % 2 == 0)
			sum += number;
		number--;
	}
	return sum;
}

//30
void factorial()
{
	int number;
	cout << "Please Enter a number: ";
	cin >> number;
	while (number <= 0)
	{
		cout << "Please Enter a positive number: ";
		cin >> number;
	}
	int result = 1;
	while (number >= 1)
	{
		result *= number;
		number--;
	}

	cout << result;
}

//32
int power(int number, int m)
{
	while (m > 2)
	{
		number *= number;
		m--;
	}
	return number;
}

//37
void sumUntil99()
{
	int sum = 0;
	int number = 0;
	while (number != -99)
	{
		sum += number;
		cout << "Enter a number to add to the sum\n";
		cin >> number;
	}
	cout << sum;
}

//46
void printLetters()
{
	short counter = 65;
	while (counter <= 90)
	{
		cout << char(counter) << endl;;
		counter++;
	}
}

//50
void displayBalance()
{
	string PIN;
	cout << "Please Enter your PIN\n";
	cin >> PIN;

	int failCounter = 3;
	while (PIN != "1234" && failCounter >= 1)
	{
		cout << "Wrong PIN, Please Enter your PIM again\n";
		cin >> PIN;
		failCounter--;
		if (failCounter == 0)
			cout << "Card is locked!";
	}
	if (PIN == "1234")
	{
		cout << "Your Balance is: 7500";
	}
}
int main()
{
	factorial();

	return 0;
}