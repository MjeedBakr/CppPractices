#include <iostream>
#include <cstdlib>
using namespace std;

enum enCharType { SmallLetter = 1, CapitalLetter = 2, SpecialCharacter = 3, Digit = 4 };

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

void printStringArray(string arr[100], int arrayLength)
{
	cout << "\nArray elements: \n";
	for (int i = 0; i <= arrayLength - 1; i++)
		cout << "Array[" << i << "] : " << arr[i] << "\n";

	cout << endl;
}

void fillArrayWithKeys(string arr[100], int arrayLength)
{

	for (int i = 0; i <= arrayLength - 1; i++)
		arr[i] = generateKey();

}

int main()
{
	//Seeds the random number generator in C++, called only once
	srand((unsigned)time(NULL));

	string arr[100];
	int arrayLength = 0;

	arrayLength = readPositiveNumber("How many keys do you want: ");
	
	fillArrayWithKeys(arr, arrayLength);

	printStringArray(arr, arrayLength);

	return 0;
}