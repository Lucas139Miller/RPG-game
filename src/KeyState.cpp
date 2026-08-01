#include "KeyState.hpp"

KeyState::KeyState(){
    this->a = false;
    this->s = false;
    this->d = false;
    this->w = false;
    this->q = false;
    this->e = false;
    this->space = false;
};
bool KeyState::check(std::string key){
    if(key == "a"){
        return this->a;
    }else if(key == "s"){
        return this->s;
    }else if(key == "d"){
        return this->d;
    }else if(key == "w"){
        return this->w;
    }else if(key == "q"){
        return this->q;
    }else if(key == "e"){
        return this->e;
    }else if(key == "space"){
        return this->space;
    }

    std::cout << "Tecla não encontrada!\n";
    return false;
}
int KeyState::change(std::string key, bool value){
    if(key != "a" && key != "s" && key != "d" && key != "w" && key != "q" && key != "e" && key != "space"){
        std::cout << "Tecla não encontrada!\n";
        return 0;
    }
    if(key == "a"){
        this->a = value;
    }else if(key == "s"){
        this->s= value;
    }else if(key == "d"){
        this->d= value;
    }else if(key == "w"){
        this->w= value;
    }else if(key == "q"){
        this->q= value;
    }else if(key == "e"){
        this->e= value;
    }else if(key == "space"){
        this->space= value;
    }

    return 1;
}
