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
			matrix[i][j] = MyRandom::randomNumber(1, 10);
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

int main() {

	srand((unsigned)time(NULL));
	
	int matrix1[3][3];
	int matrix2[3][3] = { {9, 0, 0},
						  {0, 9, 0},
						  {0, 8, 9} };

	fillMatrixWithRandomNumbers(matrix1, 3, 3);
	fillMatrixWithRandomNumbers(matrix2, 3, 3);
	

	cout << "Matrix 1\n";
	printMatrix(matrix1, 3, 3);
	cout << "Matrix 2\n";
	printMatrix(matrix2, 3, 3);
	
	cout << "Intersected Numbers are: \n";
	printIntersectedNumbers(matrix1, matrix2, 3, 3);
	

	
	
	return 0;



}