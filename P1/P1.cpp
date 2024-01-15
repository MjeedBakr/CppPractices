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

void multiplyMatrix(int arr[3][3],int arr2[3][3], short rows, short columns, int arrResult[3][3])
{

	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < columns; j++)
		{
			arrResult[i][j] = arr[i][j] * arr2[i][j];
		}
	}

}

int main() {

	srand((unsigned)time(NULL));
	
	int arr[3][3], arr2[3][3];

	fillMatrixWithRandomNumbers(arr, 3, 3);
	fillMatrixWithRandomNumbers(arr2, 3, 3);

	cout << "Matrix 1\n";
	printMatrix(arr, 3, 3);

	cout << "Matrix 2\n";
	printMatrix(arr2, 3, 3);

	int arrResult[3][3];
	multiplyMatrix(arr, arr2, 3, 3, arrResult);

	cout << "Matrix Multiply Result\n";
	printMatrix(arrResult, 3, 3);
	
	return 0;



}