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
  texture = loadTexture("ux0:domis4/assets/test.png");
  
  SDL_Init(SDL_INIT_TIMER | SDL_INIT_VIDEO);
  gWindow = SDL_CreateWindow("SDLTest", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, 960, 544, SDL_WINDOW_SHOWN);
  gRenderer = SDL_CreateRenderer(gWindow, -1, 0);
  return 0;
}

void Game::render() {
  SDL_RenderClear(gRenderer);
  SDL_RenderCopy(gRenderer, texture, NULL, NULL);
  SDL_RenderPresent(gRenderer);
}

SDL_Texture* Game::loadTexture(std::string path) {
  using namespace std;
  SDL_Texture* image = IMG_LoadTexture(gRenderer, path.c_str());
  
  if(!image) {
    freopen( "ux0:domis4/log.txt", "w", stdout );
    cout << "> Game::loadTexture tried loading file " + std::string(path) << endl;
    cout << "IMG_Load: " + std::string(IMG_GetError()) << endl;
  }

  return texture;
}
