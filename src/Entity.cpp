#include "Entity.hpp"

Entity::Entity(){
std::cout << "Entituy created!" << std::endl;
}

//IDENTIFICATION**********************************

std::string Entity::get_id(){
    return this->id;
}
std::string Entity::get_name(){
    return this->name;
}

int Entity::change_name(std::string value){
    this->name = value;
    return 1;
}

//MOVEMENT****************************************

float Entity::get_pos_x(){
    return this->pos_x;
}
float Entity::get_pos_y(){
    return this->pos_y;
}
float Entity::get_vel_x(){
    return this->vel_x;
}
float Entity::get_vel_y(){
    return this->vel_y;
}
float Entity::get_ac_x(){
    return this->ac_x;
}
float Entity::get_ac_y(){
    return this->ac_y;
}

int Entity::change_pos_x(float value){
    this->pos_x = value;
    return 1;
}
int Entity::change_pos_y(float value){
    this->pos_y = value;
    return 1;
}
int Entity::change_vel_x(float value){
    this->vel_x = value;
    return 1;
}
int Entity::change_vel_y(float value){
    this->vel_y = value;
    return 1;
}
int Entity::change_ac_x(float value){
    this->ac_x = value;
    return 1;
}
int Entity::change_ac_y(float value){
    this->ac_y = value;
    return 1;
}
