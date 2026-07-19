#include <iostream>
#include "EntityStatus.hpp"
#pragma once

class Entity{
private:
    int id;
    float pos_x, pos_y, vel_x, vel_y,
    ac_x, ac_y;
    EntityStatus Status;
public:
    Entity();
    int get_id();

    float get_health();
    float get_max_health();
    float get_xp();

    int change_health(float value);
    int change_max_health(float value);
    int change_xp(float value);

    float get_pos_x();
    float get_pos_y();
    float get_vel_x();
    float get_vel_y();
    float get_ac_x();
    float get_ac_y();

    int change_pos_x(int value);
    int change_pos_y(int value);
    int change_vel_x(int value);
    int change_vel_y(int value);
    int change_ac_x(int value);
    int change_ac_y(int value);
};
