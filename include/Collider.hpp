#include <iostream>
#include "GameTypes.hpp"

#pragma once

class Collider{
public:

    Collider();
    std::string color;
    Vector2F position;
    bool moveable;

    virtual ~Collider() = default;
};
