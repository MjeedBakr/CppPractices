#include<iostream>

 //use "" cuz it is local library
#include "MyLib.h"

using namespace std;


int main() 
{


	int number = MyRead::readInt("Please enter a number: ");

	cout << number;


	return 0;
}