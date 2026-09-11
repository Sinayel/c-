#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "ICharacter.hpp"
#include "AMateria.hpp"

#define INVENTORY_SIZE 4

class Character : public ICharacter
{
private:
    std::string _name;
    AMateria *_inventory[INVENTORY_SIZE];

public:
    Character();
    Character(std::string const &name);
    Character(const Character &src);
    Character &operator=(const Character &rhs);
    virtual ~Character();

    virtual std::string const &getName() const;
    virtual void equip(AMateria *m);
    virtual void unequip(int idx);
    virtual void use(int idx, ICharacter &target);
};

#endif
