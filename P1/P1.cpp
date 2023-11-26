#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    cout << "------------" << "-" << "-------" << "-" << "---\n";
    cout << setw(12) << "Name" << "|" << setw(7) << "City" << "|" << setw(3) << "Age\n";
    cout << "------------" << "+" << "-------" << "+" << "---\n";

    cout << setw(12) << "Abdulmajeed" << "|" << setw(7) << "Makkah" << "|" << setw(3) << "20\n";
    cout << setw(12) << "Ahmad" << "|" << setw(7) << "Riyadh" << "|" << setw(3) << "22\n";

    cout << "------------" << "-" << "-------" << "-" << "---\n";



    //------------------------
    //        Name|   City|Age
    //------------+-------+---
    // Abdulmajeed| Makkah|20
    //       Ahmad| Riyadh|22
    //------------------------
}