#include <iostream>
 int main(void)
 {
    using namespace std;
    double * p3 = new double [3];
    p3[0] = 0.2;
    p3[1] = 0.5;
    p3[2] = 0.8;
    cout << "p3[1] is " << p3[1] << ".\n";
    p3 = p3 + 1;
    cout << "Now p3[0] is " << p3[0] << ".\n";
    cout << "Now p3[1] is " << p3[1] << ".\n";
    cout << p3[-1] << endl;
    p3 = p3 - 1;//point back to beginning
    delete [] p3;//free the memory
    return 0;
 }