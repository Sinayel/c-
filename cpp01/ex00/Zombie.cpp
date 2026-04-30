#include "Zombie.hpp"

Zombie::Zombie() : _name("") {}

Zombie::Zombie(std::string name) : _name(name) {}

Zombie::~Zombie() {}

void Zombie::announce(void)const{
    std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}