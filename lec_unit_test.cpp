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
bool suite_SomeTests_init = false;
#include "lec_unit_test.h"

static SomeTests suite_SomeTests;

static CxxTest::List Tests_SomeTests = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_SomeTests( "lec_unit_test.h", 3, "SomeTests", suite_SomeTests, Tests_SomeTests );

static class TestDescription_suite_SomeTests_test_bigger : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_SomeTests_test_bigger() : CxxTest::RealTestDescription( Tests_SomeTests, suiteDescription_SomeTests, 6, "test_bigger" ) {}
 void runTest() { suite_SomeTests.test_bigger(); }
} testDescription_suite_SomeTests_test_bigger;

static class TestDescription_suite_SomeTests_test_equals : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_SomeTests_test_equals() : CxxTest::RealTestDescription( Tests_SomeTests, suiteDescription_SomeTests, 10, "test_equals" ) {}
 void runTest() { suite_SomeTests.test_equals(); }
} testDescription_suite_SomeTests_test_equals;

static class TestDescription_suite_SomeTests_test_except : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_SomeTests_test_except() : CxxTest::RealTestDescription( Tests_SomeTests, suiteDescription_SomeTests, 14, "test_except" ) {}
 void runTest() { suite_SomeTests.test_except(); }
} testDescription_suite_SomeTests_test_except;

#include <cxxtest/Root.cpp>
const char* CxxTest::RealWorldDescription::_worldName = "cxxtest";
