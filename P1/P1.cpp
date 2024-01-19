#include <iostream>
#include <iomanip>
#include "MyLib.h"

using namespace std;
using namespace MyRandom;

void fillMatrixWithRandomNumbers(int arr[3][3], short rows, short columns)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < columns; j++)
			arr[i][j] = randomNumber(1, 10);
	}
}

void printMatrix(int arr[3][3], short rows, short columns)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < columns; j++)
			printf("%0*d\t", 2, arr[i][j]);
		cout << "\n";
	}
	cout << endl;
}

int sumMatrix(int arr[3][3], short rows, short columns)
{
	int sum = 0;
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < columns; j++)
			sum += arr[i][j];
	}

	return sum;
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

int main() {

	srand((unsigned)time(NULL));
	
	int matrix[3][3];
	int iMatrix[3][3] = { {9, 0, 0},
						  {0, 9, 0},
						  {0, 0, 9} };

	fillMatrixWithRandomNumbers(matrix, 3, 3);
	

	cout << "Matrix 1\n";
	printMatrix(iMatrix, 3, 3);
	

	if (isMatrixScalar(iMatrix, 3, 3))
		cout << "Yes: Matrices is Scalar." << endl;
	else
		cout << "No: Matrices is NOT Scalar." << endl;

	
	
	return 0;



}