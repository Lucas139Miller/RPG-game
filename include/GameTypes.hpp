#include <iostream>
#pragma once

enum class GameState : unsigned char{
        Uninitialized,                      //unitial state
        Boot,                               //screen before start the game
        MainMenu,                           //main menu of game
        Loading,                            //screen when loading stage resources
        Active,                             //when in middle of game or stage
        Paused,                             //when game is freezed on pause
        GameOver,                           //defeated screen
        Cinematic,                          //cutscene
        IntroCutscene                       //initial cutscene that cannot be paused
};

struct Coordinates{
    float x;
    float y;
};
struct Rectangle{
    float x;
    float y;
};
