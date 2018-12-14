#include <SDL.h>
#include <stdio.h>
#include <stdlib.h>
#include "linked_list.h"
//Screen dimension constants
const int SCREEN_WIDTH = 640;
const int SCREEN_HEIGHT = 480;

//Draws geometry on the canvas
void draw();

//Starts up SDL and creates window
int init();

//Frees media and shuts down SDL
void close();

//The window we'll be rendering to
SDL_Window* gWindow = NULL;

//The window renderer
SDL_Renderer* gRenderer = NULL;

int main( int argc, char* args[] )
{
    node_t* head = malloc(sizeof(node_t));
    head->value = 5;
    head->next = NULL;

    push_end_list(head,9);

    //Start up SDL and create window
    if( !init() )
    {
        printf("Failed to initialize!" );
        close();
        return -1;
    }

    //Main loop flag
    int quit = 0;

    //Event handler
    SDL_Event e;

    //While application is running
    while( !quit ) {
        //Handle events on queue
        while (SDL_PollEvent(&e) != 0) {
            //User requests quit
            if (e.type == SDL_QUIT) {
                quit = 1;
            }
        }


        //Clear screen
        SDL_SetRenderDrawColor(gRenderer, 0xFF, 0xFF, 0xFF, 0xFF);
        SDL_RenderClear(gRenderer);

        draw_linked_list(head, gRenderer);

        //Update screen
        SDL_RenderPresent(gRenderer);
    }

    //Free resources and close SDL
    close();

    return 0;
}
void draw()
{   int size = 100;
    SDL_SetRenderDrawColor(gRenderer, 0x00, 0xFF, 0x00, 0xFF);
    SDL_Rect rectToDraw = { SCREEN_WIDTH / 2 - size / 2, SCREEN_HEIGHT / 2 - size / 2, 100, 100};
    SDL_RenderDrawRect(gRenderer, &rectToDraw);
    // Draw a green 100x100 square to the canvas' center.
}
int init()
{
    //Initialize SDL
    if( SDL_Init( SDL_INIT_VIDEO ) < 0 )
    {
        printf("SDL could not initialize! SDL Error:  %s", SDL_GetError());
        return 0;
    }

    //Create window
    gWindow = SDL_CreateWindow( "Centered square", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, SCREEN_WIDTH, SCREEN_HEIGHT, SDL_WINDOW_SHOWN );
    if( gWindow == NULL)
    {
        printf("Window could not be created! SDL Error:  %s", SDL_GetError());
        return 0;
    }

    //Create renderer for window
    gRenderer = SDL_CreateRenderer( gWindow, -1, SDL_RENDERER_ACCELERATED );
    if( gRenderer == NULL)
    {
        printf("Renderer could not be created! SDL Error: %s", SDL_GetError());
        return 0;
    }

    //Initialize renderer color
    SDL_SetRenderDrawColor( gRenderer, 0xFF, 0xFF, 0xFF, 0xFF );

    return 1;
}
void close()
{
    //Destroy window
    SDL_DestroyRenderer( gRenderer );
    SDL_DestroyWindow( gWindow );
    gWindow = NULL;
    gRenderer = NULL;

    SDL_Quit();
}
