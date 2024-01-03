#include <iostream>
#include <fstream>
#include<string>


using namespace std;

void printFileContent(string fileName)
{
	fstream myFile;
	myFile.open(fileName, ios::in); //Activate Read Mode

	if (myFile.is_open())
	{
		string lineContent;

		while (getline(myFile, lineContent))
		{
			cout << lineContent << endl;
		}
		myFile.close();
	}
}

int main() {

	printFileContent("myFile.txt");
	return 0;



}