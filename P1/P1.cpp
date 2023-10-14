#include <iostream>
#include <cstdlib>
using namespace std;

enum enPalindromeOrNOt {Palindrome, NotPalindrome};

void fillArray(int arr[100], int& arrayLength)
{
	arrayLength = 6;
	arr[0] = 10;
	arr[1] = 20;
	arr[2] = 30;
	arr[3] = 30;
	arr[4] = 60;
	arr[5] = 10;


}

void printArray(int arr[100], int arrayLength)
{
	for (int i = 0; i <= arrayLength - 1; i++)
		cout << arr[i] << " ";

	cout << endl;
}

enPalindromeOrNOt checkPalindrome(int arr[100], int arrayLength)
{
	for (int i = 0; i < round(arrayLength / 2); i++)
		if (arr[i] != arr[arrayLength - i - 1])
			return enPalindromeOrNOt::NotPalindrome;

	return Palindrome;
}

int main()
{

	int arr[100];
	int arrayLength = 0;

	fillArray(arr, arrayLength);

	cout << "\nArray 1 elements: ";
	printArray(arr, arrayLength);

	if (checkPalindrome(arr, arrayLength) == enPalindromeOrNOt::Palindrome)
		cout << "\nyes array is palindrome" << endl;
	else
		cout << "\nno array is not palindrome" << endl;



	return 0;
}