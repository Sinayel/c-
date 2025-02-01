#include <iostream>

class Weapon{
public:
    Weapon();
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