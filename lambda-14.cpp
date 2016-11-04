/*
 Compile:
   g++ -std=c++14 -o lambda lambda.cpp
 Or
   clang++ -std=c++14 -o lambda lambda.cpp
*/

#include <iostream>

int main(void)
{
    auto adder = [] (auto a, auto b) { return a + b; };
 
    std::cout << "6+4=" << adder(6,4) << std::endl;
 
    return 0;
}
