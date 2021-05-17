#include "bar.hpp"

void Bar::foo()
{
    std::cout << " Bar::foo "<< std::endl;
}

int Bar::boo(int a, int b)
{
    auto c = a + b;
    std::cout << " boo c = "<< c<< std::endl;
    return c;
}