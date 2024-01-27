#include <iostream>
#include <string>
#include <cctype>
#include "MyLib.h"


using namespace std;

string convertToUpper(string str)
{
	bool isFirstLetter = true;


	for (int i = 0; i < str.length(); i++)
	{
		if (str[i] != ' ' && isFirstLetter)
			str[i] = toupper(str[i]);

		isFirstLetter = (str[i] == ' ' ? true : false);
	}

	return str;	
}

int main() {
	

	convertToUpper(MyRead::readString("Please enter your string:\n"));
	return 0;



}