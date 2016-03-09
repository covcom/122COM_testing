
CC = g++ --std=c++11 -I. 
TESTGEN = bin/cxxtestgen

TARGETS = run_unit_tester xml_unit_tester
TESTS = test_*.h

all: run

clean: 
	rm -rf *.o unit_tester* xml_tester*

run: $(TARGETS)

# === commands to produce and run unit tests ======
run_unit_tester: unit_tester
	./unit_tester

unit_tester: unit_tester.cpp
	$(CC) -o $@ $^

unit_tester.cpp: $(TESTS) *.h
	$(TESTGEN) -o $@ --error-printer $<

# === commands to produce and run unit tests that print to a file ======
xml_unit_tester: xml_tester
	./xml_tester > xml_tester_results.xml

xml_tester: xml_tester.cpp
	$(CC) -o $@ $^

xml_tester.cpp: $(TESTS) *.h
	$(TESTGEN) -o $@ --runner=XmlPrinter $<
