#pragma once

#include <string>
#include <iostream>

class Nana
{
public:
    Nana()
    {
       std::cout << " konstruktor:: Nana"<< std::endl;
    };
    ~Nana()
    {
       std::cout << " destruktor:: Nana"<< std::endl;
    }
    void foo();
    int boo(int a, int b);
};

