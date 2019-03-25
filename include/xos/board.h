#ifndef TOTEST_XOS_BOARD_H
#define TOTEST_XOS_BOARD_H

#include <stdbool.h>

typedef enum {
  TILE_NONE = 0,
  TILE_X,
  TILE_O,
  MAX_TILE_TYPE
} Tile;

typedef enum {
  TURN_X = false,
  TURN_O = true
} Turn;

typedef struct {
  Tile tiles[3][3];
  Turn turn;
} XOGame;

void initGame(XOGame *game);

#endif // TOTEST_XOS_BOARD_H
