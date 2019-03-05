#include "tests/AllTests.h"

void getAllTests(CuSuite *suite) {
  SUITE_ADD_TEST(suite, TestTileEnumMax);
  SUITE_ADD_TEST(suite, TestTileNoneValue);
  SUITE_ADD_TEST(suite, TestTileXValue);
  SUITE_ADD_TEST(suite, TestTileOValue);
}
