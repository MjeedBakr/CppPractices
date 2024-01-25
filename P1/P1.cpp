#include <iostream>


using namespace std;



void printFibonacciSeries(short number, short fibNumber = 1, short previousOne = 1, short previousTwo = 0)
{
	if (number > 0)
	{
		cout << fibNumber << "\t";

		printFibonacciSeries(number - 1, fibNumber += previousTwo, fibNumber, previousOne);
	}

}

int main() {

	printFibonacciSeries(10);

	
	return 0;



}