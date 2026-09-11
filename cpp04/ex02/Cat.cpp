#include "hpp/Cat.hpp"
#include <iostream>

Cat::Cat() : Animal(), _brain(new Brain()) {
    this->_type = "Cat";
    std::cout << "Cat constructor" << std::endl;
}

Cat::Cat(const Cat &src) : Animal(src), _brain(new Brain(*src._brain)) {
    std::cout << "Cat copy constructor" << std::endl;
}

Cat &Cat::operator=(const Cat &rhs) {
    if (this != &rhs) {
        Animal::operator=(rhs);
        *this->_brain = *rhs._brain;
    }
    return *this;
}

Brain *const &Cat::getBrain() const {
    return this->_brain;
}

Cat::~Cat() {
    delete this->_brain;
    std::cout << "Cat destructor" << std::endl;
}

void Cat::makeSound() const {
    std::cout << "Meow!" << std::endl;
}
