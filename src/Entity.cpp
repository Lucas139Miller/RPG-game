#include "Entity.hpp"


Entity::~Entity(){
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
    std::cout << "Entity created!" << std::endl;
}

//IDENTIFICATION**********************************

std::string Entity::get_id(){
    return this->id;
}

int Entity::update(){

    std::cout << "ACELERAÇÃO PARA BAIXO: " << this->ac_y << "\n";

    if(!(this->on_ground)){
        this->ac_y = gvt;
        //std::cout << "No ar!\n";
        //std::cout << gvt << std::endl;
    }else{
        this->ac_y = 0;
        this->dynamicStates.available_jumps = this->abilities.max_jumps;
        //std::cout << "No chão!\n";
        //std::cout << "Pulos restantes: " << this-> dynamicStates.available_jumps << "\n";
    }
/*
    if(this->dynamicStates.has_jumped && !this->dynamicStates.last_jump){
        this->ac_y = 0;
        std::cout << "did!\n";
    }

    std::cout << "Atual: " << this->dynamicStates.has_jumped <<
    "Novo: " << this->dynamicStates.last_jump  << "\n";
*/

    this->pos_x+=this->vel_x;
    this->vel_y +=this->ac_y;
    this->pos_y+=this->vel_y;

    std::cout << "Pulos restantes: " << this-> dynamicStates.available_jumps << "\n";
    std::cout << "Pulou : " << this-> dynamicStates.has_jumped << "\n";
    std::cout << "Vel X: " << this->vel_x << std::endl;

    //this->dynamicStates.last_jump = this->dynamicStates.has_jumped;

    this->change_state();
    return 1;
}
