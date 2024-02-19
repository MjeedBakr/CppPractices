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
	cout << "| " << setw(15) << left << client.accountNumber;
	cout << "| " << setw(10) << left << client.PinCode;
	cout << "| " << setw(40) << left << client.name;
	cout << "| " << setw(12) << left << client.phone;
	cout << "| " << setw(12) << left << client.accountBalance;
}

void printAllClientsData(vector <strucClient> vClients)
{
	cout << "\n\t\t\t\tClient List (" << vClients.size() << ") Client(s).";
	cout << "\n_______________________________________________________";
	cout << "_________________________________________\n" << endl;

	cout << "| " << left << setw(15) << "Account Number";
	cout << "| " << left << setw(10) << "Pin Code";
	cout << "| " << left << setw(40) << "Client Name";
	cout << "| " << left << setw(12) << "Phone";
	cout << "| " << left << setw(12) << "Balance";
	cout << "\n_______________________________________________________";
	cout << "_________________________________________\n" << endl;

	for (strucClient client : vClients)
	{
		printClientRecord(client);
		cout << endl;
	}

	cout << "\n_______________________________________________________";
	cout << "_________________________________________\n" << endl;
}

int main() {


	vector <strucClient> vClients = loadClientsDataFromFile(clientsFileName);
	printAllClientsData(vClients);


	system("pause>0");
	return 0;

}