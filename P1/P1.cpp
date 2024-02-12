#include <iostream>
#include <string>
#include <cctype>
#include <vector>
#include "MyLib.h"

using namespace std;

string joinString(vector<string> vWords, string delimiter)
{
	string sentence = vWords.at(0);

	for (int i = 1; i < vWords.size(); i++)
	{
		sentence += delimiter + vWords.at(i);
	}

	return sentence;
}

int main() {

	vector <string> vWords{ "Ahmad", "Ali", "Ghala", "Sara" };
	cout << "\nVector after join:\n";
	cout << joinString(vWords, "|") << endl;




	return 0;



}