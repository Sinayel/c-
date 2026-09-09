#include "hpp/Animal.hpp"

Brain::Brain() {
    std::cout << "Brain constructor called" << std::endl;
}

Brain::~Brain() {
    std::cout << "Brain destructor called" << std::endl;
}

// Brain &operator=(const Brain &rhs) {
//     if (this != &rhs)
//         Brain::operator=(rhs.);
//     return *this;
// }