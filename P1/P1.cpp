#include <iostream>
#include <string>
#include <cctype>
#include "MyLib.h"


using namespace std;

string convertToLower(string str)
{
	bool isFirstLetter = true;


	for (int i = 0; i < str.length(); i++)
	{
		if (str[i] != ' ' && isFirstLetter)
			str[i] = tolower(str[i]);

		isFirstLetter = (str[i] == ' ' ? true : false);
	}

	return str;	
}

int main() {
	

	convertToLower(MyRead::readString("Please enter your string:\n"));
	return 0;



}