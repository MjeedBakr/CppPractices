
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string st1 = "43.22";
    double dt1 = stod(st1);
    float ft1 = stof(st1);
    int it1 = stoi(st1);

    int n1 = 20;
    string s1 = to_string(n1);

    double n2 = 33.5;
    string d2 = to_string(n2);

    float n3 = 55.23;
    string s3 = to_string(n3);
    int i3 = n3;
    i3 = (int) n3;
    i3 = int(n3);

    cout << d2 << endl;
    
    return 0;
}
