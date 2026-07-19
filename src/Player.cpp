#include <Player.hpp>
Player::Player(){
    this->name = "";
    this->health = 0;
    this->max_health= 0;
    this->xp = 0;
    this->pos_x=0;
    this->pos_y=0;
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
float Player::get_pos_x(){
    return this->pos_x;
}
float Player::get_pos_y(){
    return this->pos_y;
}
