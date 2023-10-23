#pragma once

#include<iostream>
using namespace std;


namespace MyLib
{
	void test()
	{
		cout << "Hi, this is my first function in my library!" << endl;
	}

	int sum2Numbers(int num1, int num2)
	{
		return num1 + num2;
	}

}
