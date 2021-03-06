#include "xos/xos.h"

#include "xos/board.h"

#include "stdio.h"

void playXOs() {
  // Init game.
  XOGame game;
  XOGame *gp = &game;
  initGame(gp);

  // Make move.
  unsigned int x, y;
  for (size_t i = 0; i < 9; ++i) {
    scanf("%d %d", &x, &y);
    advanceTurn(gp);
  }
}
