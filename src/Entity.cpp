#include "Entity.hpp"

Entity::Entity(){

}
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

int Entity::change_pos_x(int value){
    this->pos_x = value;
    return 1;
}
int Entity::change_pos_y(int value){
    this->pos_y = value;
    return 1;
}
int Entity::change_vel_x(int value){
    this->vel_x = value;
    return 1;
}
int Entity::change_vel_y(int value){
    this->vel_y = value;
    return 1;
}
int Entity::change_ac_x(int value){
    this->ac_x = value;
    return 1;
}
int Entity::change_ac_y(int value){
    this->ac_y = value;
    return 1;
}
