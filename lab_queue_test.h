#include <cxxtest/TestSuite.h>
#include "lab_queue.h"
#include <vector>
#include <memory>
using namespace std;

class QueueTest : public CxxTest::TestSuite 
{
private:
	shared_ptr<Queue> q;
	vector<int> testvalues;

public:
	void setUp()
    {
    	testvalues = {1,2,3,4,5};
        q = make_shared<Queue>( testvalues.size() );
    }

    void tearDown()
    {
        q.reset();
    }

    // COMPLETE ME
    void test_nothing()
    {
    }
};

