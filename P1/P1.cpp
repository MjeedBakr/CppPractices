#include <iostream>
#include <string>
#include <iomanip>
#include "MyLib.h"

using namespace std;

class clsPerson
{
private:
	string _firstName;
	string _lastName;

public:
	void setFirstName(string firstName)
	{
		_firstName = firstName;
	}

	string getFirstName()
	{
		return _firstName;
	}

	// Map Set and Get to firstName for easier call
	__declspec(property(get = getFirstName, put = setFirstName)) string firstName;

	void setLastName(string lastName)
	{
		_lastName = lastName;
	}

	string getLastName()
	{
		return _lastName;
	}

	__declspec(property(get = getLastName, put = setLastName)) string lastName;

	string getFullName()
	{
		return _firstName + " " + _lastName;
	}

	__declspec(property(get = getFullName)) string fullName;

};



int main()
{
	clsPerson person1;
	person1.firstName = "Abdulmajeed";
	person1.lastName = "Bakr";

	cout << "Person1: " << person1.fullName << endl;
}