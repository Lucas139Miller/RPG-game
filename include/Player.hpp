#include <iostream>
#pragma once

class Player{
private:
    std::string name;
    float health, max_health, xp, pos_x, pos_y;
public:
    Player();
    std::string get_name();
    float get_health();
    float get_max_health();
    float get_xp();
    float get_pos_x();
    float get_pos_y();
};
