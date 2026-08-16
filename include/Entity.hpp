#include <iostream>
#include "Collider.hpp"
#include "GameTypes.hpp"

#pragma once

class Entity{
private:
    std::string id;
public:
    struct Abilities{
        bool can_jump;          //is entity able to jump?
        int max_jumps;          //number of jumps entity is able to do
        float jump_boost;       //multiplier of jump height entity from ground
        float air_jump_boost;   //multiplier of jump height entity from air
    };
    struct DynamicStates{
        int available_jumps;    //number of remaining jumps
        bool has_jumped;        //storage if it initializated the jump and stopped the action
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

