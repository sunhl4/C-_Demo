#include <iostream>
using namespace std;
const int DegreeToMinutes = 60;
const int MinutesToSecond = 60;

using namespace std;

int main(void)
{
    double degree, minutes, seconds;
    double degree_out;
    cout << "Enter a latitude in degrees, minutes, and seconds:\n ";
    cout << "Fist, enter the degree: " ;
    cin >> degree;
    cout << "\nNext, enter the minutes of arc: ";
    cin >> minutes;
    cout << "\nFinally, enter the seconds of arc: ";
    cin >> seconds;
    cout << endl;
    degree_out = degree + minutes/60 + seconds/60/60;
    cout << degree  << " degrees, " << minutes << " minutes, " << seconds << " seconds = "
        << degree_out << " degrees\n"; 
    return 0;
}