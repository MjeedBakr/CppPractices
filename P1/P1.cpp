
#include <iostream>
#include <cmath>
using namespace std;

//probelms 1,2,14,15,16,18,19,20,21,22,23,31,32,42,43
const float PI = 3.14;
const int secondsPerDay = 60 * 60 * 24;
const int secondsPerHour = 60 * 60;
const int secondsPerMinute = 60;

//1
void printMyName()
{
	cout << "Abdulmajeed" << endl;
}

//2
string printYourName(string name)
{
	return name;
}

//14
void swapNumbers(int num1, int num2)
{
	cout << num1 << endl;
	cout << num2 << endl;

	int temp = num1;
	num1 = num2;
	num2 = temp;

	cout << num1 << endl;
	cout << num2 << endl;
}

//15
float rectangleArea(float a, float b)
{
	return a * b;
}

//16
float rectangleAreaThruDiagonalAndSideArea(float a, float d)
{
	return a * sqrt(pow(d, 2) - pow(a, 2));
}

//18
float circleArea(float r)
{
	return PI * pow(r, 2);
}

//19
float circleAreaThruDiameter(float d)
{
	return (PI * pow(d,2)) / 4;
}

//20
float circleAreaInSquare(float a)
{
	return (PI * pow(a, 2)) / 4;
}

//21
float circleAreaAroundCircumference(float l)
{
	return pow(l, 2) / (4 * PI);
}

//22
float circleAreaInIsoscalesTriangle(float a, float b)
{
	return PI * (pow(b, 2) / 4) * ((2 * a - b) / (2 * a + b));
}

//23
float circleAreaAroundArbitaryTriangle(float a, float b, float c)
{
	float p = (a + b + c) / 2;

	float temp = (a * b * c) / (4 * sqrt(p * (p - a) * (p - b) * (p - c)));

	return PI * pow(temp, 2);

}

//31
void printPowerOf123(int number)
{
	cout << pow(number, 2) << endl;
	cout << pow(number, 3) << endl;
	cout << pow(number, 4) << endl;
}

//32
int power(int number, int m)
{
	return pow(number, m);
}

//42
void taskDurationInSeconds(int days, int hours, int minutes, int seconds)
{
	long totalSeconds = seconds;
	totalSeconds += minutes * 60;
	totalSeconds += hours * secondsPerHour;
	totalSeconds += days * secondsPerDay;
	cout << totalSeconds << " Seconds" << endl;
}

//43
void secondsToSSMMHHDD(int seconds)
{
	int reminder;
	int days = floor(seconds / secondsPerDay);
	reminder = seconds % secondsPerDay;

	int hours = floor(reminder / secondsPerHour);
	reminder %= secondsPerHour;

	int minutes = floor(reminder / 60);
	reminder %= secondsPerMinute;

	seconds = reminder;
	cout << days << ":" << hours << ":" << minutes << ":" << seconds;

}

int main()
{	
	secondsToSSMMHHDD(193535);
	return 0;
}