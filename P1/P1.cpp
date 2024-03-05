#include <iostream>
#include <string>
#include <iomanip>
#include "MyLib.h"

using namespace std;

bool isLeapYear(short year)
{
	return ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0);
}

short getNumbersOfDays(short year)
{
	if (isLeapYear(year))
		return 366;

	return 365;
}

short getNumberOfHours(short year)
{
	return 24 * getNumbersOfDays(year);
}

long getNumberOfMinutes(short year)
{
	return 60 * getNumberOfHours(year);
}

long getNumberOfSeconds(short year)
{
	return 60 * getNumberOfMinutes(year);
}

int main() {

	short year = 1971;
	
	cout << getNumbersOfDays(year) << endl;
	cout << getNumberOfHours(year) << endl;
	cout << getNumberOfMinutes(year) << endl;
	cout << getNumberOfSeconds(year) << endl;
	

	system("pause>0");
	return 0;

}