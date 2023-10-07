#include <iostream>
#include <cstdlib>
using namespace std;

//function to generate random number
int randomNumber(int from, int to)
{
	int randNum = rand() % (to - from + 1) + from;
	return randNum;
}

int main()
{
	//Seeds the random number generator in C++, called only once
	srand((unsigned)time(NULL));

	cout << randomNumber(1, 10) << endl;
	cout << randomNumber(1, 10) << endl;
	cout << randomNumber(1, 10) << endl;
	return 0;
}