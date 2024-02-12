#include <iostream>
#include <string>
#include <cctype>
#include <vector>
#include "MyLib.h"

using namespace std;


vector<string> splitSentence(string sentence, string delimiter)
{
	string word = "";
	vector<string> vWords;
	int position = 0;

	while ((position = sentence.find(delimiter)) != std::string::npos)
	{
		word = sentence.substr(0, position);
		if (!word.empty())
		{
			vWords.push_back(word);
		}

		sentence.erase(0, position + delimiter.length());

	}

	if (!sentence.empty())
	{
		vWords.push_back(sentence);
	}

	return vWords;
}
	

int main() {
	

	
	string sentence = MyRead::readString("Please enter a String:\n");
	vector<string> vWords = splitSentence(sentence, " ");

	
	
	cout << "\nTokens = " << vWords.size() << endl;

	for (string & word : vWords)
	{
		cout << word << endl;
	}

	return 0;



}