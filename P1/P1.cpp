#include <iostream>
#include <vector>

using namespace std;

void swap(int* num1, int *num2)
{
	int temp = *num1;
	*num1 = *num2;
	*num2 = temp;
}

int main() {

	int a = 10, b = 5;
	cout << "Before Swapping \n";
	cout << "a = " << a << "\n";
	cout << "b = " << b << "\n";

	swap(&a, &b);


	cout << "after Swapping \n";
	cout << "a = " << a << "\n";
	cout << "b = " << b << "\n";

	return 0;



}