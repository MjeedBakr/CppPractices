#include <iostream>
using namespace std;


int main() {

	int i = 10;
	float f = 5.8;
	void* p;

	p = &i;
	cout << p << endl;
	cout << *(static_cast<int*>(p)) << endl;

	p = &f;
	cout << p << endl;
	cout << *(static_cast<float*>(p)) << endl;


	return 0;



}