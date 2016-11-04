/*
 Compile:
   g++ -std=c++11 -o lambda lambda.cpp
 Or
   clang++ -std=c++11 -o lambda lambda.cpp
*/

#include <iostream>

int main(void)
{
    auto adder = [] (int a, int b)->int { return a + b; };
    auto add   = [] (int a, int b) { return a + b; };

    std::cout << "6+4=" << adder(6,4) << std::endl;
    std::cout << "2+3=" << add(2,3)   << std::endl;

    return 0;
}
