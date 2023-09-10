#include <iostream>
using namespace std;

void readGrades(float grades[3])
{
	cout << "Please Enter Grade1 ? \n";
	cin >> grades[0];
	
	cout << "Please Enter Grade2 ? \n";
	cin >> grades[1];

	cout << "Please Enter Grade3 ? \n";
	cin >> grades[2];
}

float calcGradesAvg(float grades[3])
{
	return (grades[0] + grades[1] + grades[2]) / 3;;
}

void printGradesAvg(float grades[3])
{
	cout << "*******************" << endl;
	cout << "The average of grades is ";
	cout << calcGradesAvg(grades) << endl;
}

int main()
{
	float grades[3];
	readGrades(grades);
	printGradesAvg(grades);


	return 0;
}
