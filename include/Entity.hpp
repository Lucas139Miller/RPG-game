#include <iostream>
#include "Collider.hpp"
#include "GameTypes.hpp"

#pragma once

class Entity{
private:
    std::string id;
public:
    struct Abilities{
        bool can_jump;
        int max_jumps;
        float jump_boost;
        float air_jump_boost;
    };
    struct DynamicStates{
        int available_jumps;
        bool has_jumped;
        //bool last_jump;
    };

    Collider collider;
    Abilities abilities;
    DynamicStates dynamicStates;

    std::string name;
    std::string direction;
    float pos_x, pos_y, vel_x, vel_y,
    ac_x, ac_y;
    bool on_ground;

    virtual ~Entity();
    virtual int change_state() = 0;
    int update();
    std::string get_id();
};

