#include <iostream>
#include <string>
#include <cctype>
#include <vector>
#include "MyLib.h"

using namespace std;

string removePunctuations(string sentence)
{
	short position;
	
	for (char l : sentence)
	{
		if (ispunct(l))
		{
			position = sentence.find(l);
			sentence.replace(position, 1, "");
		}
	}

	return sentence;

}


int main() {

	string sentence = "Welcome to Jordan, Jordan is a nice country; it,s amazing.";


	cout << "\nPunctuations removed:";
	cout << "\n" << removePunctuations(sentence);

	

	system("pause>0");



}