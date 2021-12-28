#include "Nana.hpp"

#include "src/foo/foo.hpp"

void Nana::foo()
{
    Foo f{};
    f.foo();
    std::cout << " foo "<< std::endl;
}

int Nana::boo(int a, int b)
{
    auto c = a + b;
    std::cout << " boo c = "<< c<< std::endl;
    return c;
}