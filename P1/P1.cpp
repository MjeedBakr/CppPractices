#include <iostream>
using namespace std;

//14
void swapNumbers(int& x, int& y)
{
	int temp = x;
	x = y;
	y = temp;

	cout << x << endl;
	cout << y << endl;


}

int main()
{
	int x = 5;
	int y = 10;

	cout << x << "\n" << y << "\n" << endl;

	swapNumbers(x, y);

	cout << x << "\n" << y << "\n" << endl;




	return 0;
}
