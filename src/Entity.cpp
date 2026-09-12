#include "Entity.hpp"


Entity::Entity(){
    /*this->state = PlayerState::idle;
    std::cout << "IDLE\n";*/
    this->name = "";
    this->physics.on_ground = false;
    this->direction = "right";
    this->transform.position.x = 0;
    this->transform.position.y = 0;
    this->physics.velocity.x = 0;
    this->physics.velocity.y = 0;
    this->physics.aceleration.y = 0;
    this->physics.aceleration.y = 0;
    std::cout << "Entity created!" << std::endl;
}

//IDENTIFICATION**********************************

std::string Entity::get_id(){
    return this->id;
}

int Entity::update(){

    std::cout << "ACELERAÇÃO PARA BAIXO: " << this->physics.aceleration.y << "\n";

    if(!(this->physics.on_ground)){
        this->physics.aceleration.y = gvt;
        //std::cout << "No ar!\n";
        //std::cout << gvt << std::endl;
    }else{
        this->physics.aceleration.y = 0;
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

    this->transform.position.x+=this->physics.velocity.x;
    this->physics.velocity.y +=this->physics.aceleration.y;
    this->transform.position.y+=this->physics.velocity.y;

    std::cout << "Pulos restantes: " << this-> dynamicStates.available_jumps << "\n";
    std::cout << "Pulou : " << this-> dynamicStates.has_jumped << "\n";
    std::cout << "Vel X: " << this->physics.velocity.x << std::endl;

    //this->dynamicStates.last_jump = this->dynamicStates.has_jumped;

    this->change_state();
    return 1;
}
/*
Entity::~Entity(){

}
*/
