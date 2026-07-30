#include "GameSettings.hpp"

GameSettings::GameSettings(): current_state(GameState::Uninitialized){
    std::cout << "Initial configurations were done\n";
}

GameState GameSettings::get_current_state(){
    switch (this->current_state) {
        case GameState::Uninitialized: std::cout <<  "Uninitialized" << std::endl;break;
        case GameState::Boot: std::cout <<  "Boot"<< std::endl;break;
        case GameState::MainMenu: std::cout <<  "MainMenu"<< std::endl;break;
        case GameState::Loading: std::cout <<  "Loading"<< std::endl;break;
        case GameState::Active: std::cout <<  "Active"<< std::endl;break;
        case GameState::Paused: std::cout <<  "Paused"<< std::endl;break;
        case GameState::GameOver: std::cout <<  "GameOver"<< std::endl;break;
        case GameState::Cinematic: std::cout <<  "Cinematic"<< std::endl;break;
        case GameState::IntroCutscene: std::cout <<  "IntroCutscene"<< std::endl;break;
    }
    return this-> current_state;
}
int GameSettings::set_current_state(GameState state){
    this->current_state = state;
    return 1;
}
