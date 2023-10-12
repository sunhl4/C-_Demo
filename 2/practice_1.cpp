#include <iostream>
using namespace std;
const int Foot2inch = 12;
int Foot_to_Inch(int input_height);
int Foot_to_Inch(int input_height)
{
    int height_foot, height_inch;
    height_foot = input_height / Foot2inch;
    height_inch = input_height % Foot2inch;
    cout << "Your height is " << height_foot << " foot " << height_inch << " inch"; 
}
int main(void)
{
    int input_height;
    cout << "please input you height in inch__\b\b";
    cin >> input_height;
    Foot_to_Inch(input_height);
    return 0; 
} // namespace std;

 