#include <iostream>
#include <string>
#include <cctype>
#include <vector>
#include "MyLib.h"

using namespace std;

string joinString(vector<string> vWords, string delimiter)
{
	string sentence = "";

	for (string &word : vWords)
	{
		sentence += word + delimiter;
	}

	return sentence.substr(0, sentence.length() - delimiter.length());
}

string joinString(string words[100], int arrLength, string delimiter)
{
	string sentence = "";

	for (int i = 0; i < arrLength; i++)
	{
		sentence += words[i] + delimiter;
	}

	return sentence.substr(0, sentence.length() - delimiter.length());
}

int main() {

	vector <string> vWords{ "Ahmad", "Ali", "Ghala", "Sara" };
	cout << "\nVector after join:\n";
	cout << joinString(vWords, "###");

	string arrWords[100] = { "Ali", "Yasser", "Mohammed" };
	cout << "\nArray after join:\n";
	cout << joinString(arrWords, 3, "###");




	system("pause>0");



}