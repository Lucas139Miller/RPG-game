#include "Collider.hpp"

#pragma once

class ColliderRec : public Collider{
public:
    struct Collision{
        bool left;
        bool right;
        bool top;
        bool bottom;
    };
    //Coordinates is_inside(ColliderRec rec_box);
};
