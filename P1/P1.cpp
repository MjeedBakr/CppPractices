
#include <iostream>
using namespace std;

int main()
{
    /*int firstNumber, secondNumber;
    cout << "Please enter the first Number A?" << endl;
    cin >> firstNumber;
    cout << "Please enter the second Number B?" << endl;
    cin >> secondNumber;
=======
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

>>>>>>> b7bed81a9a6edec5d2b2de1d9e5403e267dc4fc4
    cout << endl;

    cout << firstNumber << " + " << secondNumber << " = " << firstNumber + secondNumber << endl;
    cout << firstNumber << " - " << secondNumber << " = " << firstNumber - secondNumber << endl;
    cout << firstNumber << " * " << secondNumber << " = " << firstNumber * secondNumber << endl;
    cout << firstNumber << " / " << secondNumber << " = " << firstNumber / secondNumber << endl;
    cout << firstNumber << " % " << secondNumber << " = " << firstNumber % secondNumber << endl;*/


    //Problems 7,9,10,14,15,17,19,20,......

    //7#
    /*int number;
    cout << "Enter a number" << endl;
    cin >> number;
    cout << "Half of " << number << " is " << number / 2;*/

    //9#
    /*int firstNumber, secondNumber, thirdNumber;
    cout << "Please enter the first Number?" << endl;
    cin >> firstNumber;
    cout << "Please enter the second Number?" << endl;
    cin >> secondNumber;
    cout << "Please enter the third Number?" << endl;
    cin >> thirdNumber;
    cout << endl;
    cout << firstNumber + secondNumber + thirdNumber;*/

    //10#
    /*int firstMark, secondMark, thirdMark;
    cout << "Please enter the first Mark?" << endl;
    cin >> firstMark;
    cout << "Please enter the second Mark?" << endl;
    cin >> secondMark;
    cout << "Please enter the third Mark?" << endl;
    cin >> thirdMark;
    cout << endl;
    cout << (firstMark + secondMark + thirdMark) / 3;*/

    //14#
    /*int firstNumber, secondNumber;
    cout << "Please enter the first Number A?" << endl;
    cin >> firstNumber;
    cout << "Please enter the second Number B?" << endl;
    cin >> secondNumber;
    cout << endl;

    cout << firstNumber << endl << secondNumber << endl << endl;

    int temp = firstNumber;
    firstNumber = secondNumber;
    secondNumber = temp;

    cout << firstNumber << endl << secondNumber << endl;*/

    //15#
    /*int a, b;
    cout << "Please enter the first Number A?" << endl;
    cin >> a;
    cout << "Please enter the second Number B?" << endl;
    cin >> b;
    cout << endl;
    int Area = a * b;
    cout << Area;*/

    //17#
    /*int a, h;
    cout << "Please enter the first Number A?" << endl;
    cin >> a;
    cout << "Please enter the second Number H?" << endl;
    cin >> h;
    cout << endl;
    int Area = (a/2) * h;
    cout << Area;*/

    //19#
    /*const float PI = 3.14;
    int d;
    cout << "Please enter the Number D?" << endl;
    cin >> d;
    cout << endl;
    float Area = (PI * (d*d)) / 4;
    cout << Area;*/

    //20#
    /*const float PI = 3.14;
    int a;
    cout << "Please enter the Number A?" << endl;
    cin >> a;
    cout << endl;
    float Area = (PI * (a * a)) / 4;
    cout << Area;*/


    //21,22,31,35,39,40,42,43,47,48.

    //21#
    /*const float PI = 3.14;
    int l;
    cout << "Please enter the Number L?" << endl;
    cin >> l;
    cout << endl;
    float Area = (l * l) / (4 * PI);
    cout << Area;*/

    //22#
    /*const float PI = 3.14;
    float a, b;
    cout << "Please enter the Number A?" << endl;
    cin >> a;
    cout << "Please enter the Number B?" << endl;
    cin >> b;
    cout << endl;
    float Area = PI * ( (b*b) / 4 ) * ( (2 * a - b) / (2 * a + b) );
    cout << Area;*/

    //31#
    /*int number;
    cout << "Enter a number" << endl;
    cin >> number;
    cout << number * number << endl;
    cout << number * number * number << endl;
    cout << number * number * number * number << endl;*/

    //35#
    /*int pennies, nickels, dimes, quarters, dollars;
    cout << "Enter the number of pennies" << endl;
    cin >> pennies;
    cout << "Enter the number of nickels" << endl;
    cin >> nickels;
    cout << "Enter the number of dimes" << endl;
    cin >> dimes;
    cout << "Enter the number of quarters" << endl;
    cin >> quarters;
    cout << "Enter the number of dollars" << endl;
    cin >> dollars;

    float totalPennies = pennies + (nickels * 5) + (dimes * 10) + (quarters * 25) + (dollars * 100);
    float totalDollars = totalPennies / 100;

    cout << totalPennies << " Pennies " << endl;
    cout << totalDollars << " Dollars ";*/

    //39#
    /*float totalBill, cashPaid;
    cout << "Enter the total bill: " << endl;
    cin >> totalBill;
    cout << "Enter the cash paid: " << endl;
    cin >> cashPaid;

    cout << cashPaid - totalBill;*/

    //40#
    /*float billValue;
    cout << "Enter the bill value: " << endl;
    cin >> billValue;

    float totalBill = billValue * 1.1;
    totalBill = totalBill * 1.16;
    cout << "Total bill = " << totalBill;*/

    //42#
    /*int days, hours, minutes, seconds;
    cout << "Enter the number of days" << endl;
    cin >> days;
    cout << "Enter the number of hours" << endl;
    cin >> hours;
    cout << "Enter the number of minutes" << endl;
    cin >> minutes;
    cout << "Enter the number of seconds" << endl;
    cin >> seconds;

<<<<<<< HEAD
    float totalSeconds = (days * 24 * 60 * 60) + (hours * 60 * 60) + (minutes * 60) + seconds;
=======
    short myAge;
>>>>>>> b7bed81a9a6edec5d2b2de1d9e5403e267dc4fc4

    cout << totalSeconds << " Seconds " << endl;*/

    //43#
    /*int numberOfSeconds, days, hours, minutes, seconds;
    cout << "Enter the number of seconds: " << endl;
    cin >> numberOfSeconds;

    int secondsPerDay = 24 * 60 * 60;
    int secondsPerHour = 60 * 60;
    int secondsPerMinutes = 60;

    days = numberOfSeconds / (secondsPerDay);
    numberOfSeconds -= secondsPerDay * days;

    hours = numberOfSeconds / (secondsPerHour);
    numberOfSeconds -= secondsPerHour * hours;

    minutes = numberOfSeconds / (secondsPerMinutes);
    numberOfSeconds -= secondsPerMinutes * minutes;

    seconds = numberOfSeconds;

    cout << days << ":" << hours << ":" << minutes << ":" << seconds;*/

    //47#
    /*float loanAmount, monthlyPayment;
    cout << "Enter the loan amount: " << endl;
    cin >> loanAmount;
    cout << "Enter the monthly payment: " << endl;
    cin >> monthlyPayment;

    cout << loanAmount / monthlyPayment << " Months" << endl;*/

    //48#
    float loanAmount, numberOfMonths;
    cout << "Enter the loan amount: " << endl;
    cin >> loanAmount;
    cout << "Enter the number of months you need: " << endl;
    cin >> numberOfMonths;

    cout << "You need to pay " << loanAmount / numberOfMonths << " Monthly" << endl;


    return 0;
}