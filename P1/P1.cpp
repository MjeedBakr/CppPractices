#include <iostream>
#include <string>
using namespace std;

void printHeadOfMultiplicationTable(int start, int end)
{
	cout << "\n\n";

	int spaceAmout = floor((end - start) / 2);

	for (int i = 1; i <= spaceAmout - 1; i++)
		cout << "\t";

	cout << "Multiplication Table From " << to_string(start) << " To " << to_string(end);

	cout << "\n\n\t ";
	for (int i = start; i <= end; i++)
	{
		cout << i << "\t";
	}

	cout << endl;
	for (int i = start; i <= end; i++)
		cout << "---------";
	cout << endl;
}

void printMultiplicationTable(int start, int end)
{
	printHeadOfMultiplicationTable(start, end);
	for (int i = start; i <= end; i++)
	{
		cout << to_string(i) << "\t|";
		for (int j = start; j <= end; j++)
		{
			cout << to_string(i*j) << "\t";
		}
		cout << endl;
	}
}

int main()
{
	printMultiplicationTable(1, 10);
	return 0;
}