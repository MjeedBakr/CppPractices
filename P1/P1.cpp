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
			arr[i][j] = randomNumber(1, 100);
	}
}

void printMatrix(int arr[3][3], short rows, short columns)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < columns; j++)
			cout << arr[i][j] << "\t";
		cout << "\n";
	}
	cout << endl;
}

void saveRowsSumInArray(int arr[3][3], short rows, short columns, int rowResult[3])
{
	int rowSum;
	for (int i = 0; i < rows; i++)
	{
		rowSum = 0;
		for (int j = 0; j < columns; j++)
		{
			rowSum += arr[i][j];
		}
		rowResult[i] = rowSum;
	}
}

void printRowsSum(int arr[3], int arrLength)
{
	
	for (int i = 0; i < arrLength; i++)
	{
		printf("Row %d Sum = %d\n", i +1, arr[i]);
		cout << endl;
	}
}

int main() {

	srand((unsigned)time(NULL));

	int array[3][3];

	fillMatrixWithRandomNumbers(array, 3, 3);

	cout << "The following is 3 x 3 Random Matrix:\n";
	printMatrix(array, 3, 3);

	cout << "The following is sum of each row in matrix:\n";
	
	int rowsSum[3];
	saveRowsSumInArray(array, 3, 3, rowsSum);

	printRowsSum(rowsSum, 3);
	return 0;



}