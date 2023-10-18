#include <iostream>
#include <array>
#include <string>
using namespace std;

int main(void)
{
    // array<int, 5> num = {1, 3, 5, 7, 9};
    // cout << num[4];
    // auto num1 =  num.begin();
    // cout << *num1 << endl;
/* range for 
    string name = "leon";
    for (auto s : name)
        cout << s <<endl;
*/
    // char arr[] = "cheeseburger";
    // string str  = "string";
    // for (auto i : str)
    //     cout << i ;
// 结构体
    // struct fish
    // {
    //     string variety;
    //     int weight;
    //     double high;

    //     /* data */
    // };
    // fish fish_num1= 
    // {
    //     "sharp",
    //     200,
    //     13.5
    // };
    // cout << fish_num1.variety << endl;
    // cout << fish_num1.weight << endl;
    // cout << fish_num1.high << endl;
// 枚举类型的定义和赋值
    // enum Response {Yes = 1, No = 0, Maybe = 2};
    // cout << Response(No);
// 指针
    // double ted = 12.3;
    // double *pointer = &ted;
    // cout << *pointer << endl;
    float treacle[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    float *pt;
    pt = treacle;
    cout << *pt << endl;
    cout << *(pt+9);


    return 0;
}

