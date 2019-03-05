#include "tests/AllTests.h"

#include "xos/board.h"

// Test that the value of the NONE tile type is 0.
void TestTileNoneValue(CuTest *test) {
  CuAssertIntEquals(test, 0, TILE_NONE);
}

// Test that the value of the X tile type is 1.
void TestTileXValue(CuTest *test) {
  CuAssertIntEquals(test, 1, TILE_X);
}

// Test that the value of the O tile type is 2.
void TestTileOValue(CuTest *test) {
  CuAssertIntEquals(test, 2, TILE_O);
}

// Test that there's not more than three tile types.
void TestTileEnumMax(CuTest *test) {
  CuAssertIntEquals(test, 3, MAX_TILE_TYPE);
}

