#include <iostream>
#include <cmath>
#include <climits>

const int FOOT_TO_INCH =12;
const double INCH_TOMETER = 0.0254;
const double KILLOGRAM_TO_POUND = 2.2;


using namespace std;
int main(void)
{
    int height_foot, height_inch;
    double weight_pound, height, weight, bmi;

    cout << "please enter your height foot:";
    cin >> height_foot;
    cout << "please enter your height inch:";
    cin >> height_inch;
    cout << "please enter your weight pound:";
    cin >> weight_pound;

    height = (height_foot * FOOT_TO_INCH + height_inch)*INCH_TOMETER;
    weight = weight_pound / KILLOGRAM_TO_POUND;
    bmi = weight / (height * height);
    
    cout << "Your BMI is " << bmi << endl;

    return 0;
    
} 
