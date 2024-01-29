#include <iostream>
#include <string>
#include <cctype>
#include "MyLib.h"

using namespace std;

char invertLetterCase(char letter)
{

	return isupper(letter) ? tolower(letter) : toupper(letter);
}


int main() {
	

	char letter = MyRead::readChar("Please enter your char:\n");;

	cout << "\nChar after inverting case:\n";
	cout << invertLetterCase(letter);

	return 0;



}