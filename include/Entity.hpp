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
    struct Transform{           //responsible for global movimentation, size and rotation
        Coordinates position;
        float rotation, size;
        bool reflected;
    };

    Collider collider;
    Abilities abilities;
    DynamicStates dynamicStates;
    Transform transform;

    std::string name;
    std::string direction;
    float vel_x, vel_y,
    ac_x, ac_y;
    bool on_ground;

    Entity();
    virtual ~Entity() = default;
    virtual int change_state() = 0;
    int update();
    std::string get_id();
};

