#include <iostream>
#include <string>
#include <iomanip>
#include "MyLib.h"

using namespace std;

class clsPerson
{
	int x;

private:
	int age;

public:
	string firstName;
	string lastName;

	string fullName()
	{
		return firstName + " " + lastName;
	}

};

int main() {

	clsPerson person1;

	person1.firstName = "Abdulmajeed";
	person1.lastName = "Bakr";

	cout << person1.fullName() << endl;

	system("pause>0");
	return 0;

}