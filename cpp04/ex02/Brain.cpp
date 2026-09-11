#include "hpp/Brain.hpp"
#include <iostream>

Brain::Brain() {
    std::cout << "Brain constructor called" << std::endl;
}

Brain::Brain(const Brain &src) {
    *this = src;
    std::cout << "Brain copy constructor called" << std::endl;
}

Brain &Brain::operator=(const Brain &rhs) {
    if (this != &rhs) {
        for (int i = 0; i < 100; i++)
            this->ideas[i] = rhs.ideas[i];
    }
    return *this;
}

Brain::~Brain() {
    std::cout << "Brain destructor called" << std::endl;
}
