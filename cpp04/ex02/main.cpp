#include "hpp/Animal.hpp"
#include "hpp/Dog.hpp"
#include "hpp/Cat.hpp"
#include "hpp/WrongAnimal.hpp"
#include "hpp/WrongCat.hpp"
#include <iostream>

int main(void) {
	// Animal is now abstract: this line would fail to compile if uncommented.
	// const Animal *meta = new Animal();

	const Animal *j = new Dog();
	const Animal *i = new Cat();

	std::cout << j->getType() << std::endl;
	std::cout << i->getType() << std::endl;
	i->makeSound();
	j->makeSound();

	delete j;
	delete i;

	std::cout << std::endl << "-- WrongAnimal / WrongCat --" << std::endl;
	const WrongAnimal *wrongMeta = new WrongAnimal();
	const WrongAnimal *wrongCat = new WrongCat();
	wrongMeta->makeSound();
	wrongCat->makeSound();
	delete wrongMeta;
	delete wrongCat;

	std::cout << std::endl << "-- Array of Animal, deep copy check --" << std::endl;
	Animal *animals[4];
	for (int k = 0; k < 4; k++)
		animals[k] = (k % 2 == 0) ? static_cast<Animal *>(new Dog()) : static_cast<Animal *>(new Cat());

	Animal *copy = new Dog(*static_cast<Dog *>(animals[0]));
	delete copy;

	for (int k = 0; k < 4; k++)
		delete animals[k];

	return (0);
}
