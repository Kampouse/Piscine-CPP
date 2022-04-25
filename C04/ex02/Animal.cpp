#include "Animal.hpp"

Animal::Animal(void)
{
	std::cout << "Animal constructor called\n";
}

Animal::~Animal(void)
{
	std::cout << "Animal destructor called\n";
}

Animal::Animal(const Animal &copy)
{
	std::cout << "Copy constructor called" << std::endl;
	this->type = copy.type;
	*this = copy;
}

Animal &Animal::operator = (const Animal &copy)
{
	this->type = copy.type;
	std::cout << "Animal assignation operator called" << std::endl;
		return (*this);
}

