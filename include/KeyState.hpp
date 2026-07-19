#include <iostream>
#pragma once

class KeyState{
private:
    bool a,s,d,w,space;
public:
    KeyState();
    bool check(std::string key);
    int change(std::string key, int value);
};
