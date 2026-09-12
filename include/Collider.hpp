#include <iostream>
#include <array>
#include "GameTypes.hpp"
//#include "ColliderRec.hpp"

#pragma once

class Collider{
public:

    Collider();
    std::string color;
    Coordinates position;
    bool moveable;
    Rectangle box;
    //Collision collision;

    //bool colliding(std::string face, float coord);
    //virtual Coordinates is_inside(ColliderRec rec_box) = 0;

    virtual ~Collider() = default;
};
