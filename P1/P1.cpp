#include <iostream>
#include <string>
#include <cctype>
#include "MyLib.h"

using namespace std;

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

int main() {
	

	string sentence = MyRead::readString("Please enter your String:\n");
	char letter = MyRead::readChar("Please enter a character:\n");

	
	cout << "\nLetter " << letter << " Count = " << countLetterInString(sentence, letter) << endl;

	return 0;



}