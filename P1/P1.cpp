#include <iostream>
#include <string>
using namespace std;

enum enPalindromeOrNot {Palindrome = 1, NotPalindrome = 2};

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

int reverseNumber(int number)
{
	int reversedNumber = 0;
	int remainder = 0;
	while (number > 0)
	{
		remainder = number % 10;
		number = number / 10;
		reversedNumber = reversedNumber * 10 + remainder;
	}
	return reversedNumber;
}

enPalindromeOrNot checkIfPalindrome(int number)
{
	if (number == reverseNumber(number))
		return enPalindromeOrNot::Palindrome;
	else
		return enPalindromeOrNot::NotPalindrome;
}

void printPalindromeOrNot(enPalindromeOrNot number)
{
	if (number == enPalindromeOrNot::Palindrome)
		cout << "Yes , it is a Palindrome number." << endl;
	else
		cout << "No , it is Not a Palindrome number." << endl;

}


int main()
{
	int number = readPositiveNumber("Enter a positive number: ");
	printPalindromeOrNot(checkIfPalindrome(number));
	return 0;
}