#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>
#include "MyLib.h"

using namespace std;

const string clientsFileName = "ClientsData.txt";

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
	vector<string> vClientData;

	vClientData = MyString::splitSentence(lineData, delimiter);

	client.accountNumber = vClientData[0];

	client.PinCode = vClientData[1];

	client.name = vClientData[2];

	client.phone = vClientData[3];

	client.accountBalance = stod(vClientData[4]);

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

void addClientDataToFile(string fileName, string lineData)
{
	fstream myFile;

	myFile.open(fileName, ios::out | ios::app);

	if (myFile.is_open())
	{
		myFile << lineData << endl;
		myFile.close();
	}

}

void addNewClient()
{
	strucClient client;
	client = readClientData();
	addClientDataToFile(clientsFileName, converRecordToLine(client));
}

void addClients()
{
	char addMore = 'Y';

	do
	{
		system("cls");
		cout << "Adding New Client:\n\n";

		addNewClient();
		cout << "\nClient Added Successfully, do you want to add more clients?";
		cin >> addMore;
	} while (toupper(addMore) == 'Y');
}

int main() {


	strucClient client;

	string lineData = "A150#//#1234#//#Abdulmajeed Bakr#//#0544363422#//#5270.000000";
	cout << "Line Record is:\n" << lineData << endl;

	addClients();


	system("pause>0");

}