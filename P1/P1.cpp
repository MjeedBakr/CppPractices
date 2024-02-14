#include <iostream>
#include <string>
#include <cctype>
#include <vector>
#include "MyLib.h"

using namespace std;

string removePunctuations(string sentence)
{
	string s1 = "";
	
	for (int i = 0; i < sentence.length(); i++)
	{
		if (!ispunct(sentence[i]))
		{
			s1 += sentence[i];
		}
	}

	return s1;
}

int main() {

	string sentence = "Welcome to Jordan, Jordan is a nice country; it,s amazing.";

	cout << "\nPunctuations removed:";
	cout << "\n" << removePunctuations(sentence);


	system("pause>0");

}