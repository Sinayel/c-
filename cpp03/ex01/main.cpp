#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
    std::cout << "=== Création d'un ClapTrap ===" << std::endl;
    ClapTrap claptrap("Clapii");
    claptrap.attack("Bandit");
    claptrap.takeDamage(5);
    claptrap.beRepaired(3);

    std::cout << "\n=== Création d'un ScavTrap ===" << std::endl;
    ScavTrap scavtrap("Scavv");
    scavtrap.attack("Raider");
    scavtrap.takeDamage(20);
    scavtrap.beRepaired(10);
    scavtrap.guardGate();

    std::cout << "\n=== Fin du programme ===" << std::endl;
    return 0;
}
