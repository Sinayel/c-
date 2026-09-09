#include "hpp/Cat.hpp"
#include <iostream>

Cat::Cat() : Animal() {
    this->_type = "Cat";
    std::cout << "Cat constructor" << std::endl;
}

Cat::Cat(const Cat &src) : Animal(src) {
    this->_brain = new Brain(*src._brain);
    std::cout << "Cat copy constructor" << std::endl;
}

Cat &Cat::operator=(const Cat &rhs) {
    if (this != &rhs)
        Animal::operator=(rhs);
    return *this;
}

Brain *const &Cat::getBrain() const {
    return this->_brain;
}

Cat::~Cat() {
    std::cout << "Cat destructor" << std::endl;
}

void Cat::makeSound() const {
    std::cout << "Meow!" << std::endl;
}