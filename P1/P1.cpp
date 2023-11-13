#include<iostream>
using namespace std;

//function declaration
void add(int, int);

int main() 
{
	add(5, 6);

	return 0;
}

void add(int a, int b)
{
	cout << a + b;
}