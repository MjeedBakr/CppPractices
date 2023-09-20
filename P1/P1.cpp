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

void readPeopleInfo(strPersonInfo person[], int length)
{
	for (int i = 0; i <= length - 1; i++)
	{
		cout << "For the person (" << i + 1 << ")\n";
		readPersonInfo(person[i]);
		cout << endl;
	}
	cout << "\n" << endl;
}

void printPeopleInfo(strPersonInfo person[], int length)
{
	for (int i = 0; i <= length - 1; i++)
	{
		cout << "********************* \n";
		printPersonInfo(person[i]);
		cout << "\n" << endl;
		cout << "********************* \n";
	}
}

int main()
{
	int numberOfPeople = 0;
	cout << "Enter the number of people you want to add:\n";
	cin >> numberOfPeople;

	strPersonInfo people[100];

	readPeopleInfo(people, numberOfPeople);
	printPeopleInfo(people, numberOfPeople);

	return 0;
}