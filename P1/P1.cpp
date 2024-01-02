#include <iostream>
#include <fstream>
using namespace std;


int main() {

	fstream myFile;

	myFile.open("myFile.txt", ios::out); //Activate Write mood

	if (myFile.is_open())
	{
		myFile << "Hi 1\n";
		myFile << "Hi from line 2\n";
		myFile << "Hi from line 3\n";

		myFile.close();

	}
	return 0;



}