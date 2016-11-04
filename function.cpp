/*
 Compile:
   g++ -std=c++11 -o function function.cpp
   clang++ -std=c++11 -o function function.cpp
 Or
   g++ -std=c++14 -o function function.cpp
   clang++ -std=c++14 -o function function.cpp
*/

#include <iostream>

void say(std::string name="UUUUUUU")
{
    std::cout << "Hi, " << name << std::endl;
}

int main(void)
{
    say();
    say("YYYYYYYYYYYY");

    return 0;
}