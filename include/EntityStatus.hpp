#include <iostream>
#pragma once

class EntityStatus{
private:
    float health, max_health, xp;
public:
    float get_health();
    float get_max_health();
    float get_xp();

    float change_health(float value);
    float change_max_health(float value);
    float change_xp(float value);
};
