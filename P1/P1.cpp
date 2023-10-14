#include <iostream>
#include <cmath>
using namespace std;

float readNumber()
{
	float number;

	cout << "\nEnter a number: ";
	cin >> number;

	return number;
}

bool isPositive(float number)
{
	if (number > 0)
		return true;

	return false;
}

float myRound(float number)
{
	int decimalNum = number;

	number -= decimalNum;

	if (abs(number) >= 0.5 && isPositive(number))
		return ++decimalNum;
	else if (abs(number) >= 0.5 && !isPositive(number))
		return --decimalNum;
	else
		return decimalNum;
}

int main()
{

	float number = readNumber();

	cout << "My Round Result : " << myRound(number) << endl;

	cout << "C++ Round Result : " << round(number) << endl;


	return 0;
}