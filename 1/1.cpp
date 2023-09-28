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
    int small, big;
    int num;
    std::cout << "Please enter two number (int)\n";
    std::cin >> small >> big;
    if (small <= big)
    {
        num = small;
        while(num < big)
        {
            ++ num;
            std::cout << num << std::endl;
        }
    }
    else
    {
        num = big;
        while(num < small)
        {
            ++ num ;
            std::cout << num << std::endl;
        }
    }

    return 0;
}