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

bool areTwoMatricesTypical(int arr1[3][3], int arr2[3][3], short rows, short columns)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < columns; j++)
			if (arr1[i][j] != arr2[i][j])
				return false;
	}

	return true;

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

	if (areTwoMatricesTypical(arr1, arr2, 3, 3))
		cout << "Yes: Metrices are Typical." << endl;
	else
		cout << "No: Metrices are NOT Typical." << endl;

	
	
	return 0;



}