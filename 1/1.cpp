#include <iostream>

int main()
{
// //    std::cout << "/*";
//     // std::cout << "*/";
//     std::cout << /* "*/" */;
    // int count = 1;
    // int sum = 0;
    // while (count <= 10)
    // {
    //     sum += count;
    //     ++ count;
    // }
    // std::cout << sum << std::endl;
/*
输出任意两个数中间的整数
*/
    int num1, num2;
    int num;
    std::cout << "Please enter two number (int)\n";
    std::cin >> num1 >> num2;
    if (num1 <= num2)
    {
        num = num1;
        while(num < num2)
        {
            ++ num;
            std::cout << num << std::endl;
        }
    }
    else
    {
        num = num2;
        while(num < num1)
        {
            ++ num ;
            std::cout << num << std::endl;
        }
    }

    return 0;
}