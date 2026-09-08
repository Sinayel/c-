#include "hpp/Animal.hpp"
#include "hpp/Dog.hpp"
#include "hpp/Cat.hpp"
#include "hpp/WrongAnimal.hpp"
#include "hpp/WrongCat.hpp"
#include <iostream>

int main(void) {
	const Animal *animal = new Animal();
	const Animal *dog = new Dog();
	const Animal *cat = new Cat();

	std::cout << animal->getType() << std::endl;
	std::cout << dog->getType() << std::endl;
	std::cout << cat->getType() << std::endl;
	animal->makeSound();
	dog->makeSound();
	cat->makeSound();

	delete animal;
	delete dog;
	delete cat;

	Dog dogCopy;
	Dog dogAssigned;
	dogAssigned = dogCopy;
	Cat catCopy;
	Cat catAssigned(catCopy);

	dogAssigned.makeSound();
	catAssigned.makeSound();

	WrongAnimal *wrongAnimal = new WrongAnimal();
	WrongAnimal *wrongCat = new WrongCat();
	std::cout << wrongCat->getType() << std::endl;
	wrongAnimal->makeSound();
	wrongCat->makeSound();
	delete wrongAnimal;
	delete wrongCat;

	return (0);
}