#include <KeyState.hpp>

KeyState::KeyState(){
    this->a = false;
    this->s = false;
    this->d = false;
    this->w = false;
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
    }else if(key == "space"){
        return this->space;
    }

    std::cout << "Tecla não encontrada!\n";
    return false;
}
int KeyState::change(std::string key, int value){
    if(key != "a" && key != "s" && key != "d" && key != "w" && key != "space"){
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
    }else if(key == "space"){
        this->space= value;
    }

    return 1;
}
