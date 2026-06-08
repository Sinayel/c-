#include "Zombie.hpp"

Zombie::Zombie() {
    this->_name = "";
}

Zombie::Zombie(std::string name) {
    this->_name = name;
}

Zombie::~Zombie() {
    std::cout << _name << " destroyed" << std::endl;
}

void Zombie::announce(void)const{
    std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}