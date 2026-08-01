#include "Entity.hpp"


Entity::Entity(){
    /*this->state = PlayerState::idle;
    std::cout << "IDLE\n";*/
    this->name = "";
    this->on_ground = false;
    this->direction = "right";
    this->pos_x = 0;
    this->pos_y = 0;
    this->vel_x = 0;
    this->vel_y = 0;
    this->ac_x = 0;
    this->ac_y = 0;
    std::cout << "Entituy created!" << std::endl;
}

//IDENTIFICATION**********************************

std::string Entity::get_id(){
    return this->id;
}

int Entity::update(){
    if(!(this->on_ground)){
        this->ac_y = gvt;
        std::cout << "No ar!\n";
        //std::cout << gvt << std::endl;
    }else{
        this->ac_y = 0;
        //this->vel_y = 0;
        std::cout << "No chão!\n";
    }
    this->vel_y +=this->ac_y;
    this->pos_y+=this->vel_y;

    //STATES
    /*if(this->on_ground){
        if(this->vel_x =0){
            this->state = PlayerState::idle;
            std::cout << "IDLE\n";
        }else{
            this->state = PlayerState::walking;
            std::cout << "WALKING\n";
        }
    }else{//not on ground
        if(this->vel_y < 0){
            this->state = PlayerState::falling;
            std::cout << "FALLING\n";
        }else{
            this->state = PlayerState::jumping;
            std::cout << "JUMPING\n";
        }
    }*/
    return 1;
}
