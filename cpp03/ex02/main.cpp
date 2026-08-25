#include "FragTrap.hpp"

int main()
{
    std::cout << "=== Création d'un ClapTrap ===" << std::endl;
    ClapTrap clap("Clap");
    clap.attack("Bandit");
    clap.takeDamage(4);
    clap.beRepaired(2);

    std::cout << "\n=== Création d'un FragTrap ===" << std::endl;
    FragTrap frag("Frag");
    frag.attack("Raider");
    frag.takeDamage(25);
    frag.beRepaired(10);
    frag.highFivesGuys();

    std::cout << "\n=== Fin du programme ===" << std::endl;
    return 0;
}
