#include "WrongCat.hpp"
#include <iostream>

WrongCat::WrongCat(): WrongAnimal()
{
	type = "Wrong Cat";
	std::cout << "Wrong Cat default constructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat &other): WrongAnimal(other)
{
	std::cout << "Wrong Cat copy constructor called" << std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat &other)
{
	std::cout << "Wrong Cat copy assignment operator called" << std::endl;
	if(this != &other)
	{
		WrongAnimal::operator=(other);
	}
	return (*this);
}

WrongCat::~WrongCat()
{
	std::cout << "Wrong Cat destroyed" << std::endl;
}

void WrongCat::makeSound() const
{
	std::cout << "WrongCat meow" << std::endl;
}
