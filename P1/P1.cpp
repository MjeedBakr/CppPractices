#pragma warning(disable : 4996)

#include <iostream>
#include <ctime>

using namespace std;

int main() {
	
	time_t t = time(0); //get time now

	char* dt = ctime(&t); //convert it to string form

	cout << "Local date and time is: " << dt << "\n";

	tm* gmtm = gmtime(&t);  //convert it to tm structure for UTC date/time توقيت غرينتش
	dt = asctime(gmtm);
	cout << "UTC date and time is: " << dt;


	return 0;



}