#include "Player.hpp"

Player::Player(){
    this->state = PlayerState::idle;
    this->health = 0;
    this->max_health = 0;
    this->xp = 0;
}

int Player::change_state(){

    if(this->on_ground){
        if(this->vel_x == 0.0){
            this->state = PlayerState::idle;
            std::cout << "IDLE\n";
            return 1;
        }else{
            this->state = PlayerState::walking;
            std::cout << "WALKING\n";
            return 1;
        }
    }else{//not on ground
        if(this->vel_y < 0){
            this->state = PlayerState::falling;
            std::cout << "FALLING\n";
            return 1;
        }else{
            this->state = PlayerState::jumping;
            std::cout << "JUMPING\n";
            return 1;
        }
    }
return 0;
}
