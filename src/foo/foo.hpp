#pragma once

#include <string>
#include <iostream>

class Foo
{
public:
    Foo()
    {
       std::cout << " konstruktor:: foo"<< std::endl;
    };
    ~Foo()
    {
       std::cout << " destruktor:: foo"<< std::endl;
    }
    void foo();
    int boo(int a, int b);
};

