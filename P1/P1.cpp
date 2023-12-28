#include <iostream>
using namespace std;


int main() {

	int* ptrX;
	float* ptrY;

	ptrX = new int(10);
	ptrY = new float(9.5f);

	cout << *ptrX << endl;
	cout << *ptrY << endl;

	delete ptrX;
	delete ptrY;



	return 0;



}