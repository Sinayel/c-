#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>
#include <string>

class Weapon{
public:
    Weapon();
    Weapon(std::string type);
    ~Weapon();
    std::string getType(){
        return this->_type;
    }
    void setType(std::string type){
        this->_type = type;
    }
private:
    std::string _type;
};

#endif