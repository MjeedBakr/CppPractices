#include <iostream>
#include <string>
#include <iomanip>
#include "MyLib.h"

using namespace std;

string getDayName(short dayNumber)
{
	string arrDays[7] = {"Sun", "Mon", "Tue", "Wed", "Thu", "Fri", "Sat"};
	
	return arrDays[dayNumber];
}

string getDateFormat(short day, short month, short year)
{
	string date = to_string(day) + "/" + to_string(month) + "/" + to_string(year);
	return date;
}

// Gregorian Calender
short getDayOrder(short day, short month, short year)
{
	short a, y, m;
	a = (14 - month) / 12;
	y = year - a;
	m = month + (12 * a) - 2;

	return (day + y + (y/4) - (y/100) + (y/400) + ((31 * m) / 12) ) % 7;
}

int main() {

	short year;
	cout << "Please enter a year: ";
	cin >> year;

	short month;
	cout << "\nPlease enter a Month: ";
	cin >> month;

	short day;
	cout << "\nPlease enter a Day: ";
	cin >> day;

	cout << "\nDate       :" << getDateFormat(day, month, year) << endl;
	cout << "Day Order  :" << getDayOrder(day, month, year) << endl;
	cout << "Day Name   :" << getDayName(getDayOrder(day, month, year));

	system("pause>0");
	return 0;

}