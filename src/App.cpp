#include <string>

#include "App.hpp"
#include "KeyState.hpp"
#include "Player.hpp"
#include "GameSettings.hpp"
#include "GameTypes.hpp"

/*************************
 * Don't forget to use Scene class
 * for controling the game
 * **********************/

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

    Player player;
    int x,y,w,h;
    x= 10;
    y= 10;
    w = 100;
    h = 255;

    player.collider.box.x = w;
    player.collider.box.y = h;
    player.pos_x = x+ player.collider.box.x;
    player.pos_y = y+ player.collider.box.y;

    this->gameSettings.set_current_state(GameState::Active);

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
                            player.pos_x-=10;
                            break;
                        case SDLK_d:
                            player.pos_x+=10;
                            break;
                        case SDLK_w:
                            player.on_ground = false;
                            player.vel_y-=30;
                        break;
                    }
                break;
            }
        }



        //Background
        SDL_FillRect( winSurface, NULL, SDL_MapRGB( winSurface->format, 255, 255, 255 ) );


        //Player box
        SDL_Rect rec;

        //SCENARIO*****************************************************************
        //this->gameSettings.get_current_state();
        if(this->gameSettings.get_current_state() == GameState::Active){
            std::cout << "DENTRO\n";
            std::cout << "x: " << player.pos_x << "\ny: " << player.pos_y
            << std::endl;
            //visual hitbox
            player.collider.position.x = player.pos_x - player.collider.box.x;
            player.collider.position.y = player.pos_y - player.collider.box.y;

            //Player box
            rec.x = player.pos_x;
            rec.y = player.pos_y;
            rec.w = player.collider.box.x;
            rec.h = player.collider.box.y;
            SDL_FillRect( winSurface, &rec, SDL_MapRGB( winSurface->format, 0,255,0));

            if(player.pos_y<= 680- player.collider.box.y){
                player.on_ground = true;
            }
            if(player.pos_y > 680- player.collider.box.y){
                player.on_ground = false;
                player.pos_y = 680- player.collider.box.y;
            }
        }

        //Ground
        SDL_Rect recg;
        recg.x = 0;
        recg.y = 680;
        recg.w = 1280;
        recg.h = 30;
        SDL_FillRect( winSurface, &recg, SDL_MapRGB( winSurface->format, 0,0,0));

        player.update();

        // Update the window display
        SDL_UpdateWindowSurface( window );
        SDL_Delay(16.67);
    }

	SDL_DestroyWindow( window );
	// Quit SDL
	SDL_Quit();
	return 1;
}
