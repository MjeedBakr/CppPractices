
#include <iostream>
using namespace std;

enum Gender{Male, Female};
enum Status{Single, Married};
enum Color{Red, Blue, Green, Yellow, Black, White};

int main()
{
    string name = "Mohammed Abu-Hadhud.";
    int age = 44;
    string city = "Amman.", country = "Jordan.";
    int monthlySalary = 5000, yearlySalary = monthlySalary * 12;
    Gender gender = Gender::Male;
    Status status = Status::Married;
    Color favoriteColor = Color::Black;

    cout << "***********************************" << endl;
    cout << "Name: " << name << "\n";
    cout << "Age: " << age << " Years.\n";
    cout << "City: " << city << "\n";
    cout << "Country: " << country << "\n";
    cout << "Monthly Salary: " << monthlySalary << "\n";
    cout << "Yearly Salary: " << yearlySalary << "\n";
    cout << "Gender: " << gender << "\n";
    cout << "Married: " << status << "\n";
    cout << "Favorite color: " << favoriteColor << "\n";
    cout << "***********************************" << endl << endl;




    int firstNum = 20, secondNum = 30, thirdNum = 10;
    cout << "20 +\n30 +\n10\n" << "----------------------------------\nTotal = " << firstNum + secondNum + thirdNum << endl << endl;



    int myAge = 25;
    cout << "After 5 Years you will be " << myAge + 5 << " years old." << endl;

    return 0;
}
