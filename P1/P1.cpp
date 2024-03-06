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

	if (month == 2)
		return isLeapYear(year) ? 29 : 28;

	short arr31Days[7] = {1, 3, 5, 7, 8, 10, 12};

	for (short i = 0; i <= 7; i++)
		if (arr31Days[i - 1] == month)
			return 31;

	//Then its 30 Days
	return 30;
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
	return 60 * getNumberOfMinuterInMonth(year, month);
}


int main() {

	short year = 2000;
	short month = 2;
	
	cout << getNumberOfDaysInMonth(year, month) << endl;
	cout << getNumberOfHoursInMonth(year, month) << endl;
	cout << getNumberOfMinutesInMonth(year, month) << endl;
	cout << getNumberOfSecondsInMonth(year, month) << endl;
	

	system("pause>0");
	return 0;

}