#include "Entity.hpp"


Entity::Entity(){
    this->name = "";
    this->on_ground = false;
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
    return 1;
}
