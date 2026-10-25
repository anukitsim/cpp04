#include "WrongAnimal.hpp"
#include <iostream>

WrongAnimal::WrongAnimal(): type("Wrong Animal")
{
	std::cout << "Wrong Animal default constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &other): type(other.type)
{
	std::cout << "Wrong Animal copy constructor called" << std::endl;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &other)
{
	std::cout << "Wrong Animal copy assignment operator called" << std::endl;
	if(this != &other)
	{
		this->type = other.type;
	}
	return (*this);
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "Wrong Animal destroyed" << std::endl;
}

std::string WrongAnimal::getType () const
{
	return (type);
}

void WrongAnimal::makeSound () const
{
	std::cout << "Wrong Animal sound" << std::endl;
}
