#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"
#include "AMateria.hpp"

#define MATERIA_SOURCE_SIZE 4

class MateriaSource : public IMateriaSource
{
private:
    AMateria *_learned[MATERIA_SOURCE_SIZE];

public:
    MateriaSource();
    MateriaSource(const MateriaSource &src);
    MateriaSource &operator=(const MateriaSource &rhs);
    virtual ~MateriaSource();

    virtual void learnMateria(AMateria *m);
    virtual AMateria *createMateria(std::string const &type);
};

#endif
