#include<iostream>
using namespace std;

//26, 27, 28, 29, 30, 32, 46

//26
void printNumbersFrom1toN(int end)
{
	for (int i = 1; i <= end; i++)
	{
		cout << i << endl;
	}
}

//27
void printNumbersFromNto1(int end)
{
	for (int i = end; i >= 1; i--)
	{
		cout << i << endl;
	}
}

//28
int sumOddNumbersFrom1ToN(int number)
{
	int sum = 0;
	for (int i = 1; i <= number; i++)
	{
		if (i % 2 != 0)
			sum += i;
	}
	return sum;
}

//29
int sumEvenNumbersFrom1ToN(int number)
{
	int sum = 0;
	for (int i = 1; i <= number; i++)
	{
		if (i % 2 == 0)
			sum += i;
	}
	return sum;
}

//30
int calcFactorial(int number)
{
	int result = 1;
	for (int i = number; i > 0; i--)
	{
		result *= i;
	}
	return result;
}

//32
int calcPower(int number, int m)
{
	for (int i = 2; i < m; i++)
	{
		number *= number;
	}
	return number;
}

//46  Capital letters: 65 - 90 
void printCapitalLetters()
{
	for (int i = 65; i <= 90; i++)
	{
		cout << char(i) << endl;
	}
}

//46  Small letters: 97 - 122 
void printSmallLetters()
{
	for (int i = 97; i <= 122; i++)
	{
		cout << char(i) << endl;
	}
}


int main()
{
	printCapitalLetters();
	printSmallLetters();
	return 0;
}