#include <iostream>

#include "Entity.hpp"

#pragma once

class LivingEntity : public Entity{
private:
public:
    float health, max_health, xp;
};
