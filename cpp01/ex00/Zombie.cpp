#include "Zombie.hpp"

Zombie::Zombie(){
    return ;
}

Zombie::Zombie(std::string name):_name(name){
    return ;
}

Zombie::~Zombie(){
    std::cout << "Zombie as been delete !" << std::endl;
    return ;
}

void Zombie::announce(void)const{
    std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}