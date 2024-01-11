#include <iostream>
#include <vector>
#include <string>
#include <fstream>


using namespace std;

void saveVectorToFile(string fileName, vector <string> vFileContent)
{
	fstream myFile;
	myFile.open(fileName, ios::out);

	if (myFile.is_open())
	{
		for (string& line : vFileContent)
			if (line != "")
				myFile << line << endl;

		myFile.close();
	}
}

int main() {
	
	vector <string> vNames = { "Ali", "Shadi", "Maher", "Fadi", "Lama" };
	saveVectorToFile("myFile.txt", vNames);

	return 0;



}