//count the frequency of input number
#include <iostream>
 int main()
 {
    int val, value, count=1;
    if(std::cin >> val) //judge the input
    {
        while(std::cin >> value) 
        {
            if(value == val)
            {
                ++count;
            }
            else
            {
                
                std::cout << val << " occurs" << count << " times.\n";
                val = value; //exchange the  compared number
                count = 1; 
            }  
        }
        std::cout << val << " occurs " << count << " times.\n";
    }
    return 0;
 }