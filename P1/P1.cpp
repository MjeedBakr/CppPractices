#include <iostream>
#include <string>
#include <cctype>
#include <vector>
#include "MyLib.h"

using namespace std;

string trimLeft(string sentence)
{
	
	for (short i = 0; i < sentence.length(); i++)
	{
		if (sentence[i] != ' ')
		{
			return sentence.substr(i, sentence.length() - i);
		}

	}
	return "";
}

string trimRight(string sentence)
{

	for (short i = sentence.length(); i >= 0; i--)
	{
		if (sentence[i] != ' ')
		{
			return sentence.substr(0, i + 1);
		}

	}
	return "";
}

string trim(string sentence)
{
	return(trimLeft(trimRight(sentence)));
}

int main() {



	string sentence = MyRead::readString("Please enter a String:\n");


	cout << "String = " << sentence << endl;
	cout << "Trim Left = " << trimLeft(sentence) << endl;
	cout << "Trim Right = " << trimRight(sentence) << endl;
	cout << "Trim = " << trim(sentence) << endl;

	return 0;



}