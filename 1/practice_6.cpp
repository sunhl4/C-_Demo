#include <iostream>

using namespace std;
int show_time(int hour, int minutes);
int show_time(int hour, int minutes)；
{
    cout << "Time: " << hour << ":" << minutes << endl;
}
int main(void)
{
    int hour;
    int minutes;
    cout << "Enter the number of hours: ";
    cin >> hour;
    cout << "Enter the number of minutes: ";
    cin >> minutes;
    show_time(hour, minutes);

    return 0;   
} // namespace std;
 