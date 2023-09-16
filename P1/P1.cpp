#include <iostream>
using namespace std;

//36 44 45

int simpleCalculator(int number1, int number2, char operation)
{

	switch (operation)
	{
	case '+':
		return number1 + number2;
		break;
	case '-':
		return number1 - number2;
		break;
	case '*':
		return number1 * number2;
		break;
	case '/':
		return number1 / number2;
		break;
	default:
		return -1;
		break;
	}

}

string weekDay(short dayNumber)
{

	switch (dayNumber)
	{
	case 1:
		return "Sunday";
		break;
	case 2:
		return "Monday";
		break;
	case 3:
		return "Tuesday";
		break;
	case 4:
		return "Wednesday";
		break;
	case 5:
		return "Thursday";
		break;
	case 6:
		return "Friday";
		break;
	case 7:
		return "Saturday";
		break;
	default:
		return "Wrong Day";
		break;
	}

}string month(short monthNumber)
{

	switch (monthNumber)
	{
	case 1:
		return "January";
		break;
	case 2:
		return "Feb";
		break;
	case 3:
		return "Mar";
		break;
	case 4:
		return "Apr";
		break;
	case 5:
		return "May";
		break;
	case 6:
		return "June";
		break;
	case 7:
		return "Jul";
		break;
	case 8:
		return "Aug";
		break;
	case 9:
		return "Sep";
		break;
	case 10:
		return "Oct";
		break;
	case 11:
		return "Nov";
		break;
	case 12:
		return "December";
	default:
		return "Wrong Month";
		break;
	}

}


int main()
{


	return 0;
}