#include <iostream>
#include <iomanip>
#include "MyLib.h"

using namespace std;
using namespace MyRandom;


void printFibonacciUsingRecursion(short end, int previousOne, int previousTwo)
{
	int fibNumber = 0;
	if (end > 0)
	{
		fibNumber = previousOne + previousTwo;
		previousTwo = previousOne;
		previousOne = fibNumber;

		cout << fibNumber << "\t";

		printFibonacciUsingRecursion(end - 1, previousOne, previousTwo);
	}

}


int main() {

	

	printf("\nFibonacci Series of %d\n", 10);

	printFibonacciUsingRecursion(10, 1, 0);
	
	return 0;



}