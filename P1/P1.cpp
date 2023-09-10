#include <iostream>
using namespace std;

struct strPersonInfo
{
	string firstName;
	string lastName;
	short age;
	string phoneNumber;
};

void readPersonInfo(strPersonInfo& person)
{
	cout << "Enter your first name: ";
	cin >> person.firstName;
	cout << "Enter your last name: ";
	cin >> person.lastName;
	cout << "Enter your age: ";
	cin >> person.age;
	cout << "Enter your phone number: ";
	cin >> person.phoneNumber;
}

void printPersonInfo(strPersonInfo person)
{
	cout << "First Name: " << person.firstName << "\n";
	cout << "Last Name: " << person.lastName << "\n";
	cout << "Age: " << person.age << " Years.\n";
	cout << "Phone: " << person.phoneNumber << ".\n";
}

void readPeopleInfo(strPersonInfo person[2])
{
	readPersonInfo(person[0]);
	readPersonInfo(person[1]);
}

void printPeopleInfo(strPersonInfo person[2])
{
	cout << "********************* \n";
	printPersonInfo(person[0]);
	cout << "********************* \n";
	cout << "********************* \n";
	printPersonInfo(person[1]);
	cout << "********************* \n";
}

int main()
{
	strPersonInfo people[2];

	readPeopleInfo(people);
	printPeopleInfo(people);

	return 0;
}
