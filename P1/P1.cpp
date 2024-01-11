#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include "MyLib.h"


using namespace std;


void deleteRecordFromFile(string fileName, string record)
{
	vector <string> vFileContent;
	MyFile::loadDataFromFileToVector("myFile.txt", vFileContent);

	for (string& line : vFileContent)
		if (line == record)
		{
			line = "";
			break;
		}

	MyFile::saveVectorToFile("myFile.txt", vFileContent);
	
}

int main() {
	
	cout << "File Content before delete: \n";
	MyFile::printFileContent("myFile.txt");

	deleteRecordFromFile("myFile.txt", "Maher");

	cout << "File Content after delete: \n";
	MyFile::printFileContent("myFile.txt");




	return 0;



}