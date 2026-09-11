#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <string>

class WrongAnimal
{
public:
    WrongAnimal();
    WrongAnimal(const WrongAnimal &src);
    WrongAnimal &operator=(const WrongAnimal &rhs);
    ~WrongAnimal();
    std::string const &getType() const;
    void makeSound() const;
protected:
    std::string _type;
};

#endif