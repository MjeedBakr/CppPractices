#include<iostream>

 //use "" cuz it is local library
#include "MyLib.h"

using namespace std;


int main() 
{

	int arrayLength = 10;
	int arr[10];

	MyArray::fillAraayWithRandomNumbers(arr, arrayLength, 10, 100);

	for (int i : arr)
	{
		cout << i << " ";
	}
	cout << endl;


	return 0;
}