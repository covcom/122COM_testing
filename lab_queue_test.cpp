/* Generated file, do not edit */

#ifndef CXXTEST_RUNNING
#define CXXTEST_RUNNING
#endif

#define _CXXTEST_HAVE_STD
#include <cxxtest/TestListener.h>
#include <cxxtest/TestTracker.h>
#include <cxxtest/TestRunner.h>
#include <cxxtest/RealDescriptions.h>
#include <cxxtest/TestMain.h>
#include <cxxtest/ErrorPrinter.h>

int main( int argc, char *argv[] ) {
 int status;
    CxxTest::ErrorPrinter tmp;
    CxxTest::RealWorldDescription::_worldName = "cxxtest";
    status = CxxTest::Main< CxxTest::ErrorPrinter >( tmp, argc, argv );
    return status;
}
bool suite_QueueTest_init = false;
#include "lab_queue_test.h"

static QueueTest suite_QueueTest;

static CxxTest::List Tests_QueueTest = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_QueueTest( "lab_queue_test.h", 7, "QueueTest", suite_QueueTest, Tests_QueueTest );

static class TestDescription_suite_QueueTest_test_nothing : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_QueueTest_test_nothing() : CxxTest::RealTestDescription( Tests_QueueTest, suiteDescription_QueueTest, 26, "test_nothing" ) {}
 void runTest() { suite_QueueTest.test_nothing(); }
} testDescription_suite_QueueTest_test_nothing;

#include <cxxtest/Root.cpp>
const char* CxxTest::RealWorldDescription::_worldName = "cxxtest";
