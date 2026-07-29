#include <iostream>
#pragma once

/*************************
 * Class destinated for storage
 * the configuration of each stage of game,
 * like story, arena, etc..., allowing manage
 * what mechanics will be active on the moment
 * **********************/
class Scene{
public:
    virtual ~Scene(){
        virtual void update()=0;
    }
};
