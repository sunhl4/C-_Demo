#include <iostream>

struct  inflatable
{
    char name[20];
    float volume;
    double price;
    /* data */
};

int main(void)
{
    using namespace std;
    inflatable guest = {"Glorious", 1.88, 29.99};
    inflatable pal = {"Audacious Arthur", 3.12, 32.99};
    cout << "Expand your guest list with " << guest.name;
    cout << " and " << pal.name << "!\n";
    cout << "You can have both for $";
    cout << guest.price +pal.price << "!\n";
    return 0;
}
