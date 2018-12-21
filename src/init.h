#ifndef INIT_H
#define INIT_H

#include <SDL.h>

static const int SCREEN_WIDTH = 1280;
static const int SCREEN_HEIGHT = 720;

SDL_Window* window;
SDL_Surface* screenSurface;

void initWindow(void);

#endif