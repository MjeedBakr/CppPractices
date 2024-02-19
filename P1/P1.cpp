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

void printClientRecord(strucClient client)
{
	cout << "\nAccount Number: " << client.accountNumber;
	cout << "\nPin Code      : " << client.PinCode;
	cout << "\nName          : " << client.name;
	cout << "\nPhone         : " << client.phone;
	cout << "\nAccount Balance: " << client.accountBalance;
}

void findClientByNumber(vector<strucClient> vClients)
{
	string input = MyRead::readString("Please enter Account Nubmber: ");

	for (strucClient client : vClients)
	{
		if (client.accountNumber == input)
		{
			cout << "\nThe follwing are the client details:\n";
			printClientRecord(client);
			return;
		}
	}

	cout << "\nClient with Account Number (" << input << ") Not Found!";

}

int main() {


	vector <strucClient> vClients = loadClientsDataFromFile(clientsFileName);
	findClientByNumber(vClients);


	system("pause>0");
	return 0;

}