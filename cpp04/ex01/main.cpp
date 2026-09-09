#include "hpp/Animal.hpp"
#include "hpp/Dog.hpp"
#include "hpp/Cat.hpp"
#include "hpp/WrongAnimal.hpp"
#include "hpp/WrongCat.hpp"
#include <iostream>

int main(void) {
	// const Animal *cat = new Cat();
	// const Animal *dog = new Dog();

	const Dog *dogo = new Dog();
	const Cat *cata = new Cat();

	std::cout << std::endl << "Cat :" << cata->getBrain() << std::endl;
	std::cout << "Dog :" << dogo->getBrain() << std::endl << std::endl;

	delete cata;
	delete dogo;

	return (0);
}