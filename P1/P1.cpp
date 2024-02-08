#include <iostream>
#include <string>
#include <cctype>
#include "MyLib.h"

using namespace std;


short countWordsInSentence(string sentence)
{
	short numberOfWords = 0;
	string word = "";
	string delimiter = " ";
	short position = 0;

	//get the position of the delimiter and check if its any delimeter
	while ((position = sentence.find(delimiter)) != std::string::npos)
	{
		word = sentence.substr(0, position);
		if (word != "")
		{
			numberOfWords++;
		}

		//remove the printed word from the sentence
		sentence.erase(0, position + delimiter.length());
	}

	//count the last word of the string
	if (!sentence.empty())
	{
		numberOfWords++;
	}

	return numberOfWords;

}
	

int main() {
	

	
	string sentence = MyRead::readString("Please enter a String:\n");

	
	
	cout << "\nThe number of words in your string are: " << countWordsInSentence(sentence) << endl;

	return 0;



}