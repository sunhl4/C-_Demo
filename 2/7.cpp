#include <iostream>
#include <cmath>
int stonetold (int sts);
int main(void)
{
    using namespace std;
    int stone;
    cout << "Enter the weight in stone: ";
    cin >> stone;
    int pounds = stonetold(stone);
    cout << stone << "stone = ";
    cout << pounds << " pounds." << endl;

    return 0;
}
// 1 stone = 14lbs
int stonetold(int sts)
{
    int pounds = 14 * sts;
    return pounds;
}