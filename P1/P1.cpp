#include <iostream>
#include <cstdlib>
using namespace std;

enum enCharType {SmallLetter = 1, CapitalLetter = 2, SpecialCharacter = 3, Digit = 4};

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
int main()
{
	//Seeds the random number generator in C++, called only once
	srand((unsigned)time(NULL));

	cout << randomCharacter(enCharType::SmallLetter) << endl;
	cout << randomCharacter(enCharType::CapitalLetter) << endl;
	cout << randomCharacter(enCharType::SpecialCharacter) << endl;
	cout << randomCharacter(enCharType::Digit) << endl;


	return 0;
}