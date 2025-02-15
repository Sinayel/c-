<<<<<<< HEAD
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylouvel <ylouvel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 12:02:43 by ylouvel           #+#    #+#             */
/*   Updated: 2025/01/27 12:03:32 by ylouvel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Zombie {
    private:
        std::string _name;
        std::string _type;
    public:
        Zombie();
        ~Zombie();
        void announce();
        void setName(std::string name);
        void setType(std::string type);
};
=======
#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class Zombie{
public:
    Zombie();
    Zombie(std::string name);
    ~Zombie();
    void announce(void)const;

private:
    std::string _name;
};

void randomChump(std::string name);
Zombie *newZombie(std::string name);

#endif
>>>>>>> 7f30b27a6512db1999d45c2adbbbf12a2b3ba568
