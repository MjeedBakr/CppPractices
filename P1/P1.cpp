#include <iostream>
using namespace std;

//4#
void driverHiring()
{
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

}

//8#
void ifStudentsPassOrFail(short mark)
{

	if (mark >= 50)
	{
		cout << "Pass";
	}
	else
	{
		cout << "Fail";
	}

}

//11#
float avgStudentsMark(short mark1, short mark2, short mark3)
{
	cout << "Enter Mark1: ";
	cin >> mark1;
	cout << "Enter Mark2: ";
	cin >> mark2;
	cout << "Enter Mark3: ";
	cin >> mark3;

	return avgMarks = (mark1 + mark2 + mark3) / 3;

}

//24#
void ageValidation(short age)
{
	if (age >= 18 && age <= 45)
	{
		cout << "Valid Age";
	}
	else
	{
		cout << "Invalid Age";
	}

}

//49#
void validatePinCode(string pinCode)
{
	if (pinCode == "1234")
	{
		cout << "True PIN";
	}
	else
	{
		cout << "Wrong PIN";
	}

}
int main()
{
	return 0;
}