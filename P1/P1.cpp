#include <iostream>
#include <cmath>
using namespace std;

float readNumber()
{
	float number;
	do
	{
		cout << "\nEnter a positive number: ";
		cin >> number;
	} while (number < 0);

	return number;
}

float mySqrt(float number)
{
		return pow(number, .5);
}

int main()
{

	float number = readNumber();

	cout << "My Sqrt Result : " << mySqrt(number) << endl;

	cout << "C++ Sqrt Result : " << sqrt(number) << endl;


	return 0;
}