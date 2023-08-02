#include <iostream>
#include <cmath>
#include <climits>

using namespace std;

const int FOOT_TO_INCH = 12;
int main(void)
{
    int height;
    cout << "please enter your height in inches_";
    cin >> height;

    cout << "Your height convert to " << height/FOOT_TO_INCH;
    cout << " food and " << height%FOOT_TO_INCH << " inches heights." << endl;


    return 0;

}