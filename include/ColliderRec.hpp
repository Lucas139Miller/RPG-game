#include "Collider.hpp"
#include "GameTypes.hpp"
#include "Geometry.hpp"

#pragma once

class ColliderRec : public Collider{
public:

    Geometry geometryBody;

    ColliderRec(Vector2F dimensions);
    int change_dimensions(Vector2F dimensions);
    ~ColliderRec();
};
