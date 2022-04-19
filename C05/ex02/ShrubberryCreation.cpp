#include "ShrubberryCreation.hpp"

ShrubberryCreation::ShrubberryCreation(void)
{
	std::cout << "Constructor called" << std::endl;
}

ShrubberryCreation::~ShrubberryCreation(void)
{
	std::cout << "Destructor called" << std::endl;
}

ShrubberryCreation::ShrubberryCreation(const ShrubberryCreation &copy)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}

ShrubberryCreation	&ShrubberryCreation::operator = (const ShrubberryCreation &copy)
{
	std::cout << "Assignation operator called" << std::endl;
	return (*this);
}
