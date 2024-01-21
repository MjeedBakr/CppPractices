#include <iostream>
#include <iomanip>
#include "MyLib.h"

using namespace std;
using namespace MyRandom;

void printFibonacciSeries(int end)
{
	int indexZero = 1;
	int indexOne = 1;
	int temp = 0;
	printf("\nFibonacci Series of %d\n", end);
	cout << indexZero << "\t";
	cout << indexOne << "\t";

	for (int i = 2; i < end; i++)
	{
		
		cout << indexZero + indexOne << "\t";
		
		temp = indexOne;
		indexOne += indexZero;
		indexZero = temp;
		
		
	}
	cout << endl;
}


int main() {

	printFibonacciSeries(10);

	
	return 0;



}