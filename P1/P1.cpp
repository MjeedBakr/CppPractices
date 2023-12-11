#include <iostream>
#include <vector>

using namespace std;

struct stPerson 
{
	string name;
	short age;
};

int main() {

	stPerson person1, * p;
	person1.name = "Abdulmajeed";
	person1.age = 20;

	cout << person1.name << endl;
	cout << person1.age << endl;

	p = &person1;
	cout << p->name << endl;
	cout << p->age << endl;



	return 0;



}