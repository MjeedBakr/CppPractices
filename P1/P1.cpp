#include <iostream>
#include <string>
#include <iomanip>
#include "MyLib.h"

using namespace std;

bool isLeapYear(short year)
{
	return ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0);
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