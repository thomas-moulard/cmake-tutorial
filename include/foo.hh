#ifndef FOO_HH
# define FOO_HH

namespace foo
{
  class MyClass
  {
    MyClass ();
    virtual ~MyClass ();

    virtual int result ()
    {
      return 1;
    }
  };
} // end of namespace foo.

#endif //! FOO_HH
