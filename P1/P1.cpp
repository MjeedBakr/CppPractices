#include <iostream>
#include <vector>
using namespace std;


int main() {

	vector <int> numbers{ 1, 3, 5, 7, 9 };

	cout << "Initial Vector: ";

	for (const int& i : numbers)
	{
		cout << i << " ";
	}

	cout << "\nUpdated Vector: ";

	for (int& i : numbers)
	{
		i = 20;
		cout << i << " ";
	}

	numbers[0] = 10;
	numbers.at(2) = 30;

	cout << "\nUpdated Vector: ";

	for (const int& i : numbers)
	{
		cout << i << " ";
	}


	return 0;



}