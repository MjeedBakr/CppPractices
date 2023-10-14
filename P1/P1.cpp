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

float myAbs(float number)
{
	if (number < 0)
		return number * -1;

	return number;
}

int main()
{

	int number = readNumber();

	cout << "My abs Result : " << myAbs(number) << endl;

	cout << "C++ abs Result : " << abs(number) << endl;


	return 0;
}