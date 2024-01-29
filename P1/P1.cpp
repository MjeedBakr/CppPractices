#include <iostream>
#include <string>
#include <cctype>
#include "MyLib.h"

using namespace std;

char invertLetterCase(char letter)
{

	return isupper(letter) ? tolower(letter) : toupper(letter);
}

string invertStringCase(string str)
{
	for (int i = 0; i < str.length(); i++)
	{
		if (str[i] == ' ')
			continue;
		else
			str [i] = invertLetterCase(str[i]);
	}
	return str;
}


int main() {
	

	string sentence = MyRead::readString("Please enter your String:\n");;

	cout << "\nString after inverting all letters:\n";
	cout << invertStringCase(sentence) << endl;

	return 0;



}