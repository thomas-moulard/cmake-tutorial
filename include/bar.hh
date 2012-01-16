#ifndef BAR_HH
# define BAR_HH

namespace bar
{
  class MySubClass : public foo::MyClass
  {
    MySubClass ();
    virtual ~MySubClass ();

    virtual int result ()
    {
      return 2;
    }
  };
} // end of namespace bar.

#endif //! BAR_HH
