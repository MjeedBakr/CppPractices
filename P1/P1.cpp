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

float getFractionPart(float number)
{
	return number - (int)number;
}

int myCeil(float number)
{
	if (abs(getFractionPart(number)) >= 0.1)
	{
		if (isPositive(number))
			return int(number) + 1;
		else
			return int(number);
	}
	else
		return number;
}

int main()
{

	float number = readNumber();

	cout << "My Ceil Result : " << myCeil(number) << endl;

	cout << "C++ Ceil Result : " << ceil(number) << endl;


	return 0;
}