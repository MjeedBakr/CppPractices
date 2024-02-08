#include <iostream>
#include <string>
#include <cctype>
#include "MyLib.h"

using namespace std;


void printWordsInSentence(string sentence)
{
	string word = "";
	for (int i = 0; i < sentence.length(); i++)
	{
		if (sentence[i] != ' ')
		{
			word += sentence[i];
		}
		else
		{
			cout << word << endl;
			word = "";
		}
	}
	cout << word << endl;
}
	

int main() {
	

	
	string sentence = MyRead::readString("Please enter a String:\n");

	
	
	printWordsInSentence(sentence);

	return 0;



}