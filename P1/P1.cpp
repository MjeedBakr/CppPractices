#include <iostream>
#include <fstream>
using namespace std;


int main() {

	fstream myFile;

	myFile.open("myFile.txt", ios::out | ios::app); //Activate Write mood

	if (myFile.is_open())
	{
		myFile << "I am 21 years old\n";
		

		myFile.close();

	}
	return 0;



}