//int 指定输出为整型
/*
My First C++ Code

*/
#include <iostream>
void change_func( int *a,  int *b)
{
    using namespace std;
    int temp = *a;
    *a = *b;
    *b = temp;

}
#include <iostream>
void change_func();
int main(void)
{
    using namespace std;//std:标准输入输出命名空间
    int a1 = 10;
    int a2 =20;
    change_func(&a1, &a2);
    cout << a1 << a2 << endl;

    return 0;
}
