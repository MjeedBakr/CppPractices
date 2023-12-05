#include <iostream>
#include <vector>

using namespace std;



int main() {

	int a = 10;
	int * p = &a;

	cout << &a << endl;
	cout << p << endl;

	cout << "Pointer value " << p << endl;
	cout << "Value of the address that p is pointing to is " << *p << endl;


	return 0;



}