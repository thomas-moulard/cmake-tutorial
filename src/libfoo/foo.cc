#include <iostream>
#include "foo.h"

namespace foo
{
  MyClass::MyClass ()
  {
    std::cout << __PRETTY_FUNCTION__ << std::endl;
  }
  
  MyClass::~MyClass ()
  {
    std::cout << __PRETTY_FUNCTION__ << std::endl;
  }
} // end of namespace foo.
