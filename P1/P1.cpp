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

void printMidRowMatrix(int arr[3][3], short columns)
{
	for (int i = 0; i < columns; i++)
	{
		printf("%0*d\t", 2, arr[1][i]);
	}
	cout << endl;
}

void printMidColMatrix(int arr[3][3], short rows)
{
	for (int i = 0; i < rows; i++)
	{
		printf("%0*d\t", 2, arr[i][1]);
	}
	cout << endl;
}

int main() {

	srand((unsigned)time(NULL));
	
	int arr[3][3];

	fillMatrixWithRandomNumbers(arr, 3, 3);

	cout << "Matrix with random numbers\n";
	printMatrix(arr, 3, 3);

	cout << "middle row of matrix\n";
	printMidRowMatrix(arr, 3);

	cout << "middle column of matrix\n";
	printMidColMatrix(arr, 3);

	
	return 0;



}