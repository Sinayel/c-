#include "hpp/MateriaSource.hpp"

MateriaSource::MateriaSource() {
    for (int i = 0; i < MATERIA_SOURCE_SIZE; i++)
        this->_learned[i] = 0;
}

MateriaSource::MateriaSource(const MateriaSource &src) {
    for (int i = 0; i < MATERIA_SOURCE_SIZE; i++)
        this->_learned[i] = 0;
    *this = src;
}

MateriaSource &MateriaSource::operator=(const MateriaSource &rhs) {
    if (this != &rhs) {
        for (int i = 0; i < MATERIA_SOURCE_SIZE; i++) {
            delete this->_learned[i];
            this->_learned[i] = 0;
            if (rhs._learned[i])
                this->_learned[i] = rhs._learned[i]->clone();
        }
    }
    return *this;
}

MateriaSource::~MateriaSource() {
    for (int i = 0; i < MATERIA_SOURCE_SIZE; i++)
        delete this->_learned[i];
}

void MateriaSource::learnMateria(AMateria *m) {
    if (!m)
        return;
    for (int i = 0; i < MATERIA_SOURCE_SIZE; i++) {
        if (!this->_learned[i]) {
            this->_learned[i] = m;
            return;
        }
    }
    delete m;
}

AMateria *MateriaSource::createMateria(std::string const &type) {
    for (int i = 0; i < MATERIA_SOURCE_SIZE; i++) {
        if (this->_learned[i] && this->_learned[i]->getType() == type)
            return this->_learned[i]->clone();
    }
    return 0;
}
