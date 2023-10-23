#include<iostream>
#include "MyLib.h" //use "" cuz it is local library
#include "MyInputLib.h"

using namespace std;
using namespace MyLib;
using namespace MyInputLib;


int main() 
{
	MyLib::test();
	test();
	cout << sum2Numbers(10, 20) << endl;

	int number = readNumber();
	cout << number;

	return 0;
}