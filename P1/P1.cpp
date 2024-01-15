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

int main() {

	int array[3][3];

	fillMatrixWithOrderedNumbers(array, 3, 3);

	cout << "The following is 3 x 3 Random Matrix:\n";
	printMatrix(array, 3, 3);


	
	return 0;



}