#include <iostream>
using namespace std;

void l1()
{
	for (int i = 65; i <= 90; i++)
	{
		cout << "Letter: " << char(i) << endl;
		for (int j = 65; j <= 90; j++)
		{
			cout << char(i) << char(j) << "\n";
		}
		cout << "---------------------\n";
	}
}

void l2()
{
	for (int i = 10; i >= 1; i--)
	{
		for (int j = i; j >= 1; j--)
		{
			cout << "*";
		}
		cout << endl;
	}
}

void l3()
{
	for (int i = 1; i <= 10; i++)
	{
		for (int j = i; j <= 10; j++)
		{
			cout << j << " ";
		}
		cout << endl;
	}
}

void l4()
{
	for (int i = 1; i <= 10; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			cout << j << " ";
		}
		cout << endl;
	}
}

void l5()
{
	for (int i = 65; i <= 70; i++)
	{
		for (int j = 65; j <= i; j++)
		{
			cout << char(j) << " ";
		}
		cout << endl;
	}
}

void l6()
{
	for (int i = 1; i <= 10; i++)
	{
		for (int j = i; j <= 10; j++)
		{
			cout << j << " ";
		}
		cout << endl;
	}
}
int main()
{
	l4();


	return 0;
}