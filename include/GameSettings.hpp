#include <iostream>
#include "GameTypes.hpp"
#pragma once

class GameSettings{
private:
    GameState current_state;
public:
    GameSettings();

    GameState get_current_state();
    int set_current_state(GameState state);
};
