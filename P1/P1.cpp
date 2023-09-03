
#include <iostream>
using namespace std;

enum enGender{Male, Female};
enum enMaritalStatus{Single, Married};
enum enColor{Red, Blue, Green, Yellow, Black, White};

struct stAddress {
    string countryName;
    string cityName;
    string streetName;
    string buildingNo;
};

struct stContactInfo {
    string email;
    string phoneNumber;
    stAddress address;
};




struct stPerson {
    string firstName;
    string lastName;
    short age;
    int monthlySalary;
    int yearlySalary = monthlySalary * 12;

    enGender gender;
    enMaritalStatus maritalStatus;
    enColor favoriteColor;

    stContactInfo contactInfo;
};

int main()
{
    stPerson person1;
    person1.firstName = "Mohammed";
    person1.lastName = "Abu-Hadhud";
    person1.age = 44;
    person1.monthlySalary = 12000;

    person1.gender = enGender::Male;
    person1.maritalStatus = enMaritalStatus::Married;
    person1.favoriteColor = enColor::Black;

    person1.contactInfo.email = "xy-xz@mail.com";
    person1.contactInfo.phoneNumber = "+966521846841";
    person1.contactInfo.address.countryName = "Jordan";
    person1.contactInfo.address.cityName = "Amman";
    person1.contactInfo.address.buildingNo = "3707";
    person1.contactInfo.address.streetName = "queen street";


    cout << "***********************************" << endl;
    cout << "Name: " << person1.firstName << " " << person1.lastName << "\n";
    cout << "Age: " << person1.age << " Years.\n";
    cout << "City: " << person1.contactInfo.address.cityName << "\n";
    cout << "Country: " << person1.contactInfo.address.countryName << "\n";
    cout << "Monthly Salary: " << person1.monthlySalary << "\n";
    cout << "Yearly Salary: " << person1.yearlySalary << "\n";
    cout << "Gender: " << person1.gender << "\n";
    cout << "Married: " << person1.maritalStatus << "\n";
    cout << "Favorite color: " << person1.favoriteColor << "\n";
    cout << "***********************************" << endl << endl;




    int firstNum = 20, secondNum = 30, thirdNum = 10;
    cout << "20 +\n30 +\n10\n" << "----------------------------------\nTotal = " << firstNum + secondNum + thirdNum << endl << endl;



    int myAge = 25;
    cout << "After 5 Years you will be " << myAge + 5 << " years old." << endl;

    return 0;
}
