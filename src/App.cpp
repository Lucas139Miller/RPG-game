#include <string>

#include "App.hpp"
#include "KeyState.hpp"
#include "Player.hpp"
#include "GameSettings.hpp"


App::App(): winSurface(NULL), window(NULL){
    std::cout << "App constructor!\n";
}
int App::initialize(std::string window_name, int window_x, int window_y){
// Initialize SDL. SDL_Init will return -1 if it fails.
	if ( SDL_Init( SDL_INIT_EVERYTHING ) < 0 ) {
		std::cout << "Error initializing SDL: " << SDL_GetError() << std::endl;
		// End the program
		return 1;
	}

	window = SDL_CreateWindow( window_name.c_str(), SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, window_x, window_y, SDL_WINDOW_SHOWN );
	if ( !window ) {
		std::cout << "Error creating window: " << SDL_GetError()  << std::endl;
		// End the program
		return 1;
	}
	return 0;
}

int App::Run(){
	winSurface = SDL_GetWindowSurface( window );

	if ( !winSurface ) {
		std::cout << "Error getting surface: " << SDL_GetError() << std::endl;
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

        SDL_Delay(16.67);
    }

	SDL_DestroyWindow( window );
	// Quit SDL
	SDL_Quit();
	return 1;
}
