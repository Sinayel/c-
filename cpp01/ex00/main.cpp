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