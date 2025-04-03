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

	string firstName()
	{
		return _firstName;
	}

	void setLastName(string lastName)
	{
		_lastName = lastName;
	}

	string lastName()
	{
		return _lastName;
	}

	string fullName()
	{
		return _firstName + " " + _lastName;
	}

};



int main()
{
	clsPerson person1;
	person1.setFirstName("Abdulmajeed");
	person1.setLastName("Bakr");

	cout << "Person1: " << person1.fullName() << endl;
}