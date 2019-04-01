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

// Init game.
void initGame(XOGame *game);

// Advance the turn.
void advanceTurn(XOGame *game);

// Make a play.
bool makePlay(XOGame *game, unsigned int x, unsigned int y);

#endif // TOTEST_XOS_BOARD_H
