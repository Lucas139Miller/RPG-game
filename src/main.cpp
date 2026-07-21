#include <iostream>
#include "App.hpp"

#include <SDL.h>

int main(int argc, char** args) {

    App App;

    if(!App.initialize("My game", 1280, 720)){
        App.Run();
    }

	// End the program
	return 0;
}
