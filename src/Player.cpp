#include "Player.hpp"

Player::Player(){
    this->abilities.can_jump = true;
    this->abilities.max_jumps = 4;
    this->abilities.jump_boost = 1.0;
    this->abilities.air_jump_boost = 1.0;
    this->dynamicStates.has_jumped = false;
    this->state = PlayerState::idle;
    this->health = 0;
    this->max_health = 0;
    this->xp = 0;


    //this->dynamicStates.last_jump = false;
}

int Player::change_state(){

    if(this->physics.on_ground){
        if(this->physics.velocity.x == 0.0){
            this->state = PlayerState::idle;
            std::cout << "IDLE\n";
            return 1;
        }else{
            this->state = PlayerState::walking;
            std::cout << "WALKING\n";
            return 1;
        }
    }else{//not on ground
        if(this->physics.velocity.y < 0){
            this->state = PlayerState::jumping;
            std::cout << "JUMPING\n";
            return 1;
        }else{
            this->state = PlayerState::falling;
            std::cout << "FALLING\n";
            return 1;
        }
    }
return 0;
}
