#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    /*
    #16: use pow inside sqrt
    #18,#19,#20: after finding the result use ceil and print the final results
    */

    //                                                    #16
    /*int a, d;
    cout << "Please enter the number A: " << endl;
    cin >> a;
    cout << "Please enter the number D: " << endl;
    cin >> d;
    float area = a * sqrt(pow(d, 2) - pow(a, 2));
    cout << area;*/


    //                                                    #18
    /*int r;
    const float PI = 3.14;
    cout << "Please enter the number R: " << endl;
    cin >> r;
    float area = PI * pow(r, 2);
    cout << ceil(area);*/


    //                                                    #19
    /*int d;
    const float PI = 3.14;
    cout << "Please enter the number D: " << endl;
    cin >> d;
    float area = (PI * pow(d,2)) / 4;
    cout << ceil(area);*/


    //                                                    #20
    /*int a;
    const float PI = 3.14;
    cout << "Please enter the number A: " << endl;
    cin >> a;
    float area = (PI * pow(a, 2)) / 4;
    cout << ceil(area);*/


    /*
    #21, #22: after finding the result use floor and print the final results
    */

    //                                                     #21
    /*int l;
    const float PI = 3.14;
    cout << "Please enter the number L: " << endl;
    cin >> l;
    float area = pow(l, 2) / (4 * PI);
    cout << floor(area);*/


    //                                                     #22
    /*float a, b;
    const float PI = 3.14;
    cout << "Please enter the number A: " << endl;
    cin >> a;
    cout << "Please enter the number B: " << endl;
    cin >> b;
    float area = (PI) * ((pow(b, 2) / 4)) * ((2 * a - b) / (2 * a + b));
    cout << floor(area);*/

    /*
    #23, #31, #32, #42, #43: after finding the result use round and print the final results
    */

    //                                                     #23
    /*float a, b, c;
    const float PI = 3.14;
    cout << "Please enter the number A: " << endl;
    cin >> a;
    cout << "Please enter the number B: " << endl;
    cin >> b;
    cout << "Please enter the number C: " << endl;
    cin >> c;
    float p = (a + b + c) / 2;
    float area = PI * pow((a * b * c) / (4 * sqrt(p * (p - a) * (p - b) * (p - c))), 2);
    cout << round(area);*/

    //                                                     #31
    /*int a;
    cout << "Please enter the number A: " << endl;
    cin >> a;
    cout << round(pow(a, 2)) << endl;
    cout << round(pow(a, 3)) << endl;
    cout << round(pow(a, 4)) << endl;*/

    //                                                     #32
    /*int number, m;
    cout << "Please enter the number: " << endl;
    cin >> number;
    cout << "Please enter the number M: " << endl;
    cin >> m;
    cout << round(pow(number, m));*/

    //                                                     #42
    /*int days, hours, minutes, seconds;
    cout << "Enter the number of days" << endl;
    cin >> days;
    cout << "Enter the number of hours" << endl;
    cin >> hours;
    cout << "Enter the number of minutes" << endl;
    cin >> minutes;
    cout << "Enter the number of seconds" << endl;
    cin >> seconds;
    float totalSeconds = (days * 24 * pow(60, 2)) + (hours * pow(60,2)) + (minutes * 60) + seconds;
    short myAge;
    cout << round(totalSeconds) << " Seconds " << endl;*/

    //                                                    #43
    int numberOfSeconds, days, hours, minutes, seconds;
    cout << "Enter the number of seconds: " << endl;
    cin >> numberOfSeconds;
    int secondsPerDay = 24 * pow(60, 2);
    int secondsPerHour = pow(60, 2);
    int secondsPerMinutes = 60;
    days = numberOfSeconds / (secondsPerDay);
    numberOfSeconds -= secondsPerDay * days;
    hours = numberOfSeconds / (secondsPerHour);
    numberOfSeconds -= secondsPerHour * hours;
    minutes = numberOfSeconds / (secondsPerMinutes);
    numberOfSeconds -= secondsPerMinutes * minutes;
    seconds = numberOfSeconds;
    cout << round(days) << ":" << round(hours) << ":" << round(minutes) << ":" << round(seconds);
    return 0;
}