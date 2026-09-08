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

	std::cout << "Animal type : " << animal->getType() << std::endl << std::endl;
	std::cout << "Dog type : " << dog->getType() << std::endl << std::endl;
	std::cout << "Cat type : " << cat->getType() << std::endl << std::endl;
	animal->makeSound();
	dog->makeSound();
	cat->makeSound();
	std::cout << std::endl;
	delete animal;
	delete dog;
	delete cat;

	Dog dogCopy;
	Dog dogAssigned;
	dogAssigned = dogCopy;
	Cat catCopy;
	Cat catAssigned(catCopy);
	std::cout << std::endl;

	dogAssigned.makeSound();
	catAssigned.makeSound();
	std::cout << std::endl;

	WrongAnimal *wrongAnimal = new WrongAnimal();
	WrongAnimal *wrongCat = new WrongCat();
	WrongCat *wrongCatSecond = new WrongCat();

	std::cout << std::endl;
	std::cout << "WrongCat type : " << wrongCat->getType() << std::endl << std::endl;
	wrongAnimal->makeSound();
	wrongCat->makeSound();
	wrongCatSecond->makeSound();

	std::cout << std::endl;
	delete wrongAnimal;
	delete wrongCat;
	delete wrongCatSecond;
	std::cout << std::endl;

	return (0);
}