#include "Weapon.hpp"

class HumanA{
public:
    HumanA(std::string name);
    HumanA();
    ~HumanA();
private:
    std::string _name;
    std::string _weapon;
};