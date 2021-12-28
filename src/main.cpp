#include <iostream>
#include <vector>
#include <string>

#include "foo/foo.hpp"
#include "nana/Nana.hpp"


using namespace std;

int main()
{
   vector<string> msg {"Hello", "C++", "World", "from", "VS Code", "and the C++ extension!"};

   for (const string& word : msg)
   {
      cout << word << " ";
   }
   cout << endl;

   Foo f{};
   f.foo();
   
   Nana nana{};
   nana.foo();

   return 0;
}