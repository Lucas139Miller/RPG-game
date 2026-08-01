#include <iostream>
#pragma once

class KeyState{
private:
    bool a,s,d,w,q,e,space;
public:
    KeyState();
    bool check(std::string key);
    int change(std::string key, bool value);
};
