#include <iostream>
#include <string>
#include <iomanip>
#include "MyLib.h"

using namespace std;

bool isLeapYear(short year)
{
	return ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0);
}

short getNumbersOfDaysInYear(short year)
{
	return isLeapYear(year) ? 366 : 365;
}

short getNumberOfHoursInYear(short year)
{
	return 24 * getNumbersOfDaysInYear(year);
}

long getNumberOfMinutesInYear(short year)
{
	return 60 * getNumberOfHoursInYear(year);
}

long getNumberOfSecondsInYear(short year)
{
	return 60 * getNumberOfMinutesInYear(year);
}

short getNumberOfDaysInMonth(short year, short month)
{
	if (month < 1 || month > 12)
		return 0;

	int numberOfDays[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	return (month == 2) ? (isLeapYear(year) ? 29 : 28) : numberOfDays[month - 1];
}

short getNumberOfHoursInMonth(short year, short month)
{
	return 24 * getNumberOfDaysInMonth(year, month);
}

long getNumberOfMinutesInMonth(short year, short month)
{
	return 60 * getNumberOfHoursInMonth(year, month);
}

long getNumberOfSecondsInMonth(short year, short month)
{
	return 60 * getNumberOfMinutesInMonth(year, month);
}


int main() {

	short year = 2000;
	short month = 12;
	
	cout << getNumberOfDaysInMonth(year, month) << endl;
	cout << getNumberOfHoursInMonth(year, month) << endl;
	cout << getNumberOfMinutesInMonth(year, month) << endl;
	cout << getNumberOfSecondsInMonth(year, month) << endl;
	

	system("pause>0");
	return 0;

}