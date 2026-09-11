#include "hpp/Character.hpp"

Character::Character() : _name("") {
    for (int i = 0; i < INVENTORY_SIZE; i++)
        this->_inventory[i] = 0;
}

Character::Character(std::string const &name) : _name(name) {
    for (int i = 0; i < INVENTORY_SIZE; i++)
        this->_inventory[i] = 0;
}

Character::Character(const Character &src) : ICharacter(), _name(src._name) {
    for (int i = 0; i < INVENTORY_SIZE; i++)
        this->_inventory[i] = 0;
    *this = src;
}

Character &Character::operator=(const Character &rhs) {
    if (this != &rhs) {
        this->_name = rhs._name;
        for (int i = 0; i < INVENTORY_SIZE; i++) {
            delete this->_inventory[i];
            this->_inventory[i] = 0;
            if (rhs._inventory[i])
                this->_inventory[i] = rhs._inventory[i]->clone();
        }
    }
    return *this;
}

Character::~Character() {
    for (int i = 0; i < INVENTORY_SIZE; i++)
        delete this->_inventory[i];
}

std::string const &Character::getName() const {
    return this->_name;
}

void Character::equip(AMateria *m) {
    if (!m)
        return;
    for (int i = 0; i < INVENTORY_SIZE; i++) {
        if (!this->_inventory[i]) {
            this->_inventory[i] = m;
            return;
        }
    }
}

void Character::unequip(int idx) {
    if (idx < 0 || idx >= INVENTORY_SIZE)
        return;
    this->_inventory[idx] = 0;
}

void Character::use(int idx, ICharacter &target) {
    if (idx < 0 || idx >= INVENTORY_SIZE || !this->_inventory[idx])
        return;
    this->_inventory[idx]->use(target);
}
