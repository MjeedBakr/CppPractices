#include <iostream>
#include <iomanip>
#include "MyLib.h"

using namespace std;
using namespace MyRandom;

void fillMatrixWithRandomNumbers(int arr[3][3], int rows, int columns)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < columns; j++)
			arr[i][j] = randomNumber(1, 100);
	}
}

void printMatrix(int arr[3][3], int rows, int columns)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < columns; j++)
			cout << setw(3) << arr[i][j] << "\t";
		cout << "\n";
	}
	cout << endl;
}

int main() {

	srand((unsigned)time(NULL));

	int array[3][3];

	fillMatrixWithRandomNumbers(array, 3, 3);

	cout << "The following is 3 x 3 Random Matrix\n";
	printMatrix(array, 3, 3);

	return 0;



}