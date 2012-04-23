
#include "cxxtest_ext.hpp"
#include "hello/hello.hpp"

class TestHello : public CxxTest::TestSuite
{
  public:
    void test_Hello_should_be_created_via_ctor()
    {
      TCH;
      hello::Hello h;
    }
};

