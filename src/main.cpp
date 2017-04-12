#include <psp2/kernel/processmgr.h>
#include <SDL2/SDL.h>
#include "game-module.h"

int main(int argc, char *argv[]) {
  Game game(960, 544);
  game.init();
  while(1) {
     game.render();
  }

  return 0;
}
