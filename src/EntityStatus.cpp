#include "EntityStatus.hpp"

float EntityStatus::get_health(){
    return this->health;
}
float EntityStatus::get_max_health(){
    return this->max_health;
}
float EntityStatus::get_xp(){
    return this->xp;
}

int EntityStatus::change_health(float value){
    this->health = value;
    return 1;
}
int EntityStatus::change_max_health(float value){
    this->max_health = value;
    return 1;
}
int EntityStatus::change_xp(float value){
    this->xp = value;
    return 1;
}
