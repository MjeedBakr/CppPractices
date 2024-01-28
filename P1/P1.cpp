#include <iostream>
#include <string>
#include <cctype>
#include "MyLib.h"


using namespace std;

string convertToLower(string &str)
{

	for (char& i : str)
		i = tolower(i);

	return str;	
}

string convertToupper(string &str)
{

	for (char& i : str)
		i = toupper(i);

	return str;	
}


int main() {
	

	string sentence = MyRead::readString("Please enter your string:\n");;

	cout << "\nString After Upper:\n";
	cout << convertToupper(sentence);



	cout << "\nString After Lower:\n";
	cout << convertToLower(sentence);
	return 0;



}