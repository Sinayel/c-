#ifndef BRAIN_HPP
#define BRAIN_HPP

#include "Animal.hpp"
#include <iostream>
#include <string>

class Brain
{
private:
    std::string ideas[100];
public:
    Brain();
    ~Brain();
    Brain &operator=(const Brain &rhs);
    std::string const &getType() const;
};

#endif