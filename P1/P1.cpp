#include <iostream>
#include <string>
#include <cctype>
#include <vector>
#include "MyLib.h"

using namespace std;

string convertToUpperByVal(string str)
{

	for (char& i : str)
		i = toupper(i);

	return str;
}

string replaceWordInStringUsingSplit(string sentence, string oldWord, string newWord, bool matchCase = true)
{
	
	vector<string> vString = MyString::splitSentence(sentence, " ");

	for (string& word : vString)
	{
		if (matchCase)
		{
			if (word == oldWord)
				word = newWord;
		}
		else
		{
			if (convertToUpperByVal(word) == convertToUpperByVal(oldWord))
				word = newWord;
		}
	}

	return MyString::joinString(vString, " ");

}


int main() {

	string sentence = "Welcome to Jordan , Jordan is a nice country";


	cout << "\nString after replace match case:";
	cout << "\n" << replaceWordInStringUsingSplit(sentence, "jordan", "Saudi Arabia");

	cout << "\nString after replace no match case:";
	cout << "\n" << replaceWordInStringUsingSplit(sentence, "jordan", "Saudi Arabia", false);
	

	system("pause>0");



}