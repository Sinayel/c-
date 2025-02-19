#include "ClapTrap.hpp"

int main()
{
    ClapTrap claptrap("Claptrap");

    claptrap.attack("Bandit");
    claptrap.takeDamage(5);
    claptrap.beRepaired(3);
    return 0;
}