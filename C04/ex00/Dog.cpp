#include "Dog.hpp"


Dog::Dog(std::string)
{

}
Dog::Dog(void)
{
	std::cout << "Dog constructor called" << std::endl;
	Animal::type = "dog";
}
Dog::~Dog(void)
{

}
Dog::Dog(const Dog &copy) : Animal()
{
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}

Dog	&Dog::operator = (const Dog &copy)
{
	std::cout << "Assignation operator called" << std::endl;
	type = copy.type;
		return (*this);
}
