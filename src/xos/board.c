#include "xos/board.h"

#include <stddef.h>

void initGame(XOGame *game) {
  game->turn = TURN_X;

  for (size_t i = 0; i < 3; ++i) {
    for (size_t j = 0; j < 3; ++j) {
      game->tiles[i][j] = TILE_NONE;
    }
  }
}

bool playPosition(XOGame *game, unsigned int xPos, unsigned int yPos, Tile tile) {
  game->tiles[yPos][xPos] = tile;
}
