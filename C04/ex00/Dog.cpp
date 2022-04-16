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
	this->type = copy.type;
}

Dog	&Dog::operator = (const Dog &copy)
{
	std::cout << "  Dog Assignation operator called" << std::endl;
	type = copy.type;
		return (*this);
}

void Dog::MakeSound(void)const
{
			std::cout << "THIS OBJECT MUST BE AA \"WOOF \",ah! dog!\n";
}
