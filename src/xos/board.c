#include "xos/board.h"

#include <assert.h>
#include <stddef.h>

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

bool makePlay(XOGame *game, unsigned int x, unsigned int y) {
  // Check that the tile is empty.
  if (game->tiles[y][x] != TILE_NONE)
    return false;

  // Update the selected tile.
  switch (game->turn) {
  case TURN_X: {
    game->tiles[y][x] = TILE_X;
    break;
  }
  case TURN_O: {
    game->tiles[y][x] = TILE_O;
    break;
  }
  default: {
    assert(false && "Bad turn value in makePlay.");
    return false;
  }
  }

  return true;
}
