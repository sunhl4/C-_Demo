#include <iostream>
#include <cmath>
void simon(int n);
int main(void)
{
    using namespace std;
    simon(3);
    cout << "Pick an number: ";
    int count;
    cin >> count;
    simon (count);
    cout << "Done!" << endl;

    return 0;
}

void simon(int n)
{
    using namespace std;
    cout << "Simo says touch your toes " << n << " times." <<endl;
}