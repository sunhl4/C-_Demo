#include <iostream>

int main()
{
// //    std::cout << "/*";
//     // std::cout << "*/";
//     std::cout << /* "*/" */;
    int count = 1;
    int sum = 0;
    while (count <= 10)
    {
        sum += count;
        ++ count;
    }
    std::cout << sum << std::endl;

    return 0;
}