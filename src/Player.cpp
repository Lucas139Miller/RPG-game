#include "Player.hpp"

Player::Player(){
    this->name = "";
    this->health = 0;
    this->max_health= 0;
    this->xp = 0;
    //this->pos_x=0;
    //this->pos_y=0;
}
std::string Player::get_name(){
    return this->name;
}
float Player::get_health(){
    return this->health;
}
float Player::get_max_health(){
    return this->max_health;
}
float Player::get_xp(){
    return this->xp;
}

int Player::change_health(float value){
    this->health = value;
    return 1;
}
int Player::change_max_health(float value){
    this->max_health = value;
    return 1;
}
int Player::change_xp(float value){
    this->xp = value;
    return 1;
}
/*
float Player::get_pos_x(){
    return this->pos_x;
}
float Player::get_pos_y(){
    return this->pos_y;
}
*/
