#include "hpp/Dog.hpp"
#include <iostream>

Dog::Dog() : Animal(), _brain(new Brain()) {
    this->_type = "Dog";
    std::cout << "Dog constructor" << std::endl;
}

Dog::Dog(const Dog &src) : Animal(src), _brain(new Brain(*src._brain)) {
    std::cout << "Dog copy constructor" << std::endl;
}

Dog &Dog::operator=(const Dog &rhs) {
    if (this != &rhs) {
        Animal::operator=(rhs);
        *this->_brain = *rhs._brain;
    }
    return *this;
}

Brain *const &Dog::getBrain() const {
    return this->_brain;
}

Dog::~Dog() {
    delete this->_brain;
    std::cout << "Dog destructor" << std::endl;
}

void Dog::makeSound() const {
    std::cout << "Woof! Woof!" << std::endl;
}
