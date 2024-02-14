#include <iostream>
#include <string>
#include <cctype>
#include <vector>
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

int main() {

	cout << "\nPlease Enter Client Data: \n\n";

	strucClient client;
	client = readClientData();

	cout << "\n\n" << endl;
	cout << "Client Record for Saving is: \n";


	cout << converRecordToLine(client);


	system("pause>0");

}