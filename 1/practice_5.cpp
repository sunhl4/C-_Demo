#include <iostream>
using namespace std;

const double TRANS_PARAMAS = 1.8;
const double TRANS_NUM =32.0;

double Celsius_to_Fahrenheit(int celsius);

int main(void)
{
    double celsius;
    double fahrenheit;
    cout << "please enter a Celsius value: ";
    cin >> celsius;
    fahrenheit = Celsius_to_Fahrenheit(celsius);
    cout << celsius<< " degree Celsius is " << fahrenheit << " degree fahrenheit\n";

    return 0;
}

double Celsius_to_Fahrenheit(int celsius)
{
    double fahrenheit;
    fahrenheit = TRANS_PARAMAS * celsius + TRANS_NUM;
    return fahrenheit;
}