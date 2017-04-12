#include <psp2/kernel/processmgr.h>
#include <SDL2/SDL.h>
#include "core/game/game-module.h"

int main(int argc, char *argv[]) {
  Game game(960, 544);
  
  if (game.init() == -1) {
    return -1;
  }

  while(1) {
     game.render();
  }

  return 0;
}
