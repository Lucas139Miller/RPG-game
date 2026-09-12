#include "Collider.hpp"

Collider::Collider(){
    //PRE DEFINITION
    this->position.x = 0;
    this->position.y = 0;
    this->color = "#00ff00";    //green
    /*
    this->collision.left = false;
    this->collision.right = false;
    this->collision.top = false;
    this->collision.bottom = false;
    */


    this->box.x = 0;
    this->box.y = 0;
}
/*
bool Collider::colliding(std::string face, float coord){
    if(face == "left"){
        if(coord){

        }
    }else if(face == "right"){

    }else if(face == "top"){

    }else if(face == "bottom"){

    }

    std::cout << "Invalid object face\n";
    return false;
}
*/
