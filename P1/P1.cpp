#include <iostream>
#include <string>
using namespace std;

void printHeadOfMultiplicationTable(int start, int end)
{
	cout << "\n\n";

	int spaceAmout = floor((end - start) / 2);

	for (int i = 1; i <= spaceAmout - 1; i++)
		cout << "\t";

	cout << "Multiplication Table From " << start << " To " << end;

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
		cout << i << "\t|";
		for (int j = start; j <= end; j++)
		{
			cout << i*j << "\t";
		}
		cout << endl;
	}
}

int main()
{
	printMultiplicationTable(1, 13);
	return 0;
}