#include "init.h"

void initWindow(void){
    if(SDL_Init(SDL_INIT_VIDEO) < 0){
        printf("Could not init: %s\n", SDL_GetError());
        exit(1);
    }

    window = SDL_CreateWindow("SDL Test", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, SCREEN_WIDTH, SCREEN_HEIGHT, SDL_WINDOW_SHOWN);
    if(window == NULL){
        printf("Could not make window: %s\n", SDL_GetError());
        exit(1);
    }

    screenSurface = SDL_GetWindowSurface(window);
}