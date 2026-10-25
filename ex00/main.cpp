#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include <iostream>

int main(void)
{
	std::cout << "--- 1. subject test: birth ---" << std::endl;
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	std::cout << "\n--- 2. subject test: types and sounds ---" << std::endl;
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound();
	j->makeSound();
	meta->makeSound();

	std::cout << "\n--- 3. delete through Animal* (Dog/Cat destructor runs first) ---" << std::endl;
	delete meta;
	delete j;
	delete i;

	std::cout << "\n--- 4. wrong classes: no virtual, so the parent sound ---" << std::endl;
	const WrongAnimal* wrong = new WrongCat();
	std::cout << wrong->getType() << " " << std::endl;
	wrong->makeSound();
	delete wrong;

	std::cout << "\n--- 5. WrongCat used directly: its own sound ---" << std::endl;
	WrongCat wc;
	wc.makeSound();

	std::cout << "\n--- 6. copy constructor and operator= ---" << std::endl;
	Dog dog;
	Dog copy(dog);
	Cat cat;
	Cat other;
	other = cat;
	copy.makeSound();
	other.makeSound();

	std::cout << "\n--- 7. end of main ---" << std::endl;
	return (0);
}
