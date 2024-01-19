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

int main() {

	srand((unsigned)time(NULL));
	
	int matrix[3][3];
	int iMatrix[3][3] = { {9, 0, 0},
						  {0, 9, 0},
						  {0, 0, 9} };

	fillMatrixWithRandomNumbers(matrix, 3, 3);
	

	cout << "Matrix 1\n";
	printMatrix(matrix, 3, 3);
	
	int number;
	cout << "Enter the number to count in matrix: ";
	cin >> number;

	printf("\nNumber %d count in matrix is %d\n", number, countNumberInMatrix(matrix, number, 3, 3));

	
	
	return 0;



}