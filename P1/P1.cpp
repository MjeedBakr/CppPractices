#include<iostream>
using namespace std;

int sum(int a, int b)
{
	return a + b;
}

int sum(int a, int b, int c)
{
	return a + b + c;
}

int sum(int a, int b, int c, int d)
{
	return a + b + c + d;
}

double sum(double a, double b)
{
	return a + b;
}


int main() 
{
	cout << sum(5, 6) << endl;
	cout << sum(5.1, 6.4) << endl;
	cout << sum(5, 6, 7) << endl;
	cout << sum(5, 6, 7, 8) << endl;

	return 0;
}

