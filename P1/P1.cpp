#include <iostream>
using namespace std;

int x = 20;
int y = 3;

int myFunction()
{
	int x = 3;
	int y = 5;

	return x + y;
}

int main()
{
	int x = 40;
	cout << "Global variable x and y = " << ::x << "\t" << ::y << endl;
	cout << "Local variable x = " << x << endl;
	cout << myFunction();
}