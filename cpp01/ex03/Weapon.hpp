#include <iostream>

class Weapon{
public:
    Weapon();
    ~Weapon();
    std::string Weapon::getType(){
        return this->_type;
    }
    void Weapon::setType(std::string type){
        this->_type = type;
    }
private:
    std::string _type;
};