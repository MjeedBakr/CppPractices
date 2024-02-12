#include <iostream>
#include <string>
#include <cctype>
#include <vector>
#include "MyLib.h"

using namespace std;

string trimLeft(string sentence)
{
	char delimiter = ' ';
	int position = 0;

	for (int i = 0; i < sentence.length(); i++)
	{
		if (sentence[i] == delimiter)
		{
			position++;
		}
		else
		{
			sentence.erase(0, position);
			return sentence;
		}
	}
	return sentence;
}

string trimRight(string sentence)
{
	char delimiter = ' ';
	int position = sentence.length();

	for (int i = sentence.length(); i > 0; i--)
	{
		if (sentence[i - 1] == delimiter)
		{
			position--;
		}
		else
		{
			sentence.erase(position, sentence.length());
			return sentence;
		}
	}
	return sentence;
}

string trim(string sentence)
{
	sentence = trimLeft(sentence);
	sentence = trimRight(sentence);

	return sentence;
}

int main() {



	string sentence = MyRead::readString("Please enter a String:\n");


	cout << "\String = " << sentence << endl;
	cout << "\Trim Left = " << trimLeft(sentence) << endl;
	cout << "\Trim Right = " << trimRight(sentence) << endl;
	cout << "\Trim = " << trim(sentence) << endl;

	return 0;



}