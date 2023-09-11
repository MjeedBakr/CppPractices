#include <iostream>
using namespace std;

int main()
{
	//4, 8, 11, 24, 49

	//4#
	short age;
	bool hasDriverLicense;

	cout << "Enter your age: ";
	cin >> age;

	cout << "Do you have a driver license '1' Yes and '0' No ? ";
	cin >> hasDriverLicense;

	if (age > 21 && hasDriverLicense == true)
	{
		cout << "Hired";
	}
	else
	{
		cout << "Rejected";
	}

	//8#
	short studentMark;
	cout << "Enter your Mark: ";
	cin >> studentMark;
	
	if (studentMark >= 50)
	{
		cout << "Pass";
	}
	else
	{
		cout << "Fail";
	}

	//11#
	short mark1, mark2, mark3;

	cout << "Enter Mark1: ";
	cin >> mark1;
	cout << "Enter Mark2: ";
	cin >> mark2;
	cout << "Enter Mark3: ";
	cin >> mark3;

	float avgMarks = (mark1 + mark2 + mark3) / 3;
	
	if (avgMarks >= 50)
	{
		cout << avgMarks << "\nPass";
	}
	else
	{
		cout << avgMarks << "\nFail";
	}
	
	//24#
    short age;

	cout << "Enter your age: ";
	cin >> age;

	if (age >= 18 && age <= 45)
	{
		cout << "Valid Age";
	}
	else
	{
		cout << "Invalid Age";
	}

	//49#
	string pinCode;
	cout << "Enter your PIN code: ";
	cin >> pinCode;

	if (pinCode == "1234")
	{
		cout << "True PIN";
	}
	else
	{
		cout << "Wrong PIN";
	}

	return 0;
}