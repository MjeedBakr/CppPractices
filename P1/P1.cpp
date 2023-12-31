#include <iostream>
#include <vector>
using namespace std;


int main() {

	vector <int> numbers{ 1, 3, 5, 7, 9 };

	//You can use both methods
	cout << numbers[0] << endl;
	cout << numbers.at(0) << endl;



	return 0;



}