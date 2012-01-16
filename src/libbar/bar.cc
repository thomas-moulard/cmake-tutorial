#include <iostream>
#include "bar.h"

namespace foo
{
  MySubClass::MySubClass ()
    : public foo::MyClass
  {
    std::cout << __PRETTY_FUNCTION__ << std::endl;
  }

  MySubClass::~MySubClass ()
  {
    std::cout << __PRETTY_FUNCTION__ << std::endl;
  }
} // end of namespace foo.
