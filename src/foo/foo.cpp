#include "foo.hpp"

#include "bar/bar.hpp"

void Foo::foo()
{
    Bar b{};
    b.foo();
    std::cout << " foo "<< std::endl;
}

int Foo::boo(int a, int b)
{
    auto c = a + b;
    std::cout << " boo c = "<< c<< std::endl;
    return c;
}