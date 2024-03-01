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
	bool markForDelete = false;
	bool markForEdit = false;
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

bool findClientByAccountNumber(string accountNumber,vector <strucClient> vClients, strucClient &client)
{
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

bool markClientForEditByAccountNumber(string accountNumber, vector <strucClient>& vClients)
{
	for (strucClient& c : vClients)
	{
		if (c.accountNumber == accountNumber)
		{
			c.markForEdit = true;
			return true;
		}
	}

	return false;
}

void updateClientData(strucClient &client)
{

	client.PinCode = MyRead::readString("Enter PinCode: ");
	client.name = MyRead::readString("Enter Name: ");
	client.phone = MyRead::readString("Enter Phone: ");
	client.accountBalance = MyRead::readDouble("Enter AccountBalance: ");

}

vector <strucClient> saveClientsDataToFile(string fileName, vector <strucClient> vClients)
{
	fstream myFile;
	myFile.open(fileName, ios::out);//overwrite

	string lineContent;

	if (myFile.is_open())
	{
		for (strucClient c : vClients)
		{
			if (c.markForEdit == true)
				updateClientData(c);
		
			lineContent = converRecordToLine(c);
			myFile << lineContent << endl;
		}

		myFile.close();
	}

	return vClients;
}

bool updateClientByAccountNumber(string accountNumber, vector <strucClient>& vClients)
{
	strucClient client;
	char choice = 'n';

	if (findClientByAccountNumber(accountNumber,vClients, client))
	{
		printClientCard(client);
		
		cout << "\n\nAre you sure you want to update this client? y/n ";
		cin >> choice;
		
		if (choice == 'y' || choice == 'Y')
		{
			markClientForEditByAccountNumber(accountNumber, vClients);
			//update data
			saveClientsDataToFile(clientsFileName, vClients);

			//refresh clients vector
			vClients = loadClientsDataFromFile(clientsFileName);

			cout << "\n\nClient updated Successfully.";
			return true;
		}
	}
	else
	{
		cout << "\nClient with Account Number (" << accountNumber << ") Not Found!";
		return false;
	}

}

int main() {

	vector <strucClient> vClients = loadClientsDataFromFile(clientsFileName);
	string accountNumber = readClientAccountNumber();

	updateClientByAccountNumber(accountNumber, vClients);


	system("pause>0");
	return 0;

}