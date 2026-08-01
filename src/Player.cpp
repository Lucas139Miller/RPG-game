#include "Player.hpp"

Player::Player(){
    this->state = PlayerState::idle;
    this->health = 0;
    this->max_health = 0;
    this->xp = 0;
}
