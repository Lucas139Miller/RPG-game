#include <iostream>

#include <App.hpp>
#include <SDL.h>

// You shouldn't really use this statement, but it's fine for small programs
using namespace std;

// You must include the command line parameters for your main function to be recognized by SDL
int main(int argc, char** args) {

    App app;

	// Pointers to our window and surface
	SDL_Surface* winSurface = NULL;
	SDL_Window* window = NULL;

	// Initialize SDL. SDL_Init will return -1 if it fails.
	if ( SDL_Init( SDL_INIT_EVERYTHING ) < 0 ) {
		cout << "Error initializing SDL: " << SDL_GetError() << endl;
		std::cin.get();
		// End the program
		return 1;
	}

	// Create our window
	window = SDL_CreateWindow( "Example", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, 1280, 720, SDL_WINDOW_SHOWN );

	// Make sure creating the window succeeded
	if ( !window ) {
		cout << "Error creating window: " << SDL_GetError()  << endl;
		std::cin.get();

		// End the program
		return 1;
	}

	// Get the surface from the window
	winSurface = SDL_GetWindowSurface( window );

	// Make sure getting the surface succeeded
	if ( !winSurface ) {
		cout << "Error getting surface: " << SDL_GetError() << endl;
		std::cin.get();
		// End the program
		return 1;
	}






	// Fill the window with a white rectangle
	SDL_FillRect( winSurface, NULL, SDL_MapRGB( winSurface->format, 255, 255, 255 ) );

    SDL_Rect rec;
    rec.x = 10;
    rec.y = 10;
    rec.w = 100;
    rec.h = 225;
    SDL_FillRect( winSurface, &rec, SDL_MapRGB( winSurface->format, 0,255,0));
	// Update the window display
	SDL_UpdateWindowSurface( window );

	// Wait
	std::cin.get();

	// Destroy the window. This will also destroy the surface
	SDL_DestroyWindow( window );

	// Quit SDL
	SDL_Quit();









	// End the program
	return 0;
}
