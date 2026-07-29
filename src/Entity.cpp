#include "Entity.hpp"


Entity::Entity(){
    this->name = "";
    this->on_ground = false;
    this->pos_x = 0;
    this->pos_y = 0;
    std::cout << "Entituy created!" << std::endl;
}

//IDENTIFICATION**********************************

std::string Entity::get_id(){
    return this->id;
}
