#include<iostream>
using namespace std;

int main() 
{

	int page = 1, totalPages = 10;

	//print string and int variable
	printf("The page number = %d \n", page);
	printf("You are in PAge %d of %d \n", page, totalPages);

	//width specification
	printf("The page number = %0*d \n", 2, page);
	printf("The page number = %0*d \n", 3, page);
	printf("The page number = %0*d \n", 4, page);
	printf("The page number = %0*d \n", 5, page);

	int num1 = 20, num2 = 30;
	printf("The result of %d + %d = %d \n", num1, num2, num1 + num2);

	return 0;
}

