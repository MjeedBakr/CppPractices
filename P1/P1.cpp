#include <iostream>
#include <string>
#include <cctype>
#include "MyLib.h"

using namespace std;

enum enCase {Upper =0, Lower = 1, NoCase = 3};

enCase findCaseType(char letter)
{
	return (isupper(letter) ? enCase::Upper : enCase::Lower);
}

short countLetterInString(string str, char letter)
{
	short count = 0;
	for (short i = 0; i < str.length(); i++)
	{
		if (str[i] == letter)
			count++;
	}

	return count;
}

short countLetterInStringNoCase(string str, char letter)
{
	short count = 0;
	for (short i = 0; i < str.length(); i++)
	{
		if (str[i] == letter || str[i] == MyString::invertLetterCase(letter))
			count++;
	}

	return count;
}

short countLettersInString(string str, char letter, enCase caseType = enCase::Lower)
{
	short count = 0;

	if (caseType != enCase::NoCase)
	{
		caseType = findCaseType(letter);
	}

	switch (caseType)
	{
	case Upper:
	case Lower:
		count = countLetterInString(str, letter);
		break;

	case NoCase:
		count = countLetterInStringNoCase(str, letter);
		break;
	}
	

	return count;
}

int main() {
	

	string sentence = MyRead::readString("Please enter your String:\n");
	char letter = MyRead::readChar("Please enter a character:\n");

	
	cout << "\nLetter " << letter << " Count = " << countLettersInString(sentence, letter) << endl;
	cout << "\nLetter " << letter << " Or " << MyString::invertLetterCase(letter) << " Count = " << countLettersInString(sentence, letter, enCase::NoCase) << endl;

	return 0;



}