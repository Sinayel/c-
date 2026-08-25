#include "Animal.hpp"
#include <iostream>

Animal::Animal() : _type("Animal") {
    std::cout << "Animal constructor called" << std::endl;
}

Animal::Animal(const Animal &src) : _type(src._type) {
    std::cout << "Animal copy constructor called" << std::endl;
}

Animal &Animal::operator=(const Animal &rhs) {
    if (this != &rhs)
        this->_type = rhs._type;
    return *this;
}

Animal::~Animal() {
    std::cout << "Animal destructor called" << std::endl;
}

std::string const &Animal::getType() const {
    return this->_type;
}

void Animal::makeSound() const {
    std::cout << "Some generic animal sound!" << std::endl;
}