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

int main() {

	srand((unsigned)time(NULL));
	
	int arr[3][3];

	fillMatrixWithRandomNumbers(arr, 3, 3);

	cout << "Matrix with random numbers\n";
	printMatrix(arr, 3, 3);

	cout << "\nSum of matrix is: " << sumMatrix(arr, 3, 3) << endl;

	
	
	return 0;



}