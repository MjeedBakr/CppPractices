#include <iostream>
#include <fstream>
#include<string>
#include <vector>


using namespace std;

void loadDataFromFileToVector(string fileName, vector <string> &vFileContent)
{
	fstream myFile;
	myFile.open(fileName, ios::in); //Activate Read Mode

	if (myFile.is_open())
	{
		string lineContent;

		while (getline(myFile, lineContent))
		{
			vFileContent.push_back(lineContent);
		}
		myFile.close();
	}
}

int main() {

	vector <string> vFileContent;

	loadDataFromFileToVector("myFile.txt", vFileContent);

	for (string lineContent : vFileContent)
	{
		cout << lineContent << endl;
	}
	return 0;



}