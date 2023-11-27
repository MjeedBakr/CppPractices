#include <iostream>
#include <vector>

using namespace std;

int main() {

	vector <int> vNumbrs = { 1, 2, 3, 4, 5, 6, 7 };

	for (int &number : vNumbrs)
	{
		cout << number << " ";
	}




}