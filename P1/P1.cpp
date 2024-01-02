#include <iostream>
#include <string>
using namespace std;


int main() {

	char x;
	char y;

	x = toupper('a'); //the method returns the ascii code for upper a
	y = tolower('B'); //the method returns the ascii code for lower B
	
	cout << isupper('A') << endl; //returns 0 if false and any number if true
	cout << islower('a') << endl; //returns 0 if false and any number if true
	cout << isdigit('5') << endl; //returns 0 if false and any number if true

	//Punctuation marks are:  !"#$%&'()*+,-./:;<=>?@[\]^_`{|}~
	cout << ispunct('/') << endl; //returns 0 if false and any number if true

	return 0;



}