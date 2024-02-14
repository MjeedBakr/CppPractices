#include <iostream>
#include <string>
#include <cctype>
#include <vector>
#include "MyLib.h"

using namespace std;

string convertToUpper(string str)
{

	for (char& i : str)
		i = toupper(i);

	return str;
}

string replaceWordInStringnoMatch(string sentence, string oldWord, string newWord)
{
	string s1 = "";
	int position = 0;

	string upperSentence = convertToUpper(sentence);
	string upperOldWord = convertToUpper(oldWord);

	while ((position = upperSentence.find(upperOldWord)) != std::string::npos)
	{
		s1 += sentence.substr(0, position) + newWord;
		sentence.erase(0, position + oldWord.length());
		upperSentence.erase(0, position + oldWord.length());
	}

	return s1 + sentence;
}

string replaceWordInString(string sentence, string oldWord, string newWord)
{
	string s1 = "";
	int position = 0;

	while ((position = sentence.find(oldWord)) != std::string::npos)
	{
		s1 += sentence.substr(0, position) + newWord;
		sentence.erase(0, position + oldWord.length());
	}

	return s1 + sentence;
}


int main() {

	string sentence = "Welcome to Jordan , Jordan is a nice country";


	cout << "\nString after replace match case:";
	cout << "\n" << replaceWordInString(sentence, "jordan", "Saudi Arabia");

	cout << "\nString after replace no match case:";
	cout << "\n" << replaceWordInStringnoMatch(sentence, "jordan", "Saudi Arabia");
	

	system("pause>0");



}