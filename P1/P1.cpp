#include<iostream>

 //use "" cuz it is local library
#include "MyLib.h"

using namespace std;


int main() 
{


	int number = MyRead::readInt("Please enter a number: ");

	(number > 0) ? cout << "\nIs Positive" : cout << "\nIs negative";

	(number == 0) ? cout << "\nEqual zero" : ((number > 0) ? cout << "\nIs Positive" : cout << "\nIs negative");


	return 0;
}