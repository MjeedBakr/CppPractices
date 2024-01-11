#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include "MyLib.h"


using namespace std;


void updateRecordFromFile(string fileName, string record, string updateTo)
{
	vector <string> vFileContent;
	MyFile::loadDataFromFileToVector(fileName, vFileContent);

	for (string& line : vFileContent)
		if (line == record)
		{
			line = updateTo;
			break;
		}

	MyFile::saveVectorToFile(fileName, vFileContent);
	
}

int main() {
	
	cout << "File Content before update: \n";
	MyFile::printFileContent("myFile.txt");

	updateRecordFromFile("myFile.txt", "Ali", "Fahad");
	updateRecordFromFile("myFile.txt", "Omar", "Sultan");

	cout << "\n\nFile Content after update: \n";
	MyFile::printFileContent("myFile.txt");




	return 0;



}