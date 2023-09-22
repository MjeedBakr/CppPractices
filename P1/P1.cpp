#include <iostream>
using namespace std;

int main()
{

	int myArray[10] = { 10, 20, 44, 55, 33, 22, 99, 100 };

	for (int i = 0; i <= 10 - 1; i++)
	{
		if (myArray[i] == 20)
		{
			cout << i;
			break;
		}
	}
	return 0;
}