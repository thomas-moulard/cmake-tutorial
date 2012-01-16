#ifndef BAR_HH
# define BAR_HH
# include <foo.hh>

namespace bar
{
  class MySubClass : public foo::MyClass
  {
  public:
    MySubClass ();
    virtual ~MySubClass ();

    virtual int result ()
    {
      return 2;
    }
  };
} // end of namespace bar.

#endif //! BAR_HH
