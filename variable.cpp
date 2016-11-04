/*
 Compile:
   g++ -std=c++11 -o variable variable.cpp
   clang++ -std=c++11 -o variable variable.cpp 
 Or
   clang++ -std=c++14 -o variable variable.cpp 
   clang++ -std=c++14 -o variable variable.cpp 
*/

#include <iostream>

int main(void)
{
    int    a(5);
    double b(3.0);
    int    c(3e4);
    double d(7.1);
    double e(3.5e3);
    double f(2.e-3);

    int note1(4), note2(5);
    double note(note1 + note2);

    std::cout << "a = " << a << std::endl;
    std::cout << "b = " << b << std::endl;
    std::cout << "c = " << c << std::endl;
    std::cout << "d = " << d << std::endl;
    std::cout << "e = " << e << std::endl;
    std::cout << "f = " << f << std::endl;

    std::cout << "note/2 = " << note/2 << std::endl;

    return 0;
}