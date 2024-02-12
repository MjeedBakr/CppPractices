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

int main() {

	vector <string> vWords{ "Ahmad", "Ali", "Ghala", "Sara" };
	cout << "\nVector after join:\n";
	cout << joinString(vWords, "###");




	system("pause>0");



}