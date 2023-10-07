#include <iostream>
#include <cstdlib>
using namespace std;

enum enCharType {SmallLetter = 1, CapitalLetter = 2, SpecialCharacter = 3, Digit = 4};


int readPositiveNumber(string message)
{
	int number;
	do
	{
		cout << message << endl;
		cin >> number;
	} while (number < 1);
	return number;
}


//function to generate random number
int randomNumber(int from, int to)
{
	int randNum = rand() % (to - from + 1) + from;
	return randNum;
}

char randomCharacter(enCharType charType)
{
	switch (charType)
	{
	case SmallLetter:
		return char(randomNumber(97, 122));
	case CapitalLetter:
		return char(randomNumber(65, 90));
	case SpecialCharacter:
		return char(randomNumber(33, 47));
	case Digit:
		return char(randomNumber(48, 57));
	default:
		break;
	}
}

string generateWord(enCharType charType, short wordLength)
{
	string word = "";
	for (int i = 1; i <= wordLength; i++)
	{
		word += randomCharacter(charType);
	}
	return word;
}

string generateKey()
{
	string key = "";


	key += generateWord(enCharType::CapitalLetter, 4) + "-";
	key += generateWord(enCharType::CapitalLetter, 4) + "-";
	key += generateWord(enCharType::CapitalLetter, 4) + "-";
	key += generateWord(enCharType::CapitalLetter, 4);


	return key;

}

void generateMultipleKeys(short numberOfKeys)
{
	for (int i = 1; i <= numberOfKeys; i++)
	{
		cout << "Key [" << i << "] : " << generateKey() << endl;
	}
}

int main()
{
	//Seeds the random number generator in C++, called only once
	srand((unsigned)time(NULL));

	short numberOfKeys = readPositiveNumber("Please enter the number of keys do you want: ");
	generateMultipleKeys(numberOfKeys);




	return 0;
}