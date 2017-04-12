#include "game-module.h"

int Game::init() {
  gWindow   = NULL;
  gRenderer = NULL;
  rectangle = { 
    getWidth()  / 4, 
    getHeight() / 4, 
    getWidth()  / 2, 
    getHeight() / 2 
  };

  if( SDL_Init( SDL_INIT_VIDEO ) < 0 )
    return -1;

  if ((gWindow = SDL_CreateWindow( "RedRectangle", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, 960, 544, SDL_WINDOW_SHOWN)) == NULL)
    return -1;

  if ((gRenderer = SDL_CreateRenderer( gWindow, -1, 0)) == NULL)
    return -1;
}

void Game::render() {
  SDL_SetRenderDrawColor( gRenderer, 255,0,0,255);
  SDL_RenderFillRect( gRenderer, &rectangle );
  SDL_RenderPresent( gRenderer ); 
}