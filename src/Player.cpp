#include "Player.hpp"

Player::Player(){
    this->entity.change_name("");
    this->entityStatus.change_health(0);
    this->entityStatus.change_max_health(0);
    this->entityStatus.change_xp(0);
}

//STATUS******************************************
std::string Player::get_name(){
    return this->entity.get_name();
}
std::string Player::get_id(){
    return this->entity.get_id();
}
float Player::get_health(){
    return this->entityStatus.get_health();
}
float Player::get_max_health(){
    return this->entityStatus.get_max_health();
}
float Player::get_xp(){
    return this->entityStatus.get_xp();
}


int Player::change_name(std::string value){
    if(this->entity.change_name(value)){
        return 1;
    }
    return 0;
}
int Player::change_health(float value){
    if(this->entityStatus.change_health(value)){
        return 1;
    }
    return 0;
}
int Player::change_max_health(float value){
    if(this->entityStatus.change_max_health(value)){
        return 1;
    }
    return 0;
}
int Player::change_xp(float value){
    if(this->entityStatus.change_xp(value)){
        return 1;
    }
    return 0;
}

//MOVEMENT****************************************
float Player::get_pos_x(){
    return this->entity.get_pos_x();
}
float Player::get_pos_y(){
    return this->entity.get_pos_y();
}
int Player::set_pos_x(float value){
    if(this->entity.change_pos_x(value)){
        return 1;
    }
    return 0;
}
int Player::set_pos_y(float value){
    if(this->entity.change_pos_y(value)){
        return 1;
    }
    return 0;
}
int Player::add_pos_x(float value){
    if(this->entity.change_pos_x(this->entity.get_pos_x()+value)){
        return 1;
    }
    return 0;
}
int Player::add_pos_y(float value){
    if(this->entity.change_pos_y(this->entity.get_pos_y()+value)){
        return 1;
    }
    return 0;
}
