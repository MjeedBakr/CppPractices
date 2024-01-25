#include <iostream>
#include <string>
#include "MyLib.h"


using namespace std;

void printFirstLetterOfEachWord(string sentence)
{
	bool isFirstLetter = true;

	cout << "\nFirst Letters of this string are:\n";

	
	for (int i = 0; i < sentence.length(); i++)
	{
		if (sentence[i] != ' ' && isFirstLetter)
			cout << sentence[i] << "\n";

		isFirstLetter = (sentence[i] == ' ' ? true : false);
	}
}

int main() {
	

	printFirstLetterOfEachWord(MyRead::readString("Please enter your string:\n"));
	return 0;



}