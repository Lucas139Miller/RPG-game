#include <iostream>
#include "Collider.hpp"
#pragma once

class Entity{
private:
    std::string id;
public:
    Collider collider;
    std::string name;
    float pos_x, pos_y, vel_x, vel_y,
    ac_x, ac_y;
    float on_ground;

    Entity();
    std::string get_id();
};
