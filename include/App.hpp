#include <iostream>
#include <SDL.h>
#pragma once

class App{
private:
    SDL_Surface* winSurface;
	SDL_Window* window;
public:
    App();
    int initialize();
    int Run();
};


