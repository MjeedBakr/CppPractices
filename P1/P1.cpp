#include <iostream>
#include <string>
using namespace std;


int main() {

	string name = "My Name is Abdulmajeed Bakr";

	
	cout << name.length() << endl;

	//return the letter at index 11
	cout << name.at(11) << endl;

	//add it to the end of the string
	cout << name.append(" Mohammed.") << endl;

	//add it to position 27
	cout << name.insert(27, " Bin") << endl;

	//return 16 character after index 11
	cout << name.substr(11, 16) << endl;

	//add | to the end of the string
	name.push_back('|');
	cout << name << endl;

	//delete the last character
	name.pop_back();
	cout << name << endl;

	cout << name.find("Bakr") << endl;
	cout << name.find("Said") << endl;// returns a long random number
	
	if (name.find("Said") == name.npos) //npos : Not in position
		cout << "Ali is not found" << endl;

	//Clear or delete all the characters
	name.clear();
	cout << name << endl;


	return 0;



}