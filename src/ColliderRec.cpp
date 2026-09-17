#include "ColliderRec.hpp"

ColliderRec::ColliderRec(Vector2F dimensions){

    this->geometryBody.solidInfo.solid_type = "rectangle";
    this->geometryBody.solidInfo.rec_border = dimensions;
    this->geometryBody.solidInfo.radius = 0;
}

int ColliderRec::change_dimensions(Vector2F dimensions){
    this->geometryBody.solidInfo.rec_border = dimensions;
}
ColliderRec::~ColliderRec(){

}
