#include <iostream>
#include <vector>

using namespace std;

struct stEmployee
{
	string firstName;
	string lastName;
	int salary;
};

void readEmployeesInfo(vector <stEmployee> &vEmployees)
{
	
	char enterAnotherEmployee;

	do
	{
		cout << "\n";
		stEmployee tempEmployee;

		cout << "Please enter employee first name: ";
		cin >> tempEmployee.firstName;

		cout << "Please enter employee last name: ";
		cin >> tempEmployee.lastName;

		cout << "Please enter employee salary: ";
		cin >> tempEmployee.salary;

		vEmployees.push_back(tempEmployee);
		
		cout << "Do you want to enter another Employee info Y:Yes N:No? ";
		cin >> enterAnotherEmployee;
	} while (enterAnotherEmployee == 'y' || enterAnotherEmployee == 'Y');

}

void printEmployeesInfo(vector <stEmployee> &vEmployees) //put it by ref or it will copy the whole vector
{
	cout << "\n";
	for (stEmployee &employee : vEmployees)
	{
		cout << "First Name: " << employee.firstName << "\n";
		cout << "Last  Name: " << employee.lastName << "\n";
		cout << "Salary    : " << employee.salary << "\n";

		cout << endl;
	}
}

int main() {

	vector <stEmployee> vEmployees;
	readEmployeesInfo(vEmployees);
	printEmployeesInfo(vEmployees);







}