#include <iostream>
#include "Entity.hpp"
#include "EntityStatus.hpp"
#include "GameTypes.hpp"

#pragma once

class Player: public Entity{
private:
    EntityStatus entityStatus;

public:
    Player();
};
