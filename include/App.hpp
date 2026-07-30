#include <iostream>
#include <SDL.h>
#include "GameSettings.hpp"
#pragma once

class App{
private:
    SDL_Surface* winSurface;
	SDL_Window* window;
    GameSettings gameSettings;
public:
    App();
    int initialize(std::string window_name, int window_x, int window_y);
    int Run();
};
