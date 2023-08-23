
#include <iostream>
using namespace std;

int main()
{    
    string name;
    int age;
    string city, country;
    int monthlySalary;
    char gender;
    bool isMarried;

    cout << "Enter your full name: ";
    cin >> name;
    cout << "Enter your age: ";
    cin >> age;
    cout << "Enter your city name ";
    cin >> city;
    cout << "Enter your country name: ";
    cin >> country;
    cout << "Enter your monthly salary: ";
    cin >> monthlySalary;
    cout << "Enter your Gender \'M\' or \'F\'?";
    cin >> gender;
    cout << "Are you married \'true\' of \'false\'? ";
    cin >> isMarried;
    cout << endl;

    cout << "***********************************" << endl;
    cout << "Name: " << name << "\n";
    cout << "Age: " << age << " Years.\n";
    cout << "City: " << city << "\n";
    cout << "Country: " << country << "\n";
    cout << "Monthly Salary: " << monthlySalary << "\n";
    cout << "Yearly Salary: " << monthlySalary * 12 << "\n";
    cout << "Gender: " << gender << "\n";
    cout << "Married: " << isMarried << "\n";
    cout << "***********************************" << endl << endl;




    int firstNum, secondNum, thirdNum;
    cout << "Enter the first number: ";
    cin >> firstNum;

    cout << "Enter the second number: ";
    cin >> secondNum;

    cout << "Enter the third number: ";
    cin >> thirdNum;
    cout << firstNum << "+\n" << secondNum << "+\n" << thirdNum << "\n----------------------------------\nTotal = " << firstNum + secondNum + thirdNum << endl << endl;



    int myAge;
    cout << "Enter your age: ";
    cin >> myAge;
    cout << "After 5 Years you will be " << myAge + 5 << " years old." << endl;

    return 0;
}


