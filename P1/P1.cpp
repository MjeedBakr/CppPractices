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

short countVowelsLetters(string sentence)
{
	short count = 0;

	for (char& letter : sentence)
		if (isVowel(letter))
			count++;

	return count;
}

int main() {
	

	
	string sentence = MyRead::readString("Please enter a String:\n");

	
	cout << "\nnumber of vowels is: " << countVowelsLetters(sentence) << endl;

	return 0;



}