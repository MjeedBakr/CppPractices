#include <iostream>
#include <vector>
using namespace std;


int main() {

	vector <int> numbers{ 1, 3, 5, 7, 9 };

	try 
	{
	cout << numbers.at(5);

	}
	catch (...)
	{
		cout << "Out of pound\n";
	}



	return 0;



}