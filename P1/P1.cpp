#include <iostream>
#include <vector>
using namespace std;


int main() {

	vector <int> numbers{ 1, 3, 5, 7, 9 };

	vector <int>::iterator i;

	for (i = numbers.begin(); i != numbers.end(); i++)
	{
		cout << *i << " ";
	}


	return 0;



}