#include <iostream>
using namespace std;

int main()
{
#include <iostream>
    using namespace std;

    struct PersonAddress {
        string country;
        string city;
        string residentialArea;
        string departmentNumber;
    };

    struct ContactInformation {
        string email;
        string phoneNumber;
        string facebookAccount;
        string twitterAccount;
        string linkedInAccount;
    };

    struct Person {
        string fullName;
        short age;
        float monthlySalary;
        float yearlySalary = monthlySalary * 12;
        char gender;
        bool isMarried;
        PersonAddress address;
        ContactInformation contact;
    };


    int main()
    {
        Person p1;

        p1.fullName = "Ahmad Al saleh";
        p1.age = 20;
        p1.gender = 'M';
        p1.isMarried = false;
        p1.monthlySalary = 9000;

        p1.address.country = "Saudi Arabia";
        p1.address.city = "Makkah";
        p1.address.residentialArea = "Al Awali";
        p1.address.departmentNumber = "3007";

        p1.contact.email = "ahmad2002@gmail.com";
        p1.contact.phoneNumber = "0555566331";
        p1.contact.facebookAccount = "@AhmadtheKing";
        p1.contact.linkedInAccount = "@AhmadtheKing";
        p1.contact.twitterAccount = "@AhmadtheKing";
        return 0;
    }
}