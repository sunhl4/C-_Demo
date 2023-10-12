#include <iostream>
using namespace std;

void fist_func(void);
void second_func(void);

int main(void)
{
    fist_func();
    fist_func();
    second_func();
    second_func();

    return 0;
}

void fist_func(void)
{
    cout << "Three blind mice\n";
}

void second_func(void)
{
    cout << "See how they run\n";
}