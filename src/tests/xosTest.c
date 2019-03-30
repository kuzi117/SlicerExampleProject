#include <xos/board.h>
#include <stdint.h>
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

// Test that X turn is false.
void TestTurnX(CuTest *test) {
  CuAssertIntEquals(test, false, TURN_X);
}

// Test that O turn is true.
void TestTurnO(CuTest *test) {
  CuAssertIntEquals(test, true, TURN_O);
}

// Test that the game is inited correctly.
void TestGameInit(CuTest *test) {
  XOGame game;
  initGame(&game);

  // Correct turn.
  CuAssertIntEquals(test, game.turn, TURN_X);

  // Correct tiles.
  for (uint8_t i = 0; i < 3; ++i) {
    for (uint8_t j = 0; j < 3; ++j) {
      CuAssertIntEquals(test, game.tiles[i][j], TILE_NONE);
    }
  }
}

void TestAdvanceTurn(CuTest *test) {
  XOGame game;
  XOGame *gp = &game;
  initGame(gp);

  // Correct initial turn.
  CuAssertIntEquals(test, game.turn, TURN_X);

  // Advance turn, correct turn.
  advanceTurn(gp);
  CuAssertIntEquals(test, game.turn, TURN_O);

  // Advance turn, correct turn.
  advanceTurn(gp);
  CuAssertIntEquals(test, game.turn, TURN_X);
}
