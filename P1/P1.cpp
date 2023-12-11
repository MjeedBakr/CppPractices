#include <iostream>
#include <vector>

using namespace std;


int main() {

	int arr[4] = { 10, 20, 30, 40 };
	int* p = arr;

	cout << "Array Elements addresses:\n";
	for (int i = 0; i < 4; i++)
	{
		cout << (p + i) << endl;
	}

	cout << "Array Elements Values:\n";
	for (int i = 0; i < 4; i++)
	{
		cout << *(p + i) << endl;
	}

	return 0;



}