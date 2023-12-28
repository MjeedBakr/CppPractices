#include <iostream>
using namespace std;


int main() {

	int num;
	cout << "Enter total number of Student: ";
	cin >> num;

	float* ptr;

	//memory allocation of num numbers of floats
	ptr = new float[num];

	cout << "Enter grades of students." << endl;

	for (int i = 0; i < num; i++)
	{
		cout << "Student " << i + 1 << " Grade: ";
		cin >> *(ptr + i);
	}

	cout << "\nDisplay Students grades." << endl;
	for (int i = 0; i < num; i++)
	{
		cout << "Student " << i + 1 << ": " << *(ptr + i) << endl;
	}

	delete []ptr;



	return 0;



}