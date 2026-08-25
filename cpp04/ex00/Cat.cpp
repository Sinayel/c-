#include "Cat.hpp"
#include <iostream>

Cat::Cat() : Animal() {
    this->_type = "Cat";
    std::cout << "Cat constructor" << std::endl;
}

Cat::Cat(const Cat &src) : Animal(src) {
    std::cout << "Cat copy constructor" << std::endl;
}

Cat &Cat::operator=(const Cat &rhs) {
    if (this != &rhs)
        Animal::operator=(rhs);
    return *this;
}

Cat::~Cat() {
    std::cout << "Cat destructor" << std::endl;
}

void Cat::makeSound() const {
    std::cout << "Meow!" << std::endl;
}