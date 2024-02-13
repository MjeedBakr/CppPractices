#include <iostream>
#include <string>
#include <cctype>
#include <vector>
#include "MyLib.h"

using namespace std;

string replaceWordInString(string sentence, string oldWord, string newWord)
{
	short position = sentence.find(oldWord);

	while (position != std::string::npos)
	{
		sentence = sentence.replace(position, oldWord.length(), newWord);
		position = sentence.find(oldWord);
	}

	return sentence;
}


int main() {

	string sentence = MyRead::readString("Please Enter Your String:\n");


	cout << "\nString after replace:";
	cout << "\n" << replaceWordInString(sentence, "Jordan", "USA");
	

	system("pause>0");



}