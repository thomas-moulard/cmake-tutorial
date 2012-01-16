#include <iostream>
#include "bar.hh"

int main ()
{
  bar::MySubClass object;
  std::cout << "Result is " << object.result () << std::endl;
  return 0;
}
