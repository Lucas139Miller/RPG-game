#include <iostream>
#include "Collider.hpp"
#include "GameTypes.hpp"

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
    int update();
    std::string get_id();
};
