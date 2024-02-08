#pragma once
#include<iostream>
#include<string>
#include<fstream>
#include<vector>
#include<iomanip>
#include "MyLib.h"


using namespace std;

namespace MyRead
{
	int readInt(string message)
	{
		int number;
		cout << message;
		cin >> number;

		while (cin.fail())
		{
			cin.clear();
			cin.ignore(std::numeric_limits < std::streamsize>::max(), '\n');

			cout << "Invalid number, enter a valid one:";
			cin >> number;
		}

		return number;
	}

	string readString(string message)
	{
		string str;
		cout << message;
		getline(cin, str);

		return str;
	}

	char readChar(string message)
	{
		char str;
		cout << message;
		cin >> str;

		return str;
	}

	int readIntInRange(int from, int to, string message)
	{
		int number;

		number = MyRead::readInt(message);

		while (number > to || number < from)
		{
			cout << "\nPlease Enter a number between " << from << " and " << to << ": ";
			cin >> number;
		}


		return number;
	}

	int readPositiveNumber(string message)
	{
		int number;
		number = MyRead::readInt(message);

		while (number < 1)
		{
			cout << "Please enter a positive number: ";
			cin >> number;
		}

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

namespace MyMatrix
{
	void fillMatrixWithRandomNumbers(int matrix[3][3], int rows, int columns)
	{
		for (int i = 0; i < rows; i++)
		{
			for (int j = 0; j < columns; j++)
				matrix[i][j] = MyRandom::randomNumber(1, 100);
		}
	}

	void printMatrix(int matrix[3][3], int rows, int columns)
	{
		for (int i = 0; i < rows; i++)
		{
			for (int j = 0; j < columns; j++)
				cout << matrix[i][j] << "\t";
			cout << "\n";
		}
		cout << endl;
	}

	int rowSum(int matrix[3][3], short rowNumber, short columns)
	{
		int rowSum = 0;
		for (int i = 0; i < columns; i++)
		{
			rowSum += matrix[rowNumber][i];
		}

		return rowSum;
	}

	void printRowMatrixSum(int matrix[3][3], short rows, short columns)
	{
		for (int i = 0; i < rows; i++)
		{
			printf("Row %d Sum = %d\n", i + 1, rowSum(matrix, i, columns));
		}
		cout << endl;
	}

	int sumOfMatrices(int matrix[3][3], short rows, short columns)
	{
		int sum = 0;
		for (int i = 0; i < rows; i++)
		{
			for (int j = 0; j < columns; j++)
				sum += matrix[i][j];
		}

		return sum;
	}

	bool areTwoMatricesSumEqual(int matrix1[3][3], int matrix2[3][3], short rows, short columns)
	{
		return (sumOfMatrices(matrix1, rows, columns) == sumOfMatrices(matrix2, rows, columns));

	}

	bool areTwoMatricesTypical(int matrix1[3][3], int matrix2[3][3], short rows, short columns)
	{
		for (int i = 0; i < rows; i++)
		{
			for (int j = 0; j < columns; j++)
				if (matrix1[i][j] != matrix2[i][j])
					return false;
		}

		return true;
	}

	bool isMatrixIdentity(int matrix[3][3], short rows, short columns)
	{
		for (int i = 0; i < rows; i++)
		{
			for (int j = 0; j < columns; j++)
				if (i == j && matrix[i][j] != 1)
				{
					return false;
				}
				else if (i != j && matrix[i][j] != 0)
				{
					return false;
				}
		}

		return true;

	}

	bool isMatrixScalar(int matrix[3][3], short rows, short columns)
	{
		int scalarElement = matrix[0][0];
		for (int i = 0; i < rows; i++)
		{
			for (int j = 0; j < columns; j++)
				if (i == j && matrix[i][j] != scalarElement)
				{
					return false;
				}
				else if (i != j && matrix[i][j] != 0)
				{
					return false;
				}
		}

		return true;

	}

	int countNumberInMatrix(int matrix[3][3], int number, short rows, short columns)
	{
		int counter = 0;
		for (int i = 0; i < rows; i++)
		{
			for (int j = 0; j < columns; j++)
				if (matrix[i][j] == number)
					counter++;
		}

		return counter;
	}

	bool isMatrixSparse(int matrix[3][3], short rows, short columns)
	{
		int zerosCounter = countNumberInMatrix(matrix, 0, rows, columns);
		int matrixSize = rows * columns;

		return (zerosCounter > (matrixSize / 2));
	}

	bool isNumberExistsInMatrix(int matrix[3][3], int number, short rows, short columns)
	{

		for (int i = 0; i < rows; i++)
		{
			for (int j = 0; j < columns; j++)
				if (matrix[i][j] == number)
					return true;
		}

		return false;
	}

	void printIntersectedNumbers(int matrix1[3][3], int matrix2[3][3], short rows, short columns)
	{
		int number;
		for (int i = 0; i < rows; i++)
		{
			for (int j = 0; j < columns; j++)
			{
				number = matrix1[i][j];
				if (isNumberExistsInMatrix(matrix2, number, rows, columns))
					cout << setw(3) << number << "\t";

			}
		}

	}

	int getMaxNumberInMatrix(int matrix[3][3], short rows, short columns)
	{
		int maxNumber = matrix[0][0];
		for (int i = 0; i < rows; i++)
		{
			for (int j = 0; j < columns; j++)
				if (maxNumber < matrix[i][j])
					maxNumber = matrix[i][j];
		}

		return maxNumber;
	}

	int getMinNumberInMatrix(int matrix[3][3], short rows, short columns)
	{
		int minNumber = matrix[0][0];
		for (int i = 0; i < rows; i++)
		{
			for (int j = 0; j < columns; j++)
				if (minNumber > matrix[i][j])
					minNumber = matrix[i][j];
		}

		return minNumber;
	}

	bool isPalindromeMatrix(int matrix[3][3], short rows, short columns)
	{

		for (int i = 0; i < rows; i++)
		{
			for (int j = 0; j < columns / 2; j++)
				if (matrix[i][j] != matrix[i][columns - j - 1])
					return false;
		}

		return true;
	}

}

namespace MyFile
{
	void printFileContent(string fileName)
	{
		fstream myFile;
		myFile.open(fileName, ios::in); //Activate Read Mode

		if (myFile.is_open())
		{
			string lineContent;

			while (getline(myFile, lineContent))
			{
				cout << lineContent << endl;
			}
			myFile.close();
		}
	}

	void loadDataFromFileToVector(string fileName, vector <string>& vFileContent)
	{
		fstream myFile;
		myFile.open(fileName, ios::in); //Activate Read Mode

		if (myFile.is_open())
		{
			string lineContent;

			while (getline(myFile, lineContent))
			{
				vFileContent.push_back(lineContent);
			}
			myFile.close();
		}
	}

	void saveVectorToFile(string fileName, vector <string> vFileContent)
	{
		fstream myFile;
		myFile.open(fileName, ios::out);

		if (myFile.is_open())
		{
			for (string& line : vFileContent)
				if (line != "")
					myFile << line << endl;

			myFile.close();
		}
	}

	void deleteRecordFromFile(string fileName, string record)
	{
		vector <string> vFileContent;
		MyFile::loadDataFromFileToVector(fileName, vFileContent);

		for (string& line : vFileContent)
			if (line == record)
			{
				line = "";
				break;
			}

		MyFile::saveVectorToFile(fileName, vFileContent);

	}

	void updateRecordFromFile(string fileName, string record, string updateTo)
	{
		vector <string> vFileContent;
		MyFile::loadDataFromFileToVector(fileName, vFileContent);

		for (string& line : vFileContent)
			if (line == record)
			{
				line = updateTo;
				break;
			}

		MyFile::saveVectorToFile(fileName, vFileContent);

	}

}

namespace MyString
{
	enum enCase { Upper = 0, Lower = 1, NoCase = 3 };

	string convertToLower(string& str)
	{

		for (char& i : str)
			i = tolower(i);

		return str;
	}

	string convertToUpper(string& str)
	{

		for (char& i : str)
			i = toupper(i);

		return str;
	}

	string convertFirstLettersToLower(string &str)
	{
		bool isFirstLetter = true;


		for (int i = 0; i < str.length(); i++)
		{
			if (str[i] != ' ' && isFirstLetter)
				str[i] = tolower(str[i]);

			isFirstLetter = (str[i] == ' ' ? true : false);
		}

		return str;
	}

	string convertFirstLettersToUpper(string& str)
	{
		bool isFirstLetter = true;


		for (int i = 0; i < str.length(); i++)
		{
			if (str[i] != ' ' && isFirstLetter)
				str[i] = toupper(str[i]);

			isFirstLetter = (str[i] == ' ' ? true : false);
		}

		return str;
	}

	void printFirstLetterOfEachWord(string sentence)
	{
		bool isFirstLetter = true;

		cout << "\nFirst Letters of this string are:\n";


		for (int i = 0; i < sentence.length(); i++)
		{
			if (sentence[i] != ' ' && isFirstLetter)
				cout << sentence[i] << "\n";

			isFirstLetter = (sentence[i] == ' ' ? true : false);
		}
	}

	char invertLetterCase(char &letter)
	{

		return isupper(letter) ? tolower(letter) : toupper(letter);
	}

	string invertStringCase(string &str)
	{
		for (int i = 0; i < str.length(); i++)
		{
			if (str[i] == ' ')
				continue;
			else
				str[i] = invertLetterCase(str[i]);
		}
		return str;
	}

	short countSmallLetters(string sentence)
	{
		short smallLetters = 0;

		for (short i = 0; i < sentence.length(); i++)
			if (islower(sentence[i]))
				smallLetters++;

		return smallLetters;
	}

	short countCapitalLetters(string sentence)
	{
		short capitalLetters = 0;

		for (short i = 0; i < sentence.length(); i++)
			if (isupper(sentence[i]))
				capitalLetters++;

		return capitalLetters;
	}

	enCase findCaseType(char letter)
	{
		return (isupper(letter) ? enCase::Upper : enCase::Lower);
	}

	short countLetterInString(string str, char letter)
	{
		short count = 0;
		for (short i = 0; i < str.length(); i++)
		{
			if (str[i] == letter)
				count++;
		}

		return count;
	}

	short countLetterInStringNoCase(string str, char letter)
	{
		short count = 0;
		for (short i = 0; i < str.length(); i++)
		{
			if (str[i] == letter || str[i] == MyString::invertLetterCase(letter))
				count++;
		}

		return count;
	}

	short countLettersInString(string str, char letter, enCase caseType = enCase::Lower)
	{
		short count = 0;

		if (caseType != enCase::NoCase)
		{
			caseType = findCaseType(letter);
		}

		switch (caseType)
		{
		case Upper:
		case Lower:
			count = countLetterInString(str, letter);
			break;

		case NoCase:
			count = countLetterInStringNoCase(str, letter);
			break;
		}


		return count;
	}

	bool isVowel(char letter)
	{
		letter = tolower(letter);
		char vowelLetters[5] = { 'a', 'e', 'i', 'o', 'u' };

		for (char& vowelLetter : vowelLetters)
		{
			if (vowelLetter == letter)
				return true;
		}
		return false;
	}

	short countVowelsInString(string sentence)
	{
		short count = 0;

		for (char& letter : sentence)
			if (isVowel(letter))
				count++;

		return count;
	}

	void printVowelsInString(string sentence)
	{

		cout << "\nVowels in string are: ";
		for (char& letter : sentence)
			if (isVowel(letter))
				cout << letter << "\t";

		cout << endl;
	}

	void printWordsInSentence(string sentence)
	{
		string word = "";
		string delimiter = " ";
		short position = 0;

		//get the position of the delimiter and check if its any delimeter
		while ((position = sentence.find(delimiter)) != std::string::npos)
		{
			word = sentence.substr(0, position);
			if (word != "")
			{
				cout << word << endl;
			}

			//remove the printed word from the sentence
			sentence.erase(0, position + delimiter.length());
		}

		//print last word of the string
		if (!sentence.empty())
		{
			cout << sentence << endl;
		}
	}

}

