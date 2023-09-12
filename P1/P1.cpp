#include <iostream>
using namespace std;

//33#
string studentGrade(short grade)
{
	if (grade > 100 || grade < 1)
		return "Incorrect input";
	else if (grade > 89)
		return "A";
	else if (grade > 79)
		return "B";
	else if (grade > 69)
		return "C";
	else if (grade > 59)
		return "D";
	else if (grade > 49)
		return "E";
	else
		return "F";
}

//34#
double commission(long totalSales)
{
	if (totalSales > 1000000 || totalSales < 50000)
		return 0;
	else if (totalSales == 1000000)
		return totalSales * 0.01;
	else if (totalSales > 499999)
		return totalSales * 0.02;
	else if (totalSales > 99999)
		return totalSales * 0.03;
	else
		return totalSales * 0.05;
}

//36#
int operations(int firstNumber, int secondNumber, char operationType)
{
	if (operationType == '+')
		return firstNumber + secondNumber;
	else if (operationType == '-')
		return firstNumber - secondNumber;
	else if (operationType == '*')
		return firstNumber * secondNumber;
	else if (operationType == '/')
		return firstNumber / secondNumber;
	else
		return -1;
}

//44#
string dayName(short day)
{
	if (day > 7 && day < 1)
		return "Wrong Day";
	else if (day == 1)
		return "Sunday";
	else if (day == 2)
		return "Monday";
	else if (day == 3)
		return "Tuesday";
	else if (day == 4)
		return "Wednesday";
	else if (day == 5)
		return "Thursday";
	else if (day == 6)
		return "Friday";
	else
		return "Saturday";
}

//45#
string monthName(short month)
{
	if (month > 7 && month < 1)
		return "Wrong Month";
	else if (month == 1)
		return "January";
	else if (month == 2)
		return "February";
	else if (month == 3)
		return "March";
	else if (month == 4)
		return "April";
	else if (month == 5)
		return "May";
	else if (month == 6)
		return "June";
	else if (month == 7)
		return "July";
	else if (month == 8)
		return "August";
	else if (month == 9)
		return "September";
	else if (month == 10)
		return "October";
	else if (month == 11)
		return "November";
	else
		return "December";
}




//#33, #34, #36, #44, #45
int main()
{

	return 0;
}