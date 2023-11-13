#include<iostream>
using namespace std;

int sum(int a, int b, int c = 0, int d = 0)
{
	return a + b + c + d;
}

int main() 
{
	cout << sum(5, 6) << endl;
	cout << sum(5, 6, 7) << endl;
	cout << sum(5, 6, 7, 8) << endl;

	return 0;
}

