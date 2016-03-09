/* Generated file, do not edit */

#ifndef CXXTEST_RUNNING
#define CXXTEST_RUNNING
#endif

#define _CXXTEST_HAVE_STD
#define _CXXTEST_HAVE_EH
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
bool suite_StackTest_init = false;
#include "lab_stack_test.h"

static StackTest suite_StackTest;

static CxxTest::List Tests_StackTest = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_StackTest( "lab_stack_test.h", 7, "StackTest", suite_StackTest, Tests_StackTest );

static class TestDescription_suite_StackTest_test_size : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_StackTest_test_size() : CxxTest::RealTestDescription( Tests_StackTest, suiteDescription_StackTest, 26, "test_size" ) {}
 void runTest() { suite_StackTest.test_size(); }
} testDescription_suite_StackTest_test_size;

static class TestDescription_suite_StackTest_test_empty : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_StackTest_test_empty() : CxxTest::RealTestDescription( Tests_StackTest, suiteDescription_StackTest, 46, "test_empty" ) {}
 void runTest() { suite_StackTest.test_empty(); }
} testDescription_suite_StackTest_test_empty;

static class TestDescription_suite_StackTest_test_full : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_StackTest_test_full() : CxxTest::RealTestDescription( Tests_StackTest, suiteDescription_StackTest, 57, "test_full" ) {}
 void runTest() { suite_StackTest.test_full(); }
} testDescription_suite_StackTest_test_full;

static class TestDescription_suite_StackTest_test_top : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_StackTest_test_top() : CxxTest::RealTestDescription( Tests_StackTest, suiteDescription_StackTest, 68, "test_top" ) {}
 void runTest() { suite_StackTest.test_top(); }
} testDescription_suite_StackTest_test_top;

#include <cxxtest/Root.cpp>
const char* CxxTest::RealWorldDescription::_worldName = "cxxtest";
