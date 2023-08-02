#include <iostream>
#include <cmath>
#include <climits>
using namespace std;

int main(void)
{
    char ch = 'M';
    int i =ch;
    cout << "The ASCII code for " << ch <<  " is " << i << endl;
    ch = ch +1;
    i = ch;
    cout << "The ASCII code for " << ch <<  " is " << i << endl;

    cout << "Display char ch using cout.put(ch): ";
    cout.put(ch);
    cout << endl;   
    return 0;
}
