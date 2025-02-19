<<<<<<< HEAD
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylouvel <ylouvel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 14:07:49 by ylouvel           #+#    #+#             */
/*   Updated: 2025/01/27 14:07:50 by ylouvel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void Zombie::announce() {
    std::cout << this->_name << " (" << this->_type << "): BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::setName(std::string name) {
    this->_name = name;
}

void Zombie::setType(std::string type) {
    this->_type = type;
}

Zombie::Zombie() {
    std::cout << "Zombie created" << std::endl;
}

Zombie::~Zombie() {
    std::cout << "Zombie destroyed" << std::endl;
}

int main() {
    Zombie zombie;

    zombie.setName("Foo");
    zombie.setType("Walker");
    zombie.announce();

    return 0;
}
=======
#include "Zombie.hpp"

int	main(void)
{
	std::cout << "------------ stackZombies ------------" << std::endl;
	Zombie	zombie1("Zombie1");
	Zombie	zombie2("Zombie2");
	Zombie	zombie3;

	zombie1.announce();
	zombie2.announce();
	zombie3.announce();
	randomChump("randomChumpZ");

	std::cout << std::endl;
	std::cout << "------------ heapZombies ------------" << std::endl;
	Zombie	*heapZ;

	heapZ = newZombie("HeapZ");
	heapZ->announce();
	delete(heapZ);

	return (0);
}
>>>>>>> 7f30b27a6512db1999d45c2adbbbf12a2b3ba568
