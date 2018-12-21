#include <SDL.h>
#include <stdio.h>

#include "init.h"
#include "input.h"
#include "draw.h"

void close(void);

int main(int argc, char* args[]){
    initWindow();

    SDL_Surface* image = loadBMP("image.bdp");


    SDL_FillRect(screenSurface, NULL, SDL_MapRGB(screenSurface->format, 0x0, 0x0, 0x0));

    SDL_BlitSurface(image, NULL, screenSurface, NULL);

    while(1){
        getInput();



        SDL_UpdateWindowSurface(window);
        SDL_Delay(16);  
    }

    

    SDL_FreeSurface(image);
    image = NULL;

    SDL_DestroyWindow(window);
    window = NULL;

    SDL_Quit();

    return 0;
}

void close(void){

}