#pragma once
#include<iostream>
#include<string>
#include "MyLib.h"


using namespace std;

namespace MyRead
{
	int readInt(string message)
	{
		int number;
		cout << message;
		cin >> number;

		return number;
	}

	string readString(string message)
	{
		string str;
		cout << message;
		getline(cin, str);

		return str;
	}

	int readIntInRange(int from, int to, string message)
	{
		int number;
		do
		{
			cout << "\nPlease Enter " << message << " between " << from << " and " << to << ": ";
			cin >> number;
		} while (number > to || number < from);

		return number;
	}

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
}


namespace MyRandom
{
	enum enCharType { SmallLetter = 1, CapitalLetter = 2, SpecialCharacter = 3, Digit = 4 };

	//Seeds the random number generator in C++, called only once
	// call this in main method for rand function --> srand((unsigned)time(NULL));

	using namespace MyRandom;

	short randomNumber(int from, int to)
	{
		short randNum = rand() % (to - from + 1) + from;
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

	string randomWord(enCharType charType, short wordLength)
	{
		string word = "";
		for (int i = 1; i <= wordLength; i++)
		{
			word += randomCharacter(charType);
		}
		return word;
	}

}

namespace MyArray
{

	void printIntArray(int arr[100], int arrayLength)
	{
		for (int i = 0; i <= arrayLength - 1; i++)
			cout << arr[i] << " ";

		cout << endl;
	}
	
	void printStringArray(string arr[100], int arrayLength)
	{
		cout << "\nArray elements: \n";
		for (int i = 0; i <= arrayLength - 1; i++)
			cout << "Array[" << i << "] : " << arr[i] << "\n";

		cout << endl;
	}

	void fillArrayWithRandomNumbers(int arr[100], int arrayLength)
	{

		for (int i = 0; i <= arrayLength - 1; i++)
			arr[i] = MyRandom::randomNumber(1, 100);

	}

	void fillAraayWithRandomNumbers(int arr[100], int arrayLength, int from, int to)
	{

		for (int i = 0; i <= arrayLength - 1; i++)
			arr[i] = MyRandom::randomNumber(1, 100);

	}
}

namespace MyFun
{

	void newLine(short numberOfLines)
	{
		for (int i = 0; i < numberOfLines; i++)
			cout << "\n";
	}

}
