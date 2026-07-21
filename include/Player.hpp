#include <iostream>
#include "Entity.hpp"
#include "EntityStatus.hpp"

#pragma once

class Player{
private:
    Entity entity;
    EntityStatus entityStatus;

public:
    Player();
    std::string get_name();
    std::string get_id();
    float get_health();
    float get_max_health();
    float get_xp();

    int change_name(std::string value);
    int change_health(float value);
    int change_max_health(float value);
    int change_xp(float value);


    float get_pos_x();
    float get_pos_y();

    int set_pos_x(float value);
    int set_pos_y(float value);
    int add_pos_x(float value);
    int add_pos_y(float value);
};
