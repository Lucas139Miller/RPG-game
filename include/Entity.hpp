#include <iostream>
#pragma once

class Entity{
private:
    std::string id;
public:
    std::string name;
    float pos_x, pos_y, vel_x, vel_y,
    ac_x, ac_y;

    Entity();
    std::string get_id();
};
