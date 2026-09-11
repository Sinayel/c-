#include "hpp/AMateria.hpp"

AMateria::AMateria(std::string const &type) : _type(type) {}

AMateria::AMateria(const AMateria &src) : _type(src._type) {}

AMateria &AMateria::operator=(const AMateria &rhs) {
    // Copying the type doesn't make sense: a Materia keeps its own type.
    (void)rhs;
    return *this;
}

AMateria::~AMateria() {}

std::string const &AMateria::getType() const {
    return this->_type;
}

void AMateria::use(ICharacter &target) {
    (void)target;
}
