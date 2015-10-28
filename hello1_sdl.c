/**
 * hello1_sdl.c - Initializes SDL
 */

#include <stdio.h>
#include <SDL2/SDL.h>

int main(void)
{
    // attempt to initialize graphics system
    if (SDL_Init(SDL_INIT_VIDEO) != 0)
    {
        printf("error initializing SDL: %s\n", SDL_GetError());
        return 1;
    }

    printf("initialization successful!\n");

    // clean up resources before exiting
    SDL_Quit();
}
