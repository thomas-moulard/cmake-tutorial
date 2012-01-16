#include <iostream>
#include "bar.hh"

namespace bar
{
  MySubClass::MySubClass ()
    : foo::MyClass ()
  {
    std::cout << __PRETTY_FUNCTION__ << std::endl;
  }

  MySubClass::~MySubClass ()
  {
    std::cout << __PRETTY_FUNCTION__ << std::endl;
  }
} // end of namespace bar.
