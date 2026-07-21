#include <iostream>
#pragma once

class Entity{
private:
    std::string id, name;
    float pos_x, pos_y, vel_x, vel_y,
    ac_x, ac_y;
public:
    Entity();
    std::string get_id();
    std::string get_name();
    float get_pos_x();
    float get_pos_y();
    float get_vel_x();
    float get_vel_y();
    float get_ac_x();
    float get_ac_y();

    int change_name(std::string value);
    int change_pos_x(float value);
    int change_pos_y(float value);
    int change_vel_x(float value);
    int change_vel_y(float value);
    int change_ac_x(float value);
    int change_ac_y(float value);
};
