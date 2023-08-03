#include <iostream>
int main(void)
{
    using namespace std;
    int updates = 6;
    int * p_updates;
    p_updates = &updates;

    cout << "Values: updates = " << updates;
    cout << ", *p_updates = " << *p_updates <<endl;
    cout << "Address: &updates = " << &updates;
    cout << ", p_updates = " << p_updates << endl;
    *p_updates = *p_updates + 1; //指针指向updates的地址，所以指针修改指针的值相当于修改指针指向的地址的值即修改updates的值
    cout << "now updates = " << updates << endl;

    return 0;
}