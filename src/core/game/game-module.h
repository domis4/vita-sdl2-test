#pragma once
#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#include <iostream>
#include <cstdio>

class Game {
    private:
        int SCREEN_WIDTH;
        int SCREEN_HEIGHT;
        SDL_Window* gWindow;
        SDL_Renderer* gRenderer;
        SDL_Rect rectangle;
        SDL_Texture* texture;
    public:
        Game(int width, int height) : SCREEN_WIDTH(width), SCREEN_HEIGHT(height) {};
        int init();
        void render();
        SDL_Texture* loadTexture(std::string path);
        int getWidth(void) { 
            return SCREEN_WIDTH;
        };
        int getHeight(void) {
            return SCREEN_HEIGHT;
        }
};