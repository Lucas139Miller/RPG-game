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
        Vector2F position;
        float rotation, size;
        bool reflected;

        Transform();
    };
    struct PhysicsBody{         //responsible for storage all physics attributes about the body
        Vector2F velocity, aceleration;
        bool on_ground;

        PhysicsBody();
    };

    Collider collider;
    Abilities abilities;
    DynamicStates dynamicStates;
    Transform transform;
    PhysicsBody physics;

    std::string name;

    Entity();
    virtual ~Entity() = default;
    virtual int change_state() = 0;
    int update();
    std::string get_id();
};

