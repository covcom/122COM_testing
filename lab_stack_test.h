#include <cxxtest/TestSuite.h>
#include "lab_stack.h"
#include <vector>
#include <memory>
using namespace std;

class StackTest : public CxxTest::TestSuite 
{
private:
    shared_ptr<Stack> s;
    vector<int> testvalues;

public:
    void setUp()
    {
        testvalues = {1,2,3,4,5};
        s = make_shared<Stack>( testvalues.size() );
    }

    void tearDown()
    {
        s.reset();
    }

    /** test that stack reports the correct number of things on the stack **/
    void test_size()
    {
        for( int i=0; i<testvalues.size(); ++i )
        {
            TS_ASSERT_EQUALS( i, s->num_items() );

            s->push( testvalues[i] );
        }

        for( int i=testvalues.size(); i>0; --i )
        {
            TS_ASSERT_EQUALS( s->num_items(), i );

            s->pop();
        }

        TS_ASSERT_EQUALS( s->num_items(), 0 );
    }

    /** test that stack raises Empty exception when popping an empty stack **/
    void test_empty()
    {
        TS_ASSERT_THROWS( s->pop(), Stack::Empty );

        s->push( testvalues[0] );
        s->pop();

        TS_ASSERT_THROWS_ANYTHING( s->pop() );
    }

    /** test that the stack raises Full exception when push on a full stack **/
    void test_full()
    {
        for( int i=0; i<testvalues.size(); ++i )
        {
            s->push( testvalues[i] );
        }

        TS_ASSERT_THROWS( s->push(42), Stack::Full );
    }

    /** test that the stack reports the correct values on the top of the stack **/
    void test_top()
    {
        TS_ASSERT_THROWS( s->top(), Stack::Empty );

        for( int i=0; i<testvalues.size(); ++i )
        {
            s->push( testvalues[i] );

            TS_ASSERT_EQUALS( s->top(), testvalues[i] );
        }
    }
};

