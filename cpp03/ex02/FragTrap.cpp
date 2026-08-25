#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    _hitPoints = 100;
    _energyPoints = 100;
    _attackDamage = 30;
    std::cout << "FragTrap " << _name << " has entered the battlefield!" << std::endl;
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap " << _name << " has left the battlefield!" << std::endl;
}

void FragTrap::attack(std::string const & target)
{
    if (_energyPoints > 0)
    {
        _energyPoints--;
        std::cout << "FragTrap " << _name << " attacks " << target
                  << ", causing " << _attackDamage << " points of damage!"
                  << " (Remaining Energy: " << _energyPoints << ")" << std::endl;
    }
    else
        std::cout << "FragTrap " << _name << " has no energy left to attack!" << std::endl;
}

void FragTrap::highFivesGuys(void)
{
    std::cout << "FragTrap " << _name << " requests a high five!" << std::endl;
}
