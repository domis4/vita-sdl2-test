#pragma once
#include <SDL2/SDL.h>

class Game {
    private:
        int SCREEN_WIDTH;
        int SCREEN_HEIGHT;
        SDL_Window * gWindow;
        SDL_Renderer * gRenderer;
        SDL_Rect rectangle;
    public:
        Game(int width, int height) : SCREEN_WIDTH(width), SCREEN_HEIGHT(height) {};
        int init();
        void render();
        int getWidth(void) { 
            return SCREEN_WIDTH;
        };
        int getHeight(void) {
            return SCREEN_HEIGHT;
        }
};