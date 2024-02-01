#include <iostream>
#include <string>
#include <cctype>
#include "MyLib.h"

using namespace std;

bool isVowel(char letter)
{
	letter = tolower(letter);
	char vowelLetters[5] = {'a', 'e', 'i', 'o', 'u'};

	for (char& vowelLetter : vowelLetters)
	{
		if (vowelLetter == letter)
			return true;
	}
	return false;
}

int main() {
	

	
	char letter = MyRead::readChar("Please enter a character:\n");

	
	if (isVowel(letter))
		cout << "\nYES Letter '" << letter << "' is vowel" << endl;
	else
		cout << "\nNO Letter '" << letter << "' is not vowel" << endl;

	return 0;



}