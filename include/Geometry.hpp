#include <iostream>
#include "GameTypes.hpp"

#pragma once

class Geometry{

  virtual float distance(Vector2F position) = 0;
};
