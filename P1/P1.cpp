#include <iostream>
#include <iomanip>
#include "MyLib.h"

using namespace std;
using namespace MyRandom;

void fillMatrixWithOrderedNumbers(int arr[3][3], short rows, short columns)
{
	int number = 1;
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < columns; j++)
		{
			arr[i][j] = number;
			number++;
		}
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

void transposeMatrix(int arr[3][3], short rows, short columns, int arr2[3][3])
{

	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < columns; j++)
		{
			arr2[i][j] = arr[j][i];
		}
	}

}

int main() {

	int arr[3][3];

	fillMatrixWithOrderedNumbers(arr, 3, 3);

	cout << "The following is 3 x 3 Random Matrix:\n";
	printMatrix(arr, 3, 3);

	int arr2[3][3];
	transposeMatrix(arr, 3, 3, arr2);

	cout << "The following is 3 x 3 transpose Matrix:\n";
	printMatrix(arr2, 3, 3);
	
	return 0;



}