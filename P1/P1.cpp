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

vector<strucClient> loadClientsDataFromFile(string fileName)
{

	vector <strucClient> vClients;

	fstream myFile;
	myFile.open(fileName, ios::in); //read mode

	if (myFile.is_open())
	{
		string line;
		strucClient client;

		while (getline(myFile, line))
		{
			client = convertLineToRecord(line);
			vClients.push_back(client);
		}

		myFile.close();
	}

	return vClients;
}

void printClientCard(strucClient client)
{
	cout << "\nThe follwing are the client details:\n";
	cout << "\nAccount Number: " << client.accountNumber;
	cout << "\nPin Code      : " << client.PinCode;
	cout << "\nName          : " << client.name;
	cout << "\nPhone         : " << client.phone;
	cout << "\nAccount Balance: " << client.accountBalance;
}

bool findClientByAccountNumber(string accountNumber, strucClient &client)
{
	vector<strucClient> vClients = loadClientsDataFromFile(clientsFileName);

	for (strucClient c : vClients)
	{
		if (c.accountNumber == accountNumber)
		{
			client = c;
			return true;
		}
	}
	return false;

}

string readClientAccountNumber()
{
	string accountNumber = "";

	accountNumber = MyRead::readString("Please enter account number : ");
	return accountNumber;
}

int main() {

	strucClient client;
	string accountNumber = readClientAccountNumber();

	if (findClientByAccountNumber(accountNumber, client))
	{
		printClientCard(client);
	}
	else
	{
		cout << "\nClient with Account Number (" << accountNumber << ") Not Found!";
	}

	system("pause>0");
	return 0;

}