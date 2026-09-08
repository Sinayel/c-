#include "hpp/Dog.hpp"
#include <iostream>

Dog::Dog() : Animal() {
    this->_type = "Dog";
    std::cout << "Dog constructor" << std::endl;
}

Dog::Dog(const Dog &src) : Animal(src) {
    std::cout << "Dog copy constructor" << std::endl;
}

Dog &Dog::operator=(const Dog &rhs) {
    if (this != &rhs)
        Animal::operator=(rhs);
    return *this;
}

Dog::~Dog() {
    std::cout << "Dog destructor" << std::endl;
}

void Dog::makeSound() const {
    std::cout << "Woof! Woof!" << std::endl;
}