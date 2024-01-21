#include <iostream>
#include <iomanip>
#include "MyLib.h"

using namespace std;
using namespace MyRandom;

void printFibonacciUsingLoop(short end)
{
	int previousTwo = 0;
	int previousOne = 1;
	int fibonacciNumber = 0;

	printf("\nFibonacci Series of %d\n", end);
	cout << "1\t";

	for (short i = 2; i <= end; i++)
	{
		fibonacciNumber = previousOne + previousTwo;
		cout << fibonacciNumber << "\t";
		
		previousTwo = previousOne;
		previousOne = fibonacciNumber;
		
	}
	cout << endl;
}


int main() {

	printFibonacciUsingLoop(10);

	
	return 0;



}