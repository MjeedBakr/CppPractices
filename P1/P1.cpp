#include <iostream>
#include <iomanip>

using namespace std;

void fill2DimensionArray(int arr[10][10])
{
	for (int i = 0; i < 10; i++)
		for (int j = 0; j < 10; j++)
		{
			arr[i][j] = (i + 1) * (j + 1);
		}
}

void print2DimensionArray(int arr[10][10])
{
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			printf("%0*d ", 2, arr[i][j]);
		}
		cout << endl;
	}
}
int main() {

	int x[10][10];

	fill2DimensionArray(x);
	print2DimensionArray(x);




}