#include <iostream>
#include <string>
#include <iomanip>
#include "MyLib.h"

using namespace std;

bool isLeapYear(short year)
{
	if (year % 400 == 0)
	{
		return true;
	}
	else if (year % 4 == 0 && year % 100 != 0)
	{
		return true;
	}

	return false;
}

int main() {

	short number;
	while (true)
	{
		cout << "Enter a year: ";
		cin >> number;
		cout << isLeapYear(number) << endl;
	}
	

	system("pause>0");
	return 0;

}