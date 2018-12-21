#include "draw.h"

SDL_Surface* loadBMP(const char* file){
    SDL_Surface* surface = SDL_LoadBMP(file);

    if(surface == NULL){
        printf("Unable to load media: %s", file);
        return NULL;
    }

    return surface;
}