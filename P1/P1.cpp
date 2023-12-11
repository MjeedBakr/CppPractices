#include <iostream>
#include <vector>

using namespace std;


int main() {

	int arr[4] = { 10, 20, 30, 40 };
	int* p = arr;

	cout << "Array Elements addresses:\n";
	cout << p << endl;
	cout << p + 1 << endl;
	cout << p + 2 << endl;
	cout << p + 3 << endl;

	cout << "Array Elements Values:\n";
	cout << *p << endl;
	cout << *(p + 1) << endl;
	cout << *(p + 2) << endl;
	cout << *(p + 3) << endl;

	return 0;



}