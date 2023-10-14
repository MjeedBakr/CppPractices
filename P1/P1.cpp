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

float myFloor(float number)
{
	int intPart = int(number);
	float fractionPart = getFractionPart(number);

	if (abs(fractionPart) >= 0.1)
	{
		if (isPositive(number))
			return intPart;
		else
			return --intPart;
	}
	else
		return intPart;
}

int main()
{

	float number = readNumber();

	cout << "My Floor Result : " << myFloor(number) << endl;

	cout << "C++ Floor Result : " << floor(number) << endl;


	return 0;
}