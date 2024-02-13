#include <iostream>
#include <string>
#include <cctype>
#include <vector>
#include "MyLib.h"

using namespace std;

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

	string sentence = MyRead::readString("Please Enter Your String:\n");


	cout << "\nString after replace:";
	cout << "\n" << replaceWordInString(sentence, "Jordan", "USA");
	

	system("pause>0");



}