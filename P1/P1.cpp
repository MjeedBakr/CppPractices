#include <iostream>
#include <string>
#include <iomanip>
#include "MyLib.h"

using namespace std;


class clsPerson {

private:
	short _id;
	string _firstName;
	string _lastName;
	string _email;
	string _phoneNumber;
	static int counter;

	short getID()
	{
		return _id;
	}

	void setFirstName(string firstName)
	{
		_firstName = firstName;
	}

	string getFirstName()
	{
		return _firstName;
	}

	void setLastName(string lastName)
	{
		_lastName = lastName;
	}

	string getlastName()
	{
		return _lastName;
	}

	void setEmail(string email)
	{
		_email = email;
	}

	string getEmail()
	{
		return _email;
	}

	void setPhoneNumber(string phoneNumber)
	{
		_phoneNumber = phoneNumber;
	}

	string getPhoneNumber()
	{
		return _phoneNumber;
	}

	string getFullName()
	{
		return _firstName + " " + _lastName;
	}

public:
	clsPerson(string firstName, string lastName, string email, string phoneNumber)
	{
		_firstName = firstName;
		_lastName = lastName;
		_email = email;
		_phoneNumber = phoneNumber;
		_id = counter;
		counter++;
	}

	__declspec(property(get = getID)) short id;
	__declspec(property(get = getFirstName, put = setFirstName)) string firstName;
	__declspec(property(get = getLastName, put = setLastName)) string lastName;
	__declspec(property(get = getFullName)) string fullName;
	__declspec(property(get = getEmail, put = setEmail)) string email;
	__declspec(property(get = getPhoneNumber, put = setPhoneNumber)) string phoneNumber;

	void print()
	{
		cout << "Info:\n";
		cout << "_______________________________________\n";
		cout << "ID               :" << _id << "\n";
		cout << "First Name       :" << _firstName << "\n";
		cout << "Last Name        :" << _lastName << "\n";
		cout << "Full Name        :" << fullName << "\n";
		cout << "Email            :" << _email << "\n";
		cout << "Phone            :" << _phoneNumber << "\n";
		cout << "_______________________________________\n";

		cout << endl;
	}

	void sendEmail(string subject, string content)
	{
		cout << "The Following Message sent successfully to email: " << _email << "\n";
		cout << "Subject: " << subject << "\n";
		cout << "Body: " << content << "\n";

		cout << endl;
	}

	void sendSMS(string content)
	{
		cout << "The Following Message sent successfully to phone: " << _phoneNumber << "\n";
		cout << content << "\n";

		cout << endl;
	}

};

int clsPerson::counter = 0;

int main()
{
	clsPerson person1("Adbulmajeed", "Bakr", "mjeed.bakr@gmail.com", "0544362329");
	person1.print();

	person1.sendEmail("Hi", "How are you?");
	person1.sendSMS("How are you?");

	system("pause>0");
	return 0;
}
