CC = g++ --std=c++11  

# where is cxxtestgen?
TESTGEN = cxxtestgen --error-printer

# things you want to test, each of these needs a matching file ending in _test.h
TESTS = pre_unit lab_stack lab_queue

#-----------------------------------------
# Shouldn't need to change anything below this bit

all: test

test: $(TESTS)
	@(for i in $(TESTS); do echo "====== Run $$i tests ======"; ./$$i; echo ""; done)

TESTS_H = $(TESTS:=_test.h)
TESTS_CC = $(TESTS:=_test.cpp)

$(TESTS): $(TESTS_CC)

%_test.cpp: %_test.h
	@(echo "====== Create the cxxtest code for $< ======")
	$(TESTGEN) -o $@ $<
	@(echo "")

%: %_test.cpp
	@(echo "====== Compile the test runner for $< ======")
	$(CC) -o $@ $< 
	@(echo "")

clean:
	-rm -f *~
	-rm -f $(TESTS) $(TESTS_CC)
