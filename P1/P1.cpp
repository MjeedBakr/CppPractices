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

int columnSum(int arr[3][3], short rows, short columnNumber)
{
	int columnSum = 0;
	for (int j = 0; j < rows; j++)
	{
		columnSum += arr[j][columnNumber];
	}
	return columnSum;
}

void columnsSum(int arr[3][3], short rows, short columns)
{
	for (int i = 0; i < columns; i++)
	{
		printf("Col %d Sum = %d\n", i + 1, columnSum(arr, rows, i));
	}
}

int main() {

	srand((unsigned)time(NULL));

	int array[3][3];

	fillMatrixWithRandomNumbers(array, 3, 3);

	cout << "The following is 3 x 3 Random Matrix:\n";
	printMatrix(array, 3, 3);

	cout << "The following is sum of each col in matrix:\n";
	
	columnsSum(array, 3, 3);
	return 0;



}