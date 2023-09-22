#include <iostream>
using namespace std;

int main()
{

	int number;
	int sum = 0;

	cout << "Enter 5 numbers: \n";
	for (int i = 1; i <= 5; i++)
	{
		cin >> number;
		if (number > 50)
			continue;
		sum += number;
	}
	cout << sum << endl;
	return 0;
}