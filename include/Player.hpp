#include <iostream>
#include "Entity.hpp"
#include "LivingEntity.hpp"
#include "GameTypes.hpp"

#pragma once

class Player: public LivingEntity{
private:
public:


    enum class PlayerState : unsigned char{
            idle,                       //when doing nothing
            walking,                    //when walking away
            dash,                       //when dashing
            jumpInit,                   //when preparing jump
            jumping,                    //when jumping
            falling,                    //when falling
    };

    PlayerState state;
    Player();

    int change_state() override;
};
