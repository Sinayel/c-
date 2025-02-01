#include "Weapon.hpp"

class HumanA{
public:
    HumanA(std::string name, Weapon &weapon) : _name(name), _weapon(weapon) {};
    void attack();
    HumanA() = delete;
    ~HumanA();
private:
    std::string _name;
    Weapon &_weapon;
};