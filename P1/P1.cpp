#include<iostream>
using namespace std;

void printNumberMaxToMin(int max, int min)
{
	if (max >= min)
	{
		cout << max << endl;
		printNumberMaxToMin(max - 1, min);
	}
}

void printNumberMinToMax(int max, int min)
{
	if (min <= max)
	{
		cout << min << endl;
		printNumberMinToMax(max, min + 1);
	}
}

int MyPower(int base, int power)
{
	if (power == 0)
		return 1;
	else
	{
		return (base * MyPower(base, power - 1));
	}
}

int main() 
{

	cout << MyPower(5, 4);
	return 0;
}

