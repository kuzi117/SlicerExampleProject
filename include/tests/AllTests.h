#ifndef TOTEST_ALLTESTS_H
#define TOTEST_ALLTESTS_H

#include <stddef.h>

#include "tests/CuTest.h"

// Gets the tests to run.
void getAllTests(CuSuite *suite);

// All tests.
// XOs tests.
void TestTileNoneValue(CuTest *test);
void TestTileXValue(CuTest *test);
void TestTileOValue(CuTest *test);
void TestTileEnumMax(CuTest *test);

#endif // TOTEST_ALLTESTS_H
