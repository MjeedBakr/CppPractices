#include <iostream>
#include <string>
#include <cctype>
#include <vector>
#include "MyLib.h"

using namespace std;

vector<string> reverseVector(vector<string> vVector)
{
	vector <string> newVector;
	string word;

	for (short i = 0; i < vVector.size(); i++)
	{
		word = vVector.at(vVector.size() - i - 1);
		newVector.push_back(word);
	}

	return newVector;
}


int main() {

	string sentence = MyRead::readString("Please Enter Your String?");

	vector<string> vWords;
	vWords = MyString::splitSentence(sentence, " ");

	vWords = reverseVector(vWords);

	cout << "\nString after reversing words: \n";
	for (string& word : vWords)
	{
		cout << word << " ";
	}
	




	system("pause>0");



}