#include<iostream>
using namespace std;

void function3()
{
	cout << "I am function 3" << endl;
}

void function2()
{
	function3();
}

void function1()
{
	function2();
}


int main() 
{
	function1();

	return 0;
}

