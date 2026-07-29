#include "Entity.hpp"

Entity::Entity(){
std::cout << "Entituy created!" << std::endl;
}

//IDENTIFICATION**********************************

std::string Entity::get_id(){
    return this->id;
}
