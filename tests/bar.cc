#include "bar.h"

int main ()
{
  bar::MySubClass object;
  if (object.result () != 2)
    {
      std::cout << "test failed" << std::endl;
      return 1;
    }
  std::cout << "test succeed" << std::endl;
  return 0;
}
