
#include <iostream>
using namespace std;

int main()
{    
    string name;
    short age;
    string city, country;
    int monthlySalary;
    char gender;
    bool isMarried;

    cout << "Enter your full name: " << endl;
    cin >> name;

    cout << "Enter your age: " << endl
    cin >> age;

    cout << "Enter your city name: " << endl;
    cin >> city;

    cout << "Enter your country name: " << endl;
    cin >> country;

    cout << "Enter your monthly salary: " << endl;
    cin >> monthlySalary;

    cout << "Enter your Gender \'M\' or \'F\'? " << endl;
    cin >> gender;

    cout << "Are you married \'1\' for yes and \'0\' for no? " << endl;
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

    cout << "Enter the first number: " << endl;
    cin >> firstNum;

    cout << "Enter the second number: " << endl;
    cin >> secondNum;

    cout << "Enter the third number: " << endl;
    cin >> thirdNum;

    int sum = firstNum + secondNum + thirdNum;

    cout << firstNum << endl;
    cout << secondNum << " + " << endl;
    cout << thirdNum << " + " << endl;
    cout << "------------------------" << endl;
    cout << sum << endl;



    short myAge;

    cout << "Enter your age: " << endl;
    cin >> myAge;

    short yourAgeAfter5Years = myAge + 5;
    cout << "After 5 Years you will be " << yourAgeAfter5Years << " years old." << endl;

    return 0;
}


