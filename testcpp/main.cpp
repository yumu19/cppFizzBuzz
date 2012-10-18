//
//  main.cpp
//  testcpp
//
//  Created by Yumura Tsubasa on 2012/10/18.
//  Copyright (c) 2012年 Yumura Tsubasa. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[])
{

    // insert code here...
    int i;
    
    int max = atoi(argv[1]);
    for (i = 0; i <= max; i++) {
        if ((i % 3 == 0)&&(i % 5 == 0)) {
           std::cout << "FizzBuzz" << std::endl;
        }
        else if (i % 3 == 0) {
           std::cout << "Fizz" << std::endl;
        }
        else if (i % 5 == 0) {
            std::cout << "Buzz" << std::endl;
        }
        else {
            std::cout << i << std::endl;
        }
    }
    return 0;
}

