#include <iostream>

#include "gtest/gtest.h"

#include "foo.hpp"

TEST(Test_foo, foo)
{
    Foo f{};
    f.foo();
    EXPECT_EQ(1, 1);
}


TEST(Test_foo, boo)
{
    Foo f{};
    
    EXPECT_EQ(3, f.boo(1,2));
}

TEST(Test_foo, fail_boo)
{
    Foo f{};
    
    EXPECT_EQ(4, f.boo(1,2));
}