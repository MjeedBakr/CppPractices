#include <iostream>
#include <string>
#include <iomanip>
#include "MyLib.h"
#include <chrono>
using namespace std::chrono;

enum enNumberType {Non, Hundred, Thousand, Million};

using namespace std;

string getNumberTypeText(enNumberType numberType)
{
	switch (numberType)
	{
	case Non:
		return "";
	case Hundred:
		return " Hundred";
	case Thousand:
		return " Thousand";
	case Million:
		return " Million";
	}
}

string getOneNumberTxt(long number)
{
	switch (number)
	{
	case 1:
		return "One";
	case 2:
		return "Two";
	case 3:
		return "Three";
	case 4:
		return "Four";
	case 5:
		return "Five";
	case 6:
		return "Six";
	case 7:
		return "Seven";
	case 8:
		return "Eight";
	case 9:
		return "Nine";
	default:
		return "";
	}
}

string getTen2XNumbersTxt(long number)
{
	switch (number)
	{
	case 10:
		return "ten";
	case 20:
		return "Twenty";
	case 30:
		return "thirty";
	case 40:
		return "forty";
	case 50:
		return "fifty";
	case 60:
		return "sixty";
	case 70:
		return "seventy";
	case 80:
		return "Eighty";
	case 90:
		return "Ninety";
	default:
		return "";
	}
}

string getTensNumbersTxt(long number)
{
	switch (number)
	{
	case 11:
		return "Eleven";
	case 12:
		return "Twelve";
	case 13:
		return "Thirteen";
	case 14:
		return "Fourteen";
	case 15:
		return "Fifteen";
	case 16:
		return "Sixteen";
	case 17:
		return "Seventeen";
	case 18:
		return "Eighteen";
	case 19:
		return "Nineteen";
	default:
		return "";
	}
}

string getRestOfTwoNumbersTxt(long number)
{
	string txt = "";
	long tenNumber = (number / 10) * 10;
	long rightNumber = number - tenNumber;
	txt += getTen2XNumbersTxt(tenNumber);

	if (rightNumber != 0)
	{
		txt += "-" + getOneNumberTxt(rightNumber);
	}

	return txt;


}

string getThreeNumbersTxt(long number, enNumberType numberType = enNumberType::Non)
{
	string numberTypeTxt = "";
	if (number > 99)
	{
		numberTypeTxt = getNumberTypeText(enNumberType::Hundred);
	}

	string leftNumberTxt = getOneNumberTxt(number / 100);

	long rightNumbers = number % 100;
	string rightNumbersTxt = "";

	if (rightNumbers <= 9)
		rightNumbersTxt = getOneNumberTxt(rightNumbers);
	else if (rightNumbers <= 19 && rightNumbers != 10)
		rightNumbersTxt = getTensNumbersTxt(rightNumbers);
	else if (rightNumbers <= 100)
		rightNumbersTxt = getRestOfTwoNumbersTxt(rightNumbers);

	return leftNumberTxt + numberTypeTxt + " " + rightNumbersTxt;
}

string getNumbersTxt(long number, enNumberType numberType = enNumberType::Non)
{
	string numberTypeTxt = getNumberTypeText(numberType);
	string txtNumber = "";
	txtNumber = getThreeNumbersTxt(number);

	return txtNumber + numberTypeTxt;
}

string getNumbersTxt4To6Digits(long number, enNumberType numberType = enNumberType::Thousand)
{
	long first3 = number / 1000;
	long second3 = number % 1000;
	string txtNumberFirst3 = getNumbersTxt(first3, numberType);
	string txtNumberSecond3 = getNumbersTxt(second3);

	return txtNumberFirst3 + " " + txtNumberSecond3;
}

string getNumbersTxt7To9Digits(long number, enNumberType numberType = enNumberType::Million)
{
	long first3 = number / 1000000;
	string txtNumberFirst3 = getNumbersTxt(first3, numberType);

	long remainNumbers = number % 1000000;
	string txtNumberRemain = getNumbersTxt4To6Digits(remainNumbers);

	return txtNumberFirst3 + " " + txtNumberRemain;
}

string getNumberTxt(long number)
{
	if (number < 1000)
		return getThreeNumbersTxt(number);
	else if (number < 1000000)
		return getNumbersTxt4To6Digits(number);
	else if (number <= 999999999)
		return getNumbersTxt7To9Digits(number);
}

int main() {



	long number;
	while (true)
	{
		cout << "Enter a number from 1 to Million: ";
		cin >> number;
		cout << getNumberTxt(number) << endl;
	}
	

	system("pause>0");
	return 0;

}