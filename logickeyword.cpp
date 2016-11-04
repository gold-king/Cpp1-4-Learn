/*
 Compile:
   g++ -std=c++11 -o logicword logicword.cpp
   clang++ -std=c++11 -o logicword logicword.cpp
 Or
   g++ -std=c++14 -o logicword logicword.cpp
   clang++ -std=c++14 -o logicword logicword.cpp
*/

#include <iostream>

int main(void)
{
    double x(3.03);
    double y(5.03);
    double z(7.05);

    if ((x > 3.00) and (x < 3.05)) {
	std::cout << "This output from AND statement " << x << std::endl;
    }

    if ((y > 3.00) or (y < 1.11)) {
	std::cout << "This output from OR statement " << y << std::endl;
    }

    if (not (z == 7)) {
	std::cout << "This output from NOT statement " << z << std::endl;
    }
    
    return 0;
}