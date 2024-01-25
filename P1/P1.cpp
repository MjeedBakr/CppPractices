#include <iostream>
#include <string>
#include <cctype>


using namespace std;



void printFirstLetterOfEachWord(string sentence)
{
	cout << "\nFirst Letters of this string are:\n";
	cout << sentence[0] << "\n";
	for (int i = 1; i < sentence.length(); i++)
	{
		if (sentence[i] == ' ')
			cout << sentence[i + 1] << "\n";
	}
}

int main() {

	cout << "Please enter your string:\n";
	string sentence;
	getline(cin, sentence);

	printFirstLetterOfEachWord(sentence);
	return 0;



}