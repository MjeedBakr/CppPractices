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

int main() {

	srand((unsigned)time(NULL));
	
	int matrix1[3][3];
	int matrix2[3][3] = { {9, 0, 0},
						  {0, 9, 0},
						  {0, 8, 9} };

	fillMatrixWithRandomNumbers(matrix1, 3, 3);
	

	cout << "Matrix 1\n";
	printMatrix(matrix1, 3, 3);

	
	cout << "Max Number is: \n";
	cout << getMaxNumberInMatrix(matrix1, 3, 3) << endl;

	cout << "Min Number is: \n";
	cout << getMinNumberInMatrix(matrix1, 3, 3) << endl;
	

	
	
	return 0;



}