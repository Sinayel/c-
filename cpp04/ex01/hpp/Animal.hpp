#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <string>
#include "hpp/Brain.hpp"

class Animal
{
public:
    Animal();
    Animal(const Animal &src);
    Animal &operator=(const Animal &rhs);
    virtual ~Animal();
    std::string const &getType() const;
    virtual void makeSound() const;
protected:
    std::string _type;
};

#endif