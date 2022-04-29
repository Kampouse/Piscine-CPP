#include "Base.hpp"

Base::Base(void)
{
	std::cout << "Constructor called" << std::endl;
}

Base::~Base(void)
{
	std::cout << "Destructor called" << std::endl;
}

Base::Base(const Base &copy)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}

Base	&Base::operator = (const Base &copy)
{
	this->elem  = copy.elem;
	std::cout << "Assignation operator called" << std::endl;
	return (*this);
}
