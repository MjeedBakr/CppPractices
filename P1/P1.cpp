#include <iostream>
using namespace std;

int main()
{
	float grades[3];

	cout << "Please Enter Grade1 ?" << endl;
	cin >> grades[0];
	
	cout << "Please Enter Grade2 ?" << endl;
	cin >> grades[1];

	cout << "Please Enter Grade3 ?" << endl;
	cin >> grades[2];

	float gradesAvg = (grades[0] + grades[1] + grades[2]) / 3;

	cout << "*******************" << endl;
	cout << "The average of grades is ";
	cout << gradesAvg << endl;

	return 0;
}
