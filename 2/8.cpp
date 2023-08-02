#include <iostream>
#include <cmath>
void simon(int n);
//using namespace std;
int main(void)
{
 //   using namespace std;
    simon(3);
    std :: cout << "Pick an number: ";
    int count;
    std :: cin >> count;
    simon (count);
    std :: cout << "Done!" << std :: endl;

    return 0;
}

void simon(int n)
{
 //   using namespace std;
    std :: cout << "Simo says touch your toes " << n << " times." << std :: endl;
}