
#include <iostream>
using namespace std;

int main()
{
    int firstNumber, secondNumber;
    cout << "Please enter the first number A?" << endl;
    cin >> firstNumber;
    cout << "Please enter the second number B?" << endl;
    cin >> secondNumber;

    cout << firstNumber << " = " << secondNumber << " is " << (firstNumber == secondNumber) << endl;
    cout << firstNumber << " != " << secondNumber << " is " << (firstNumber != secondNumber) << endl;
    cout << firstNumber << " > " << secondNumber << " is " << (firstNumber > secondNumber) << endl;
    cout << firstNumber << " < " << secondNumber << " is " << (firstNumber < secondNumber) << endl;
    cout << firstNumber << " >= " << secondNumber << " is " << (firstNumber >= secondNumber) << endl;
    cout << firstNumber << " <= " << secondNumber << " is " << (firstNumber <= secondNumber) << endl;
    return 0;
}