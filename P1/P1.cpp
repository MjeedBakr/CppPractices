#include <iostream>
#include <string>
#include <cctype>
#include "MyLib.h"

using namespace std;

short countSmallLetters(string sentence)
{
	short smallLetters = 0;

	for (short i = 0; i < sentence.length(); i++)
		if (islower(sentence[i]))
			smallLetters++;

	return smallLetters;
}

short countCapitalLetters(string sentence)
{
	short capitalLetters = 0;

	for (short i = 0; i < sentence.length(); i++)
		if (isupper(sentence[i]))
			capitalLetters++;

	return capitalLetters;
}


int main() {
	

	string sentence = MyRead::readString("Please enter your String:\n");

	cout << "\nString Length = " << sentence.length() << endl;
	printf("Capital Letters Count = %d\n", countCapitalLetters(sentence));
	printf("Small Letters Count = %d\n", countSmallLetters(sentence));

	return 0;



}