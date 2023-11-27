#include <iostream>
#include <vector>

using namespace std;

void readNumbers(vector <int> &vNumbers)
{
	int number;
	char enterAnotherNumber;

	do
	{
		cout << "Please enter a number: ";
		cin >> number;
		vNumbers.push_back(number);

		cout << "Do you want to enter another Number Y:Yes N:No? ";
		cin >> enterAnotherNumber;
	} while (enterAnotherNumber == 'y' || enterAnotherNumber == 'Y');

}

void printNumbers(vector <int> &vNumbers) //put it by ref or it will copy the whole vector
{
	for (int& number : vNumbers)
	{
		cout << number << "\n";
	}
}

int main() {

	vector <int> vNumbrs;

	readNumbers(vNumbrs);
	printNumbers(vNumbrs);






}