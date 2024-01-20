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

int main() {

	srand((unsigned)time(NULL));
	
	int matrix[3][3];
	int iMatrix[3][3] = { {9, 0, 0},
						  {0, 9, 0},
						  {0, 8, 9} };

	fillMatrixWithRandomNumbers(matrix, 3, 3);
	

	cout << "Matrix 1\n";
	printMatrix(matrix, 3, 3);
	
	int number = 0;
	cout << "Please enter a number to check if it is in the matrix: ";
	cin >> number;
	
	if (isNumberExistsInMatrix(matrix, number, 3, 3))
		cout << "\nYes: It Is There\n";
	else
		cout << "\nNo: It Is NOT There\n";

	
	
	return 0;



}