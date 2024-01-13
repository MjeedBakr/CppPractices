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

int arraySum(int arr[3], short arrayLength)
{
	int sum = 0;
	for (int i = 0; i < arrayLength; i++)
	{
		sum += arr[i];
	}
	return sum;
}

void saveRowInArray(int arr[3][3], short rowNumber, short columns, int rowResult[3])
{
	for (int i = 0; i < columns; i++)
	{
		rowResult[i] = arr[rowNumber - 1][i];
	}
}

void printRowsSum(int arr[3], int arrayLength, int rowNumber)
{
	printf("Row %d Sum = %d\n",rowNumber, arraySum(arr, arrayLength));
	cout << endl;
}

int main() {

	srand((unsigned)time(NULL));

	int array[3][3];

	fillMatrixWithRandomNumbers(array, 3, 3);

	cout << "The following is 3 x 3 Random Matrix:\n";
	printMatrix(array, 3, 3);

	cout << "The following is sum of each row in matrix:\n";
	
	int row1[3];
	int row2[3];
	int row3[3];

k	saveRowInArray(array, 1, 3, row1);
	saveRowInArray(array, 2, 3, row2);
	saveRowInArray(array, 3, 3, row3);

	printRowsSum(row1, 3, 1);
	printRowsSum(row2, 3, 2);
	printRowsSum(row3, 3, 3);

	return 0;



}