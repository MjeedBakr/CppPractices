#include<iostream>

 //use "" cuz it is local library
#include "MyLib.h"

using namespace std;


int main() 
{


	short age;
	age = MyRead::readIntInRange(18, 65, "Age");


	return 0;
}