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

void printVowelsInString(string sentence)
{

	cout << "\nVowels in string are: ";
	for (char& letter : sentence)
		if (isVowel(letter))
			cout << letter << "\t";

	cout << endl;
}
	

int main() {
	

	
	string sentence = MyRead::readString("Please enter a String:\n");

	
	
	printVowelsInString(sentence);

	return 0;



}