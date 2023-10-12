#include <iostream>
 using namespace std;

int main(void)
 {
    int age_year;
    int age_mouths;
    cout << "Enter your age: ";
    cin >> age_year;
    cout << endl;
    age_mouths = age_year * 12;
    cout << "Your age in mouths is: " << age_mouths << endl;
    return 0;
 } // namespace std
 
