#include <iostream>
#include <string>
#include <cctype>
#include "MyLib.h"


using namespace std;

string convertToUpper(string str)
{
	for (char& i : str)
	{
		i = toupper(i);
	}
	cout << str << endl;
	return str;
}

int main() {
	

	convertToUpper(MyRead::readString("Please enter your string:\n"));
	return 0;



}