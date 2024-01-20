#include <iostream>
#include <iomanip>
#include "MyLib.h"

using namespace std;
using namespace MyRandom;

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


int main() {

	srand((unsigned)time(NULL));
	
	int matrix1[3][3];
	int matrix2[3][3] = { {1, 2, 1},
						  {5, 9, 5},
						  {9, 0, 9} };

	fillMatrixWithRandomNumbers(matrix1, 3, 3);
	

	cout << "Matrix 2\n";
	printMatrix(matrix2, 3, 3);

	
	if (isPalindromeMatrix(matrix2, 3, 3))
		cout << "\nYes: Matrix is Palindrom\n";
	else
		cout << "\nNo: Matrix is NOT Palindrome\n";

	
	

	
	
	return 0;



}