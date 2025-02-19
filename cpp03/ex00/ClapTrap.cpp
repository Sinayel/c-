#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name) : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
    std::cout << "ClapTrap " << _name << " is born!" << std::endl;
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap " << _name << " is dead!" << std::endl;
}

void ClapTrap::attack(std::string const & target)
{
    if (_energyPoints > 0)
    {
        _energyPoints--;
        std::cout << "ClapTrap " << _name << " attacks " << target << ", causing " << _attackDamage << " points of damage! (Remaining Energy: " << _energyPoints << ")" << std::endl;
    }
    else
        std::cout << "ClapTrap " << _name << " has no energy left to attack!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (amount >= _hitPoints) 
        _hitPoints = 0;
    else 
        _hitPoints -= amount;

    std::cout << "ClapTrap " << _name << " takes " << amount << " points of damage! (Remaining HP: " << _hitPoints << ")" << std::endl;
}


void ClapTrap::beRepaired(unsigned int amount)
{
    _hitPoints += amount;
    std::cout << "ClapTrap " << _name << " is repaired for " << amount << " points! (Current HP: " << _hitPoints << ")" << std::endl;
}
