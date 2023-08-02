#include <iostream>
#include <cmath>

using namespace std;

double Celsius_Fashrenheit(double c);
int main(void)
{
    double Fashrenheit,celsius;
    cout << "Please enter a Celsius value: ";
    cin >> celsius;
    Fashrenheit = Celsius_Fashrenheit(celsius);
    cout << celsius << " degrees Celsius is " << Fashrenheit << " degrees Fashrenheit." << endl;
    
    return 0;

}

double Celsius_Fashrenheit(double c)
{
    return 1.8 * c + 32.0;
}