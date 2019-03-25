#include <xos/board.h>
#include "xos/board.h"

void initGame(XOGame *game) {

}

bool playPosition(XOGame *game, unsigned int xPos, unsigned int yPos, Tile tile) {
  game->tiles[yPos][xPos] = tile;
}
