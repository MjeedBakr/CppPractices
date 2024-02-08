#include <iostream>
#include <string>
#include <cctype>
#include "MyLib.h"

using namespace std;


void printWordsInSentence(string sentence)
{
	string word = "";
	string delimiter = " ";
	short position = 0;

	//get the position of the delimiter and check if its any delimeter
	while ((position = sentence.find(delimiter)) != std::string::npos)
	{
		word = sentence.substr(0, position);
		if (word != "")
		{
			cout << word << endl;
		}

		//remove the printed word from the sentence
		sentence.erase(0, position + delimiter.length());
	}

	//print last word of the string
	if (!sentence.empty())
	{
		cout << sentence << endl;
	}
}
	

int main() {
	

	
	string sentence = MyRead::readString("Please enter a String:\n");

	
	
	printWordsInSentence(sentence);

	return 0;



}