#pragma once

#include <string>
#include <iostream>

class Bar
{
public:
    Bar()
    {
       std::cout << " konstruktor:: bar"<< std::endl;
    };
    ~Bar()
    {
       std::cout << " destruktor:: bar"<< std::endl;
    }
    void foo();
    int boo(int a, int b);
};

