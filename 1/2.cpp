/*
计算输入数据的总和
*/
#include <iostream>
 int main()
 {
    int sum = 0, value;
    while(std::cin >> value )
    {
        sum += value;
    }
    std::cout << sum << std::endl;
    return 0;
 }