#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie {
public:
    Zombie();
    ~Zombie();
    void setName(std::string name);
    std::string getName() const;
    void announce() const;

private:
    std::string _name;
};

Zombie* zombieHorde(int N, std::string name);

#endif
