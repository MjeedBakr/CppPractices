#include <iostream>
#include <string>
#include <cctype>
#include <vector>
#include "MyLib.h"

using namespace std;

string reverseWordsInString(string sentence)
{
	vector<string> vString;
	string s1 = "";
	vString = MyString::splitSentence(sentence, " ");

	//declare iterator
	vector<string>::iterator iter = vString.end();

	while (iter != vString.begin())
	{
		--iter;

		s1 += *iter + " ";
	}

	s1 = s1.substr(0, s1.length() - 1); //remove last space

	return s1;
}


int main() {

	string sentence = MyRead::readString("Please Enter Your String:\n");


	cout << "\nString after reversing words:";
	cout << "\n" << reverseWordsInString(sentence);
	

	system("pause>0");



}