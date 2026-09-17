#include <iostream>
#include "GameTypes.hpp"

#pragma once

class Geometry{

public:

  struct SolidInfo{
    std::string solid_type;   //describes shape of object
    Vector2F rec_border;      //desbribes height and width of rectangle or rectangle
    float radius;             //desbribes radius of circunference
  };
  Geometry();
  SolidInfo solidInfo;
  virtual ~Geometry() = default;
  //virtual SolidInfo get_shape(Vector2F position) = 0;
};
