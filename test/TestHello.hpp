#include <cxxtest/TestSuite.h>

#include "hello.hpp"

class TestHello : public CxxTest::TestSuite
{
  public:
    void test_Hello_should_be_created_via_ctor()
    {
      Hello h;
    }
};

