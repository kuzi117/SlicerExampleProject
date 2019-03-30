#include "xos/board.h"

#include <stddef.h>
#include <xos/board.h>

void initGame(XOGame *game) {
  // Init turn.
  game->turn = TURN_X;

  // Init tiles.
  for (size_t i = 0; i < 3; ++i) {
    for (size_t j = 0; j < 3; ++j) {
      game->tiles[i][j] = TILE_NONE;
    }
  }
}

void advanceTurn(XOGame *game) {
  // Toggle turn.
  game->turn = game->turn == TURN_X ? TURN_O : TURN_X;
}
