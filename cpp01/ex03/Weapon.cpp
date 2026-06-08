#include "Weapon.hpp"

Weapon::Weapon() {}

Weapon::Weapon(std::string type) {
    this->_type = type;
}

Weapon::~Weapon() {}

void setType(std::string type) {
    this->_type = type;
}

std::string getType() {
    return this->_type;
}

