#include <stdio.h>

#include "tests/CuTest.h"

#include "tests/AllTests.h"

int RunAllTests(void) {
  // Get and fill suite.
  CuSuite *suite = CuSuiteNew();
  getAllTests(suite);

  // Run the suite.
  CuSuiteRun(suite);

  // Fill the output and print it.
  CuString *output = CuStringNew();
  CuSuiteSummary(suite, output);
  CuSuiteDetails(suite, output);
  printf("%s\n", output->buffer);

  // Get return value.
  int failCount = suite->failCount;

  // Clean up.
  CuStringDelete(output);
  CuSuiteDelete(suite);

  return failCount;
}

int main() {
  return RunAllTests();
}
