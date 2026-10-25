#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include <iostream>

int main(void)
{
	std::cout << "--- 1. subject test: delete through Animal* ---" << std::endl;
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	delete j;
	delete i;

	std::cout << "\n--- 2. array: half Dogs, half Cats ---" << std::endl;
	Animal* animals[4];
	int k = 0;
	while (k < 4)
	{
		if (k < 2)
			animals[k] = new Dog();
		else
			animals[k] = new Cat();
		k++;
	}

	std::cout << "\n--- 3. every animal makes its own sound ---" << std::endl;
	k = 0;
	while (k < 4)
	{
		animals[k]->makeSound();
		k++;
	}

	std::cout << "\n--- 4. delete every animal as Animal* ---" << std::endl;
	k = 0;
	while (k < 4)
	{
		delete animals[k];
		k++;
	}

	std::cout << "\n--- 5. deep copy: copy constructor ---" << std::endl;
	Dog dog;
	dog.getBrain()->ideas[0] = "original";
	Dog copy(dog);
	copy.getBrain()->ideas[0] = "changed";
	std::cout << "dog idea:  " << dog.getBrain()->ideas[0] << std::endl;
	std::cout << "copy idea: " << copy.getBrain()->ideas[0] << std::endl;
	std::cout << "dog brain:  " << dog.getBrain() << std::endl;
	std::cout << "copy brain: " << copy.getBrain() << std::endl;

	std::cout << "\n--- 6. deep copy: operator= ---" << std::endl;
	Cat cat;
	cat.getBrain()->ideas[0] = "original";
	Cat other;
	other = cat;
	other.getBrain()->ideas[0] = "changed";
	std::cout << "cat idea:   " << cat.getBrain()->ideas[0] << std::endl;
	std::cout << "other idea: " << other.getBrain()->ideas[0] << std::endl;

	std::cout << "\n--- 7. end of main ---" << std::endl;
	return (0);
}
