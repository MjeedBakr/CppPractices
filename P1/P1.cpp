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

bool isTwoMatrixSumEqual(int arr1[3][3], int arr2[3][3], short rows, short columns)
{
	return (sumMatrix(arr1, rows, columns) == sumMatrix(arr2, rows, columns));

}

int main() {

	srand((unsigned)time(NULL));
	
	int arr1[3][3], arr2[3][3];

	fillMatrixWithRandomNumbers(arr1, 3, 3);
	fillMatrixWithRandomNumbers(arr2, 3, 3);

	cout << "Matrix 1\n";
	printMatrix(arr1, 3, 3);
	cout << "Matrix 2\n";
	printMatrix(arr2, 3, 3);

	if (isTwoMatrixSumEqual(arr1, arr2, 3, 3))
		cout << "Yes: Metrices are equal." << endl;
	else
		cout << "No: Metrices are NOT equal." << endl;

	
	
	return 0;



}