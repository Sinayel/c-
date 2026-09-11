#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <string>

class ICharacter;

class AMateria
{
public:
    AMateria(std::string const &type);
    AMateria(const AMateria &src);
    AMateria &operator=(const AMateria &rhs);
    virtual ~AMateria();

    std::string const &getType() const; //Returns the materia type

    virtual AMateria *clone() const = 0;
    virtual void use(ICharacter &target);
protected:
    std::string _type;
};

#endif
