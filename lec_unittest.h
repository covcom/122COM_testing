#include <cxxtest/TestSuite.h>

class SomeTests : 
	public CxxTest::TestSuite 
{
public:
	void test_bigger()
	{
		TS_ASSERT( 1 < 0 );
	}

	void test_equals()
	{
		TS_ASSERT_EQUALS( 1+1, 2 );
	}
};