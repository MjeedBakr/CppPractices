
#include <iostream>
#include <string>
using namespace std;

void displayMyCardInfo(){

    std::cout << "**************************\n";
    std::cout << "Name: Abdulmajeed Bakr.\n";
    std::cout << "Age : 21 Years.\n";
    std::cout << "City: Makkah.\n";
    std::cout << "Country: Saudi Arabia.\n";
    std::cout << "**************************\n\n\n";
}

void printSquareStars(){

    std::cout << "********\n";
    std::cout << "********\n";
    std::cout << "********\n";
    std::cout << "********\n\n\n";
}

void printILoveProgramming(){

    std::cout << "I Love Programming!\n\n";
    std::cout << "I promise to be the best develper ever!\n\n";
    std::cout << "I know it will take time to practice, but I\nwill achieve my goal.\n\n";
    std::cout << "Best Regards,\n";
    std::cout << "Abdulmajeed Bakr.\n\n\n";
}

void printH(){

    std::cout << "*       *\n";
    std::cout << "*       *\n";
    std::cout << "* * * * *\n";
    std::cout << "*       *\n";
    std::cout << "*       *\n";
}


int main()
{
    displayMyCardInfo();
    printSquareStars();
    printILoveProgramming();
    printH();

    return 0;
}
