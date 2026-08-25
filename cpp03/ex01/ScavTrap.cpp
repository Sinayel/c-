#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name) {
    _hitPoints = 100;
    _energyPoints = 50;
    _attackDamage = 20;
    std::cout << "ScavTrap " << _name << " has entered the battlefield!" << std::endl;
}

ScavTrap::~ScavTrap() {
    std::cout << "ScavTrap " << _name << " has left the battlefield!" << std::endl;
}

void ScavTrap::attack(const std::string& target) {
    if (_energyPoints > 0)
    {
        _energyPoints--;
        std::cout << "ScavTrap " << _name << " attacks " << target
                  << ", causing " << _attackDamage << " points of damage!"
                  << " (Remaining Energy: " << _energyPoints << ")" << std::endl;
    }
    else
        std::cout << "ScavTrap " << _name << " has no energy left to attack!" << std::endl;
}

void ScavTrap::guardGate() {
    std::cout << "ScavTrap " << _name << " is now in Gatekeeper mode!" << std::endl;
}
