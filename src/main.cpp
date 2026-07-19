#include <iostream>

#include "App.hpp"
#include "KeyState.hpp"
#include "Player.hpp"
#include "GameSettings.hpp"
#include "Entity.hpp"
#include "EntityStatus.hpp"

#include <SDL.h>

// You shouldn't really use this statement, but it's fine for small programs
using namespace std;

// You must include the command line parameters for your main function to be recognized by SDL
int main(int argc, char** args) {

    App App;
    KeyState keyState;
    Player Player;
    GameSettings Settings;

	// Pointers to our window and surface
	SDL_Surface* winSurface = NULL;
	SDL_Window* window = NULL;

	// Initialize SDL. SDL_Init will return -1 if it fails.
	if ( SDL_Init( SDL_INIT_EVERYTHING ) < 0 ) {
		cout << "Error initializing SDL: " << SDL_GetError() << endl;
		// End the program
		return 1;
	}

	// Create our window
	window = SDL_CreateWindow( "RPG game -.-", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, 1280, 720, SDL_WINDOW_SHOWN );

	// Make sure creating the window succeeded
	if ( !window ) {
		cout << "Error creating window: " << SDL_GetError()  << endl;

		// End the program
		return 1;
	}

	// Get the surface from the window
	winSurface = SDL_GetWindowSurface( window );

	// Make sure getting the surface succeeded
	if ( !winSurface ) {
		cout << "Error getting surface: " << SDL_GetError() << endl;
		// End the program
		return 1;
	}


	SDL_Event ev;
    bool running = true;

    int x,y,w,h;
    x= 10;
    y= 10;
    w = 100;
    h = 255;

	//RUNNIG LOOP **************************************************************
    while(running){
        // Event loop **************************************************************

        while ( SDL_PollEvent( &ev ) != 0 ) {
            // Events
            switch(ev.type){
                case SDL_QUIT:
                    return false;
                case SDL_KEYDOWN:
                    switch(ev.key.keysym.sym){
                        case SDLK_a:
                            x-=10;
                            break;
                        case SDLK_d:
                            x+=10;
                            break;
                    }
                break;
            }
        }

        // Fill the window with a white rectangle
        SDL_FillRect( winSurface, NULL, SDL_MapRGB( winSurface->format, 255, 255, 255 ) );

        SDL_Rect rec;
        rec.x = x;
        rec.y = y;
        rec.w = w;
        rec.h = h;
        SDL_FillRect( winSurface, &rec, SDL_MapRGB( winSurface->format, 0,255,0));
        // Update the window display
        SDL_UpdateWindowSurface( window );


        // Wait before next frame
        SDL_Delay(10);
    }


	// Destroy the window. This will also destroy the surface
	SDL_DestroyWindow( window );

	// Quit SDL
	SDL_Quit();

	// End the program
	return 0;
}
