#include <iostream>
#include <string>
#include <cctype>
#include <iomanip>
#include "MyLib.h"

using namespace std;

struct strucClient
{
	string accountNumber;
	string PinCode;
	string name;
	string phone;
	double accountBalance;
};

strucClient readClientData()
{
	strucClient client;

	client.accountNumber = MyRead::readString("Enter Account Number: ");
	client.PinCode = MyRead::readString("Enter PinCode: ");
	client.name = MyRead::readString("Enter Name: ");
	client.phone = MyRead::readString("Enter Phone: ");
	client.accountBalance = MyRead::readDouble("Enter AccountBalance: ");

	return client;

}

string converRecordToLine(strucClient client, string delimiter = "#//#")
{
	string stClientRecord = "";

	stClientRecord += client.accountNumber + delimiter;
	stClientRecord += client.PinCode + delimiter;
	stClientRecord += client.name + delimiter;
	stClientRecord += client.phone + delimiter;
	stClientRecord += to_string(client.accountBalance);

	return stClientRecord;
}

strucClient convertLineToRecord(string lineData, string delimiter = "#//#")
{
	strucClient client;
	short delimiterPosition = lineData.find(delimiter);

	client.accountNumber = lineData.substr(0, delimiterPosition);
	lineData.erase(0, delimiterPosition + delimiter.length());

	delimiterPosition = lineData.find(delimiter);
	client.PinCode = lineData.substr(0, delimiterPosition);
	lineData.erase(0, delimiterPosition + delimiter.length());

	delimiterPosition = lineData.find(delimiter);
	client.name = lineData.substr(0, delimiterPosition);
	lineData.erase(0, delimiterPosition + delimiter.length());

	delimiterPosition = lineData.find(delimiter);
	client.phone = lineData.substr(0, delimiterPosition);
	lineData.erase(0, delimiterPosition + delimiter.length());

	client.accountBalance = stod(lineData);

	return client;
}

void printClientData(strucClient client)
{
	cout << "\nThe following is the extracted client record:\n";

	cout << "\nAccount Number : " << client.accountNumber;
	cout << "\nPin Code       : " << client.PinCode;
	cout << "\nName           : " << client.name;
	cout << "\nPhone          : " << client.phone;
	cout << "\nAccount Balance: " << client.accountBalance;
	
}

int main() {


	strucClient client;

	string lineData = "A150#//#1234#//#Abdulmajeed Bakr#//#0544363422#//#5270.000000";
	cout << "Line Record is:\n" << lineData << endl;

	client = convertLineToRecord(lineData);


	printClientData(client);


	system("pause>0");

}